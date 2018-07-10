// Siyang Liu (6796)
// Nio Automotives
// 2018-07-05
// entry point
// IDCRead_ECU.cpp: parse idc file from ECU + visualization

#include <ibeosdk/ecu.hpp>

#include <ibeosdk/devices/IdcFile.hpp>
#include <ibeosdk/datablocks/commands/CommandEcuAppBaseStatus.hpp>
#include <ibeosdk/datablocks/commands/ReplyEcuAppBaseStatus.hpp>
#include <ibeosdk/datablocks/commands/CommandEcuAppBaseCtrl.hpp>
#include <ibeosdk/datablocks/commands/EmptyCommandReply.hpp>

#include "IbeoDraw.h"


//======================================================================

using namespace ibeosdk;

//======================================================================

const ibeosdk::Version::MajorVersion majorVersion(5);
const ibeosdk::Version::MinorVersion minorVersion(2);
const ibeosdk::Version::Revision revision(2);
const ibeosdk::Version::PatchLevel patchLevel;
const ibeosdk::Version::Build build;
const std::string info = "Parse .IDC from ECU";

ibeosdk::Version appVersion(majorVersion, minorVersion, revision, patchLevel, build, info);

IbeoSDK ibeoSDK;

//======================================================================

void file_demo(const std::string& filename);

//======================================================================

TimeConversion tc;

//======================================================================
//=========================DEPRECATED===================================
//======================================================================

