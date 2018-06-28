#include "dbcparser.h"

double Signals_reserved_msg_header_51_CAN2;
double Signals_sync_index_51_CAN2;
double Signals_Sensor_Version_51_CAN2;
double Signals_dynamic_camera_height_51_CAN2;
double Signals_VehicleSpeed_51_CAN2;
double Signals_VehicleSpeedValid_51_CAN2;
double Signals_VehicleYaw_51_CAN2;
double Signals_VehicleYawValid_51_CAN2;
double Signals_SteeringWheelAngle_51_CAN2;
double Signals_SteeringWheelAngVal_51_CAN2;
double Signals_AcceleratorPedalValue_51_CAN2;
double Signals_AcceleratorPedalValid_51_CAN2;
double Signals_AccelerDecelerationRate_51_CAN2;
double Signals_BrakePedalPosition_51_CAN2;
double Signals_BrakePosModTravelAch_51_CAN2;
double Signals_BrakePosInitTravelAch_51_CAN2;
double Signals_BrkPosInitTravelAchVald_51_CAN2;
double Signals_Wiper_51_CAN2;
double Signals_ReverseIndicator_51_CAN2;
double Signals_TurnSwitchStatus_51_CAN2;
double Signals_FogLightActivation_51_CAN2;
double Signals_HighBeamStatus_51_CAN2;
double Signals_AmbientLightLevel_51_CAN2;
double Signals_AmbientLightLevelValid_51_CAN2;
double Sens_fcaGapSensitivity_51_CAN2;
double Sens_fcaGapSensitivityValid_51_CAN2;
double Sens_pcwGapSensitivity_51_CAN2;
double Sens_pcwGapSensitivityValid_51_CAN2;
double Sens_gpsCountryCode_FirstChar_51_CAN2;
double Sens_gpsCountryCode_SecondChar_51_CAN2;
double Sens_hbaReducedSensitivity_51_CAN2;
double Sens_hbaReducedSensitivityValid_51_CAN2;
double Sens_ldwSensitivity_51_CAN2;
double Sens_ldwSensitivityValid_51_CAN2;
double signals_padding_resereved_51_CAN2;
double Signals_CRC_sensor_51_CAN2;
uint8 NIO_Car_Signals_Sensors_0x51_51_Buffer_CAN2[20];
uint8 NIO_Car_Signals_Sensors_0x51_51_RxFlag_CAN2;
uint32 NIO_Car_Signals_Sensors_0x51_51_AgeCounter_CAN2;
uint16 NIO_Car_Signals_Sensors_0x51_51_TimeCounter_CAN2;