//struct objectList
//{
//	uint32_t scanStartTimestamp; // avaiable: Frac, Milli, Micro seconds
//	int nbOfObj;
//	std::vector<uint16_t> objID;
//	std::vector<uint16_t> flag; /*	Flags_TrackedByStationaryModel  = 0x0040, ///< is object tracked using stationary model
//									Flags_Mobile                    = 0x0080, ///< Has been detected/validated as mobile. (the current tracking model is irrelevant; this flag just means it has been moving at some time)
//									Flags_Validated                 = 0x0100  ///< Object (stationary or dynamic) has been validated, i.e. valid enough to send out to the interface */
//	std::vector<bool> trackedByStationaryModel;
//	std::vector<bool> mobile;
//	std::vector<bool> motionModelValidated;
//	std::vector<uint32_t> objAge;
//	std::vector<uint32_t> timestamp; // avaiable: Frac, Milli, Micro seconds
//	std::vector<uint16_t> objPredAge;
//	std::vector<int> classification;
//	std::vector<uint8_t> classCertainty;
//	std::vector<uint32_t> classAge;
//	std::vector<float> objBoxCenterX;
//	std::vector<float> objBoxCenterY; //Sigma not available yet
//	std::vector<float> objBoxLength; //Box.X
//	std::vector<float> objBoxWidth; //Box.Y
//	std::vector<float> objBoxOrientation; //rad
//	std::vector<float> objBoxOrientationSigma;
//	std::vector<float> RelVelX;
//	std::vector<float> RelVelY;
//	std::vector<float> RelVelSigmaX;
//	std::vector<float> RelVelSigmaY;
//	std::vector<float> AbsVelX;
//	std::vector<float> AbsVelY;
//	std::vector<float> AbsVelSigmaX;
//	std::vector<float> AbsVelSigmaY;
//	/*Other avaiable fields:
//	nbOfContourPoints;IdxOfclosestPoint;RefPointLocation;RefPointCoords+Sigma;
//	RefPointPosCorrCoeffs;ObjPriority;ObjExtMeasurement;List of Contour Points;
//	*/
//	void addObj(
//		uint16_t objID,
//		uint16_t flag,
//		bool trackedByStationaryModel,
//		bool mobile,
//		bool motionModelValidated,
//		uint32_t objAge,
//		uint32_t timestamp, // avaiable: Frac, Milli, Micro seconds
//		uint16_t objPredAge,
//		int classification,
//		uint8_t classCertainty,
//		uint32_t classAge,
//		float objBoxCenterX,
//		float objBoxCenterY,
//		float objBoxLength, //Box.X
//		float objBoxWidth, //Box.Y
//		float objBoxOrientation, //rad
//		float objBoxOrientationSigma,
//		float RelVelX,
//		float RelVelY,
//		float RelVelSigmaX,
//		float RelVelSigmaY,
//		float AbsVelX,
//		float AbsVelY,
//		float AbsVelSigmaX,
//		float AbsVelSigmaY
//	) {
//		this->objID.push_back(objID);
//		this->flag.push_back(flag);
//		this->trackedByStationaryModel.push_back(trackedByStationaryModel);
//		this->mobile.push_back(mobile);
//		this->motionModelValidated.push_back(motionModelValidated);
//		this->objAge.push_back(objAge);
//		this->timestamp.push_back(timestamp);
//		this->objPredAge.push_back(objPredAge);
//		this->classification.push_back(classification);
//		this->classCertainty.push_back(classCertainty);
//		this->classAge.push_back(classAge);
//		this->objBoxCenterX.push_back(objBoxCenterX);
//		this->objBoxCenterY.push_back(objBoxCenterY);
//		this->objBoxLength.push_back(objBoxLength);
//		this->objBoxWidth.push_back(objBoxWidth);
//		this->objBoxOrientation.push_back(objBoxOrientation);
//		this->objBoxOrientationSigma.push_back(objBoxOrientationSigma);
//		this->RelVelX.push_back(RelVelX);
//		this->RelVelY.push_back(RelVelY);
//		this->RelVelSigmaX.push_back(RelVelSigmaX);
//		this->RelVelSigmaY.push_back(RelVelSigmaY);
//		this->AbsVelX.push_back(AbsVelX);
//		this->AbsVelY.push_back(AbsVelY);
//		this->AbsVelSigmaX.push_back(AbsVelSigmaX);
//		this->AbsVelSigmaY.push_back(AbsVelSigmaY);
//	}
//};
//
//struct myObj {
//	int classification;
//	float centerX;
//	float centerY;
//	float length;
//	float width;
//	float orientation;
//	float relVelX;
//	float relVelY;
//	myObj() { //dummy car obj
//		classification = 5;
//		centerX = (float)76.1921;
//		centerY = (float)4.28925;
//		length = (float)4.17203;
//		width = (float)1.73374;
//		orientation = (float)0.0730224;
//		relVelX = (float)4.44;
//		relVelY = (float)0.33;
//	}
//	myObj(
//		int cl,
//		float cX,
//		float cY,
//		float lth,
//		float wth,
//		float otn,
//		float rVX,
//		float rVY
//	) {
//		this->classification = cl;
//		this->centerX = cX;
//		this->centerY = cY;
//		this->length = lth;
//		this->width = wth;
//		this->orientation = otn;
//		this->relVelX = rVX;
//		this->relVelY = rVY;
//	}
//};
//
//#define w 900 //define window size
//#define unit 50 //define each step irl
//
////prepare global containers for frame
//Mat fov = Mat::zeros(w + 20, w, CV_8UC3); // leave space at bottom
//char fovTitle[] = "ECU IDC File Replay";
//Mat frame; 
//
//void myRotate(float& x, float& y, float angle) { //rotate 2D coordinate by angle
//	float tmpX = cos(angle) * x + sin(angle) * y;
//	float tmpY = -sin(angle) * x + cos(angle) * y;
//	x = tmpX;
//	y = tmpY;
//}
//
//Scalar myColor(int& c)
//{
//	if ((c == 5)
//		|| (c == 6)) { //car & truck
//		return Scalar(0, 255, 0); //green
//	}
//	else if (c == 3) { //ped
//		return Scalar(0, 255, 255); // green + red = yellow
//	}
//	else if (c == 4) {
//		return Scalar(0, 0, 255); // red
//	}
//	else if (c == 15) { //MBike
//		return Scalar(255, 0, 255); // violet 
//	}
//	return Scalar(0, 122, 255); // orange
//}
//
//void addObj(Mat& img, IbeoECUObj o) {
//	// find the coordinates of obj box in ibeo coordinate
//	myRotate(o.centerX, o.centerY, -o.orientation);
//	float pt1x = o.centerX - o.length / (float)2.00000;
//	float pt2x = o.centerX + o.length / (float)2.00000;
//	float pt1y = o.centerY - o.width / (float)2.00000;
//	float pt2y = o.centerY + o.width / (float)2.00000;
//	float arrowx = o.centerX + +o.length / (float)2.00000 + sqrtf(o.relVelX * o.relVelX + o.relVelY * o.relVelY);
//	float arrowy = o.centerY;
//	myRotate(pt1x, pt1y, o.orientation);
//	myRotate(pt2x, pt2y, o.orientation);
//	myRotate(arrowx, arrowy, o.orientation);
//	myRotate(o.centerX, o.centerY, o.orientation);
//	//std::cerr << "coordinate in ibeo system:" << std::endl;
//	//std::cerr << o.orientation << std::endl;
//	//std::cerr << pt1x << std::endl;
//	//std::cerr << pt1y << std::endl;
//	//std::cerr << pt2x << std::endl;
//	//std::cerr << pt2y << std::endl;
//	//std::cerr << arrowx << std::endl;
//	//std::cerr << arrowy << std::endl;
//	//std::cerr << std::endl;
//
//	//convert ibeo coordinate to opencv mat val
//	pt1x *= w / unit / 3;
//	pt1y *= w / unit / 3;
//	pt2x *= w / unit / 3;
//	pt2y *= w / unit / 3; //900 pixels represents 150m irl.
//	arrowx *= w / unit / 3;
//	arrowy *= w / unit / 3;
//	//std::cerr << "mat values:" << std::endl;
//	//std::cerr << pt1x << std::endl;
//	//std::cerr << pt1y << std::endl;
//	//std::cerr << pt2x << std::endl;
//	//std::cerr << pt2y << std::endl;
//	//std::cerr << arrowx << std::endl;
//	//std::cerr << arrowy << std::endl;
//	//std::cerr << std::endl;
//
//	//std::cerr << "mat locations:" << std::endl;
//	//std::cerr << "x1 = " << (float)w / 2.00000 - pt1y << std::endl;
//	//std::cerr << "y1 = " << (float)w - pt1x << std::endl;
//	//std::cerr << "x2 = " << (float)w / 2.00000 - pt2y << std::endl;
//	//std::cerr << "y2 = " << (float)w - pt2x << std::endl;
//	//std::cerr << std::endl;
//
//	rectangle(img,
//		Point(w / 2 - (int)pt1y, w - (int)pt1x),
//		Point(w / 2 - (int)pt2y, w - (int)pt2x),
//		myColor(o.classification), 2, LINE_8, 0
//	);
//	arrowedLine(img,
//		Point(w / 2 - (int)o.centerY * (w / unit / 3), w - (int)o.centerX * (w / unit / 3)), //box center location
//		Point(w / 2 - (int)arrowy, w - (int)arrowx),
//		myColor(o.classification), 1, LINE_8, 0,
//		0.1//tip length
//	);
//}
//
//void addLine(Mat img, Point start, float angle, int length, Scalar color, int thickness)//angle in rad, left +, right -, center forward 0
//{
//	int dx = (int)(-sin(angle) * (float)length);
//	int dy = (int)(-cos(angle) * (float)length);
//	//std::cerr << dx << std::endl;
//	//std::cerr << dy << std::endl;
//	line(img, start,
//		Point(start.x + dx, start.y + dy),
//		color, thickness, LINE_8);
//}
//
//void setBackground(Mat& img) {
//	//parse fov into 3*3 grid, each block represents 50m*50m irl.
//	line(img, Point(0, w / 3), Point(w, w / 3), Scalar(128, 138, 125), 1, LINE_8);
//	line(img, Point(0, w * 2 / 3), Point(w, w * 2 / 3), Scalar(128, 138, 125), 1, LINE_8);
//	line(img, Point(w / 3, 0), Point(w / 3, w + 20), Scalar(128, 138, 125), 1, LINE_8);
//	line(img, Point(w * 2 / 3, 0), Point(w * 2 / 3, w + 20), Scalar(128, 138, 125), 1, LINE_8);
//	//origin
//	line(img, Point(w / 2, w), Point(w / 2, w * 5 / 6), Scalar(0, 0, 255), 2, LINE_8);
//	line(img, Point(w / 2, w), Point(w / 3, w), Scalar(0, 255, 0), 2, LINE_8);
//	//FOV limits
//	float fullFOV = (float)145.000 / (float)180.000 * (float)3.14159;
//	//std::cerr << "fullFOV = " << fullFOV << std::endl;
//	addLine(img, Point(w / 2, w), fullFOV / 2, 800, Scalar(128, 138, 125), 1);
//	addLine(img, Point(w / 2, w), -fullFOV / 2, 800, Scalar(128, 138, 125), 1);
//}
//
//======================================================================
//========================DEPRECATED====================================
//======================================================================