volatile const DbcParserSignalTblType TBL_DP_CAN2_51_SIGNALLIST[] =
{
	{(AddrType)&Signals_reserved_msg_header_51_CAN2, DP_SIGNALTYPE_FLOAT, 0, 8, DP_BYTEORDER_INTEL, 1.0, 0.0, 0.0, 0.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Signals_sync_index_51_CAN2, DP_SIGNALTYPE_FLOAT, 8, 8, DP_BYTEORDER_INTEL, 1.0, 0.0, 0.0, 255.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Signals_Sensor_Version_51_CAN2, DP_SIGNALTYPE_FLOAT, 16, 8, DP_BYTEORDER_INTEL, 1.0, 0.0, 3.0, 3.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Signals_dynamic_camera_height_51_CAN2, DP_SIGNALTYPE_FLOAT, 24, 8, DP_BYTEORDER_INTEL, 0.01, -0.75, -0.75, 1.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Signals_VehicleSpeed_51_CAN2, DP_SIGNALTYPE_FLOAT, 32, 14, DP_BYTEORDER_INTEL, 0.015625, 0.0, 0.0, 255.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Signals_VehicleSpeedValid_51_CAN2, DP_SIGNALTYPE_FLOAT, 46, 1, DP_BYTEORDER_INTEL, 1.0, 0.0, 0.0, 1.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Signals_VehicleYaw_51_CAN2, DP_SIGNALTYPE_FLOAT, 47, 12, DP_BYTEORDER_INTEL, 0.0625, -128.0, -128.0, 127.937, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Signals_VehicleYawValid_51_CAN2, DP_SIGNALTYPE_FLOAT, 59, 1, DP_BYTEORDER_INTEL, 1.0, 0.0, 0.0, 1.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Signals_SteeringWheelAngle_51_CAN2, DP_SIGNALTYPE_FLOAT, 60, 16, DP_BYTEORDER_INTEL, 0.0625, -2048.0, -2048.0, 2047.93, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Signals_SteeringWheelAngVal_51_CAN2, DP_SIGNALTYPE_FLOAT, 76, 1, DP_BYTEORDER_INTEL, 1.0, 0.0, 0.0, 1.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Signals_AcceleratorPedalValue_51_CAN2, DP_SIGNALTYPE_FLOAT, 77, 8, DP_BYTEORDER_INTEL, 0.392156863, 0.0, 0.0, 100.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Signals_AcceleratorPedalValid_51_CAN2, DP_SIGNALTYPE_FLOAT, 85, 1, DP_BYTEORDER_INTEL, 1.0, 0.0, 0.0, 1.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Signals_AccelerDecelerationRate_51_CAN2, DP_SIGNALTYPE_FLOAT, 86, 8, DP_BYTEORDER_INTEL, 0.1, -12.5, -12.5, 13.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Signals_BrakePedalPosition_51_CAN2, DP_SIGNALTYPE_FLOAT, 94, 8, DP_BYTEORDER_INTEL, 0.392156863, 0.0, 0.0, 100.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Signals_BrakePosModTravelAch_51_CAN2, DP_SIGNALTYPE_FLOAT, 102, 1, DP_BYTEORDER_INTEL, 1.0, 0.0, 0.0, 1.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Signals_BrakePosInitTravelAch_51_CAN2, DP_SIGNALTYPE_FLOAT, 103, 1, DP_BYTEORDER_INTEL, 1.0, 0.0, 0.0, 1.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Signals_BrkPosInitTravelAchVald_51_CAN2, DP_SIGNALTYPE_FLOAT, 104, 1, DP_BYTEORDER_INTEL, 1.0, 0.0, 0.0, 1.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Signals_Wiper_51_CAN2, DP_SIGNALTYPE_FLOAT, 105, 3, DP_BYTEORDER_INTEL, 1.0, 0.0, 0.0, 2.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Signals_ReverseIndicator_51_CAN2, DP_SIGNALTYPE_FLOAT, 108, 1, DP_BYTEORDER_INTEL, 1.0, 0.0, 0.0, 1.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Signals_TurnSwitchStatus_51_CAN2, DP_SIGNALTYPE_FLOAT, 109, 2, DP_BYTEORDER_INTEL, 1.0, 0.0, 0.0, 3.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Signals_FogLightActivation_51_CAN2, DP_SIGNALTYPE_FLOAT, 111, 1, DP_BYTEORDER_INTEL, 1.0, 0.0, 0.0, 1.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Signals_HighBeamStatus_51_CAN2, DP_SIGNALTYPE_FLOAT, 112, 1, DP_BYTEORDER_INTEL, 1.0, 0.0, 0.0, 1.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Signals_AmbientLightLevel_51_CAN2, DP_SIGNALTYPE_FLOAT, 113, 2, DP_BYTEORDER_INTEL, 1.0, 0.0, 0.0, 2.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Signals_AmbientLightLevelValid_51_CAN2, DP_SIGNALTYPE_FLOAT, 115, 1, DP_BYTEORDER_INTEL, 1.0, 0.0, 0.0, 1.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Sens_fcaGapSensitivity_51_CAN2, DP_SIGNALTYPE_FLOAT, 116, 2, DP_BYTEORDER_INTEL, 1.0, 0.0, 0.0, 3.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Sens_fcaGapSensitivityValid_51_CAN2, DP_SIGNALTYPE_FLOAT, 118, 1, DP_BYTEORDER_INTEL, 1.0, 0.0, 0.0, 1.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Sens_pcwGapSensitivity_51_CAN2, DP_SIGNALTYPE_FLOAT, 119, 2, DP_BYTEORDER_INTEL, 1.0, 0.0, 0.0, 3.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Sens_pcwGapSensitivityValid_51_CAN2, DP_SIGNALTYPE_FLOAT, 121, 1, DP_BYTEORDER_INTEL, 1.0, 0.0, 0.0, 1.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Sens_gpsCountryCode_FirstChar_51_CAN2, DP_SIGNALTYPE_FLOAT, 122, 5, DP_BYTEORDER_INTEL, 1.0, 0.0, 0.0, 26.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Sens_gpsCountryCode_SecondChar_51_CAN2, DP_SIGNALTYPE_FLOAT, 127, 5, DP_BYTEORDER_INTEL, 1.0, 0.0, 0.0, 26.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Sens_hbaReducedSensitivity_51_CAN2, DP_SIGNALTYPE_FLOAT, 132, 1, DP_BYTEORDER_INTEL, 1.0, 0.0, 0.0, 1.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Sens_hbaReducedSensitivityValid_51_CAN2, DP_SIGNALTYPE_FLOAT, 133, 1, DP_BYTEORDER_INTEL, 1.0, 0.0, 0.0, 1.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Sens_ldwSensitivity_51_CAN2, DP_SIGNALTYPE_FLOAT, 134, 2, DP_BYTEORDER_INTEL, 1.0, 0.0, 0.0, 2.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Sens_ldwSensitivityValid_51_CAN2, DP_SIGNALTYPE_FLOAT, 136, 1, DP_BYTEORDER_INTEL, 1.0, 0.0, 0.0, 1.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&signals_padding_resereved_51_CAN2, DP_SIGNALTYPE_FLOAT, 137, 7, DP_BYTEORDER_INTEL, 1.0, 0.0, 0.0, 1.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Signals_CRC_sensor_51_CAN2, DP_SIGNALTYPE_FLOAT, 144, 16, DP_BYTEORDER_INTEL, 1.0, 0.0, 0.0, 65535.0, DP_SIGNTYPE_UNSIGNED},
};
volatile const uint16 u8s_dp_CAN2_51_SignalTblSize = (uint16)(sizeof(TBL_DP_CAN2_51_SIGNALLIST) / sizeof(DbcParserSignalTblType));

DbcParserMsgTblType TBL_DP_DBCMSGLIST_NIO_Car_Signals_sensor[] =
{
	{0x51, DP_MSGDIR_TX, DP_PERIODICMACRO, 10, (AddrType)TBL_DP_CAN2_51_SIGNALLIST, u8s_dp_CAN2_51_SignalTblSize, 2, NIO_Car_Signals_Sensors_0x51_51_Buffer_CAN2, &NIO_Car_Signals_Sensors_0x51_51_RxFlag_CAN2, &NIO_Car_Signals_Sensors_0x51_51_AgeCounter_CAN2, &NIO_Car_Signals_Sensors_0x51_51_TimeCounter_CAN2, 20, DP_MSGKIND_NORMAL},
};
uint16 u16s_dp_MsgTblSize_NIO_Car_Signals_sensor = (uint16)(sizeof(TBL_DP_DBCMSGLIST_NIO_Car_Signals_sensor) / sizeof(DbcParserMsgTblType ));