class AllListener :
	public ibeosdk::DataListener<ScanEcu>,
	public ibeosdk::DataListener<Scan2208>,
	public ibeosdk::DataListener<ObjectListEcu>,
	public ibeosdk::DataListener<ObjectListEcuEt>,
	public ibeosdk::DataListener<ObjectListEcuEtDyn>,
	public ibeosdk::DataListener<RefObjectListEcuEtDyn>,
	public ibeosdk::DataListener<PositionWgs84_2604>,
	public ibeosdk::DataListener<MeasurementList2821>,
	public ibeosdk::DataListener<VehicleStateBasicEcu2806>,
	public ibeosdk::DataListener<VehicleStateBasicEcu>,
	public ibeosdk::DataListener<ObjectAssociationList4001>,
	public ibeosdk::DataListener<DeviceStatus>,
	public ibeosdk::DataListener<DeviceStatus6303>,
	public ibeosdk::DataListener<LogMessageError>,
	public ibeosdk::DataListener<LogMessageWarning>,
	public ibeosdk::DataListener<LogMessageNote>,
	public ibeosdk::DataListener<LogMessageDebug>,
	public ibeosdk::DataListener<Odometry9002>,
	public ibeosdk::DataListener<GpsImu9001>,
	public ibeosdk::DataListener<SystemMonitoringCanStatus6700>,
	public ibeosdk::DataListener<SystemMonitoringDeviceStatus6701>,
	public ibeosdk::DataListener<SystemMonitoringSystemStatus6705> {
public:
	virtual ~AllListener() {}

public:

	//========================================
	// ACTIVE Scan points output
	void onData(const ScanEcu* const scan)
	{
		logInfo << std::setw(5) << scan->getSerializedSize() << " Bytes  "
			<< "ScanEcu received: # " << scan->getScanNumber()
			<< "  #Pts: " << scan->getNumberOfScanPoints()
			<< "  ScanStart: " << tc.toString(scan->getStartTimestamp().toPtime(), 3)
			<< std::endl;
	}

	//========================================
	//Scala Scan points
	void onData(const Scan2208* const scan)
	{
		logInfo << std::setw(5) << scan->getSerializedSize() << " Bytes  "
			<< "Scan2208 received: # " << scan->getScanNumber()
			<< "  #Pts: " << scan->getSubScans().at(0).getNbOfPoints()
			<< "  ScanStart: " << tc.toString(scan->getSubScans().at(0).getStartScanTimestamp().toPtime(), 3)
			<< std::endl;
	}

	//========================================
	void onData(const ObjectListEcu* const objList)
	{
		logInfo << std::setw(5) << objList->getSerializedSize() << " Bytes  " << "ObjectListEcu received: # " << objList->getNumberOfObjects() << std::endl;
	}

	//========================================
	// ACTIVE ECU object list ouput
	IbeoECUObjList parseObjList(const ObjectListEcuEt* const objList) { //Parse Ibeo data block into struct

		std::cerr << "Object List DataBlock received" << std::endl;
		
		IbeoECUObjList currentObjectList = {
			objList->getTimestamp().getMilliseconds(), // put in milliseconds
			objList->getNbOfObjects()
		};
		for (unsigned int i = 0; i < objList->getNbOfObjects(); i++) {
			if (i >= _MAX_OBJ_NUM_) {
				std::cerr << "Object list overflow" << std::endl;
				break;
			}
			currentObjectList.IbeoECUObjs[i].objID = objList->getObjects().at(i).getObjectId();
			currentObjectList.IbeoECUObjs[i].flag = objList->getObjects().at(i).getFlags();
			currentObjectList.IbeoECUObjs[i].trackedByStationaryModel = objList->getObjects().at(i).trackedByStationaryModel();
			currentObjectList.IbeoECUObjs[i].mobile = objList->getObjects().at(i).mobile();
			currentObjectList.IbeoECUObjs[i].motionModelValidated = objList->getObjects().at(i).motionModelValidated();
			currentObjectList.IbeoECUObjs[i].objAge = objList->getObjects().at(i).getObjectAge();
			currentObjectList.IbeoECUObjs[i].timestamp = objList->getObjects().at(i).getTimestamp().getMilliseconds();
			currentObjectList.IbeoECUObjs[i].objPredAge = objList->getObjects().at(i).getObjectPredAge();
			currentObjectList.IbeoECUObjs[i].classification = objList->getObjects().at(i).getClassification();
			currentObjectList.IbeoECUObjs[i].classCertainty = objList->getObjects().at(i).getClassCertainty();
			currentObjectList.IbeoECUObjs[i].classAge = objList->getObjects().at(i).getClassAge();
			currentObjectList.IbeoECUObjs[i].centerX = objList->getObjects().at(i).getObjBoxCenter().getX();
			currentObjectList.IbeoECUObjs[i].centerY = objList->getObjects().at(i).getObjBoxCenter().getY();
			currentObjectList.IbeoECUObjs[i].length = objList->getObjects().at(i).getObjBoxSize().getX();
			currentObjectList.IbeoECUObjs[i].width = objList->getObjects().at(i).getObjBoxSize().getY();
			currentObjectList.IbeoECUObjs[i].orientation = objList->getObjects().at(i).getObjBoxOrientation();
			currentObjectList.IbeoECUObjs[i].orientationSigma = objList->getObjects().at(i).getObjBoxOrientationSigma();
			currentObjectList.IbeoECUObjs[i].relVelX = objList->getObjects().at(i).getRelVelocity().getX();
			currentObjectList.IbeoECUObjs[i].relVelY = objList->getObjects().at(i).getRelVelocity().getY();
			currentObjectList.IbeoECUObjs[i].relVelSigmaX = objList->getObjects().at(i).getRelVelocitySigma().getX();
			currentObjectList.IbeoECUObjs[i].relVelSigmaY = objList->getObjects().at(i).getRelVelocitySigma().getY();
			currentObjectList.IbeoECUObjs[i].absVelX = objList->getObjects().at(i).getAbsVelocity().getX();
			currentObjectList.IbeoECUObjs[i].absVelY = objList->getObjects().at(i).getAbsVelocity().getY();
			currentObjectList.IbeoECUObjs[i].absVelSigmaX = objList->getObjects().at(i).getAbsVelocitySigma().getX();
			currentObjectList.IbeoECUObjs[i].absVelSigmaY = objList->getObjects().at(i).getAbsVelocitySigma().getY();
		}
		return currentObjectList;
	}

	void onData(const ObjectListEcuEt* const objList)
	{
		logInfo << std::setw(5) << objList->getSerializedSize() << " Bytes  " << "ObjectListEcuEts received: # " << objList->getNbOfObjects() << std::endl;
		drawFrame(parseObjList(objList));
	}

	//========================================
	void onData(const ObjectListEcuEtDyn* const objList)
	{
		logInfo << std::setw(5) << objList->getSerializedSize() << " Bytes  " << "ObjectListEcuEtDyn received: # " << objList->getNbOfObjects()
			<< std::endl
			<< "  ObjListId: " << toHex(objList->getObjectListId())
			<< "  DevIntfVr: " << toHex(objList->getDeviceInterfaceVersion())
			<< "  ObjListId: " << toHex(int(objList->getDeviceType()))
			<< std::endl;
	}

	//========================================
	void onData(const RefObjectListEcuEtDyn* const refObjList)
	{
		logInfo << std::setw(5) << refObjList->getSerializedSize() << " Bytes  " << "RefObjectListEcuEtDyn received: # " << refObjList->getNbOfObjects()
			<< std::endl
			<< "  ObjListId: " << toHex(refObjList->getObjectListId())
			<< "  DevIntfVr: " << toHex(refObjList->getDeviceInterfaceVersion())
			<< "  ObjListId: " << toHex(refObjList->getDeviceType())
			<< std::endl;
	}



	//========================================
	void onData(const PositionWgs84_2604* const wgs84)
	{
		logInfo << std::setw(5) << wgs84->getSerializedSize() << " Bytes  "
			<< "PositionWGS84 received: time: " << tc.toString(wgs84->getPosition().getTimestamp().toPtime())
			<< std::endl;
	}

	//========================================
	void onData(const VehicleStateBasicEcu2806* const vsb)
	{
		logInfo << std::setw(5) << vsb->getSerializedSize() << " Bytes  "
			<< "VSB (ECU;old) received: time: " << tc.toString(vsb->getTimestamp().toPtime())
			<< std::endl;
	}

	//========================================
	void onData(const VehicleStateBasicEcu* const vsb)
	{
		logInfo << std::setw(5) << vsb->getSerializedSize() << " Bytes  "
			<< "VSB (ECU) received: time: " << tc.toString(vsb->getTimestamp().toPtime())
			<< std::endl;
	}
	//========================================
	void onData(const MeasurementList2821* const ml)
	{
		logInfo << std::setw(5) << ml->getSerializedSize() << " Bytes  "
			<< "MeasurementList received: time: " << tc.toString(ml->getTimestamp().toPtime())
			<< " LN: '" << ml->getListName() << "' GN: '" << ml->getGroupName() << "'" << "Num: " << ml->getMeasList().getSize()
			<< std::endl;

		typedef std::vector<Measurement> MLVector;

		MLVector::const_iterator itMl = ml->getMeasList().getMeasurements().begin();
		int ctr = 0;
		for (; itMl != ml->getMeasList().getMeasurements().end(); ++itMl, ++ctr)
		{
			logInfo << " M" << ctr << ":" << (*itMl) << std::endl;
		}
	}

	//========================================
	void onData(const ObjectAssociationList4001* const oaList)
	{
		logInfo << std::setw(5) << oaList->getSerializedSize() << " Bytes  "
			<< "ObjectAssociationList4001 received"
			<< std::endl
			<< "  RObjListId: " << toHex(oaList->getRefObjListId())
			<< "  RDevIntfVr: " << toHex(oaList->getRefDevInterfaceVersion())
			<< "  DevType: " << toHex(oaList->getRefDevType())
			<< std::endl
			<< "  DObjListId: " << toHex(oaList->getDutObjListId())
			<< "  DDevIntfVr: " << toHex(oaList->getDutDevInterfaceVersion())
			<< "  DevType: " << toHex(oaList->getDutDevType())
			<< "  # of associations: " << oaList->getObjectAssociations().size()
			<< std::endl;
	}


	//========================================
	void onData(const DeviceStatus* const devStat)
	{
		logInfo << std::setw(5) << devStat->getSerializedSize() << " Bytes  "
			<< "DevStat received"
			<< std::endl;
	}

	//========================================
	void onData(const DeviceStatus6303* const devStat)
	{
		logInfo << std::setw(5) << devStat->getSerializedSize() << " Bytes  "
			<< "DevStat 0x6303 received"
			<< std::endl;
	}

	//========================================
	void onData(const LogMessageError* const logMsg)
	{
		logInfo << std::setw(5) << logMsg->getSerializedSize() << " Bytes  "
			<< "LogMessage (Error) received: time: " << logMsg->getTraceLevel() << ": " << logMsg->getMessage() << std::endl;
	}

	//========================================
	void onData(const LogMessageWarning* const logMsg)
	{
		logInfo << std::setw(5) << logMsg->getSerializedSize() << " Bytes  "
			<< "LogMessage (Warning) received: time: " << logMsg->getTraceLevel() << ": " << logMsg->getMessage() << std::endl;
	}

	//========================================
	void onData(const LogMessageNote* const logMsg)
	{
		logInfo << std::setw(5) << logMsg->getSerializedSize() << " Bytes  "
			<< "LogMessage (Note) received: time: " << logMsg->getTraceLevel() << ": " << logMsg->getMessage() << std::endl;
	}

	//========================================
	void onData(const LogMessageDebug* const logMsg)
	{
		logInfo << std::setw(5) << logMsg->getSerializedSize() << " Bytes  "
			<< "LogMessage (Debug) received: time: " << logMsg->getTraceLevel() << ": " << logMsg->getMessage() << std::endl;
	}

	//========================================
	void onData(const TimeRecord9000* const tim)
	{
		logInfo << std::setw(5) << tim->getSerializedSize() << " Bytes  "
			<< "Internal Clock Times Received with size: " << tim->getInternalClockTimes().size()
			<< "External Clock Times Received with size: " << tim->getExternalClockTimes().size()
			<< std::endl;
	}
	//========================================
	void onData(const Odometry9002* const odo)
	{
		logInfo << std::setw(5) << odo->getSerializedSize() << " Bytes  "
			<< "Steering angle: " << odo->getSteeringAngle()
			<< std::endl;
	}
	//========================================
	void onData(const GpsImu9001* const gpsImu)
	{
		logInfo << std::setw(5) << gpsImu->getSerializedSize() << " Bytes  "
			<< "GpsImu9001 received: time: " << tc.toString(gpsImu->getTimestamp().getReceivedTimeEcu().toPtime())
			<< " " << "Source: " << GpsImu9001::toString(gpsImu->getSource()) << "  "
			<< std::endl;
	}
	//========================================
	//ACTIVE
	void onData(const SystemMonitoringCanStatus6700* const canStatus)
	{
		logInfo << std::setw(5) << canStatus->getSerializedSize() << " Bytes  "
			<< "SystemMonitoringCANStatus6700 received: "
			<< canStatus->toString() << "  "
			<< std::endl;
	}
	//========================================
	//ACTIVE
	void onData(const SystemMonitoringDeviceStatus6701* const deviceStatus)
	{
		logInfo << std::setw(5) << deviceStatus->getSerializedSize() << " Bytes  "
			<< "SystemMonitoringDeviceStatus6701 received: "
			<< deviceStatus->toString() << "  "
			<< std::endl;
	}
	//========================================
	//ACTIVE
	void onData(const SystemMonitoringSystemStatus6705* const systemStatus)
	{
		logInfo << std::setw(5) << systemStatus->getSerializedSize() << " Bytes  "
			<< "SystemMonitoringSystemStatus6705 received: "
			<< systemStatus->toString() << "  "
			<< std::endl;
	}
	//========================================
}; // AllListener

   //======================================================================
   //======================================================================
   //======================================================================

class CustomLogStreamCallbackExample : public CustomLogStreamCallback {
public:
	virtual ~CustomLogStreamCallbackExample() {}
public:
	virtual void onLineEnd(const char* const s, const int)
	{
		std::cerr << s << std::endl;
	}
}; // CustomLogStreamCallback


   //======================================================================
   //======================================================================
   //======================================================================

int checkArguments(const int argc, const char** argv, bool& hasLogFile)
{
	const int minNbOfNeededArguments = 2;
	const int maxNbOfNeededArguments = 3;

	bool wrongNbOfArguments = false;
	if (argc < minNbOfNeededArguments) {
		std::cerr << "Missing argument" << std::endl;
		wrongNbOfArguments = true;
	}
	else if (argc > maxNbOfNeededArguments) {
		std::cerr << "Too many argument" << std::endl;
		wrongNbOfArguments = true;
	}

	if (wrongNbOfArguments) {
		std::cerr << argv[0] << " " << " INPUTFILENAME [LOGFILE]" << std::endl;
		std::cerr << "\tINPUTFILENAME Name of the file to use as input instead of a sensor." << std::endl;
		std::cerr << "\tLOGFILE name of the log file. If ommitted, the log output will be performed to stderr." << std::endl;
		return 1;
	}

	hasLogFile = (argc == maxNbOfNeededArguments);
	return 0;
}

//======================================================================

int main(const int argc, const char** argv)
{
	std::cerr << argv[0] << " Version " << appVersion.toString();
	std::cerr << "  using IbeoSDK " << ibeoSDK.getVersion().toString() << std::endl;

	bool hasLogFile;
	const int checkResult = checkArguments(argc, argv, hasLogFile);
	if (checkResult != 0)
		exit(checkResult);
	int currArg = 1;

	std::string filename = argv[currArg++];
	const off_t maxLogFileSize = 1000000;

	LogFileManager logFileManager;
	ibeosdk::LogFile::setTargetFileSize(maxLogFileSize);

	if (hasLogFile) {
		ibeosdk::LogFile::setLogFileBaseName(argv[currArg++]);
	}
	const ibeosdk::LogLevel ll = ibeosdk::logLevelFromString("Debug");
	ibeosdk::LogFile::setLogLevel(ll);

	static CustomLogStreamCallbackExample clsce;

	if (!hasLogFile)
		LogFile::setCustomLogStreamCallback(&clsce);

	logFileManager.start();

	if (hasLogFile) {
		logInfo << argv[0] << " Version " << appVersion.toString()
			<< "  using IbeoSDK " << ibeoSDK.getVersion().toString() << std::endl;
	}
	
	file_demo(filename);

	exit(0);
}

//======================================================================

void file_demo(const std::string& filename)
{
	//DEPRECATED
	////fov, frame declared globally
	//setBackground(fov);// draw coordinates and background
	//imshow(fovTitle, fov);
	//frame = fov.clone();
	//std::cerr << "frame ready" << std::endl;

	IdcFile file;
	file.open(filename);

	if (file.isOpen()) {
		AllListener allListener;

		file.registerListener(&allListener);

		const DataBlock* db = NULL;
		unsigned short nbMessages = 0; // # of messages we parsed

		while (file.isGood()) {
			//DEPRECATED
			//frame = fov.clone(); //initialize frame

			db = file.getNextDataBlock();
			if (db == NULL) {
				continue; // might be eof or unknown file type
			}
			file.notifyListeners(db);
			++nbMessages;
		}

		logDebug << "EOF reached. " << nbMessages << " known blocks found." << std::endl;
	}
	else {
		logError << "File not readable." << std::endl;
	}
}

//======================================================================
