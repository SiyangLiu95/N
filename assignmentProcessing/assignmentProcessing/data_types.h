//
// File: SIN_types.h
//
// Code generated for Simulink model 'SIN'.
//
// Model version                  : 1.627
// Simulink Coder version         : 8.9 (R2015b) 13-Aug-2015
// C/C++ source code generated on : Tue May 15 12:00:37 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Custom Processor->Custom
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_SIN_types_h_
#define RTW_HEADER_SIN_types_h_
#include "rtwtypes.h"
#ifndef _DEFINED_TYPEDEF_FOR_IMU_Acc_T_
#define _DEFINED_TYPEDEF_FOR_IMU_Acc_T_

typedef struct {
    real_T IMU_aVehHghtAcc;
    real_T IMU_aVehLatAcc;
    real_T IMU_aVehLongAcc;
} IMU_Acc_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_IMU_AngularRate_T_
#define _DEFINED_TYPEDEF_FOR_IMU_AngularRate_T_

typedef struct {
    real_T IMU_dphiYawRate;
    real_T IMU_dphiPitchRate;
    real_T IMU_dphiRollRate;
} IMU_AngularRate_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_IMU_Longitude_T_
#define _DEFINED_TYPEDEF_FOR_IMU_Longitude_T_

typedef struct {
    real_T IMU_xLongitude;
} IMU_Longitude_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_IMU_Latitude_T_
#define _DEFINED_TYPEDEF_FOR_IMU_Latitude_T_

typedef struct {
    real_T IMU_xLatitude;
} IMU_Latitude_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_IMU_in_T_
#define _DEFINED_TYPEDEF_FOR_IMU_in_T_

typedef struct {
    IMU_Acc_T IMU_Acc;
    IMU_AngularRate_T IMU_AngularRate;
    IMU_Longitude_T IMU_Longitude;
    IMU_Latitude_T IMU_Latitude;
} IMU_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_USS_Front_T_
#define _DEFINED_TYPEDEF_FOR_USS_Front_T_

typedef struct {
    uint8_T USS_lDstFR;
    uint8_T USS_lDstFL;
    uint8_T USS_lDstFLM;
    uint8_T USS_lDstFRM;
    uint8_T USS_lDstFRS;
    uint8_T USS_lDstFLS;
    uint8_T USS_stFrntSnsrFaultSt;
    uint8_T USS_stFrntSysSts;
} USS_Front_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_USS_Rear_T_
#define _DEFINED_TYPEDEF_FOR_USS_Rear_T_

typedef struct {
    uint8_T USS_lDstRR;
    uint8_T USS_lDstRL;
    uint8_T USS_lDstRLM;
    uint8_T USS_lDstRRM;
    uint8_T USS_lDstRLS;
    uint8_T USS_lDstRRS;
    uint8_T USS_stRearSnsrFaultSts;
    uint8_T USS_stRearSysSts;
} USS_Rear_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_USS_PrkngSlotSts_T_
#define _DEFINED_TYPEDEF_FOR_USS_PrkngSlotSts_T_

typedef struct {
    uint8_T USS_stAbortReason;
    uint8_T USS_stInstruction;
    uint8_T USS_stPocSlotParallelLe;
    uint8_T USS_stPocSlotParallelRi;
    uint8_T USS_stPscSlotCrossLe;
    uint8_T USS_stPscSlotCrossRi;
    uint8_T USS_stPscSlotParallelLe;
    uint8_T USS_stPscSlotParallelRi;
    uint8_T USS_stApaStatus;
    uint8_T USS_stUpaSysDisabled;
    uint8_T USS_stUpaSysSrv;
    uint8_T USS_stUpaSysSts;
} USS_PrkngSlotSts_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_USS_EnvPrkngSlotInfo_T_
#define _DEFINED_TYPEDEF_FOR_USS_EnvPrkngSlotInfo_T_

typedef struct {
    real_T USS_EnvPrkngSlotInfo[42];
    uint8_T USS_stPscEnvSlotTyp;
} USS_EnvPrkngSlotInfo_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_USS_VehPrkngSlotInfo_T_
#define _DEFINED_TYPEDEF_FOR_USS_VehPrkngSlotInfo_T_

typedef struct {
    real_T USS_VehPrkngSlotInfo[35];
    uint8_T USS_stPscVehSlotTyp;
} USS_VehPrkngSlotInfo_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_USS_in_T_
#define _DEFINED_TYPEDEF_FOR_USS_in_T_

typedef struct {
    USS_Front_T USS_Front;
    USS_Rear_T USS_Rear;
    real_T USS_ObjTyp[20];
    real_T USS_ObjPoint1X[20];
    real_T USS_ObjPoint1Y[20];
    real_T USS_ObjPoint2X[20];
    real_T USS_ObjPoint2Y[20];
    real_T USS_ObjHght[20];
    real_T USS_ObjHghtProblty[20];
    real_T USS_ObjProblty[20];
    USS_PrkngSlotSts_T USS_PrkngSlotSts;
    USS_EnvPrkngSlotInfo_T USS_EnvPrkngSlotInfo;
    USS_VehPrkngSlotInfo_T USS_VehPrkngSlotInfo;
} USS_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_Road_Information_T_
#define _DEFINED_TYPEDEF_FOR_Road_Information_T_

typedef struct {
    real_T Construction_Area;
    real_T Highway_Exit_Left;
    real_T Highway_Exit_Right;
    real_T Lane_Assignment_Host_Index_0m;
    real_T Lane_Assignment_Host_Index_35m;
    real_T Left_decelLaneBoundaryWidth;
    real_T Left_is_JPN_HWE;
    real_T NumOfLanes_0m;
    real_T NumOfLanes_35m;
    real_T Right_decelLaneBoundaryWidth;
    real_T Right_is_JPN_HWE;
    real_T Road_Type;
    real_T SnowDecision;
    real_T SnowPrediction;
    real_T TLM_decelerationArea;
    real_T protocol_version;
    real_T reserved_bits1;
    real_T reserved_bits2;
    real_T reserved_bits3;
} Road_Information_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_LKA_Right_Lane_C_T_
#define _DEFINED_TYPEDEF_FOR_LKA_Right_Lane_C_T_

typedef struct {
    real_T SF_Confidence_1;
    real_T SF_Confidence_1_Segment_End;
    real_T SF_Confidence_1_isValid;
    real_T SF_Confidence_2;
    real_T SF_Confidence_2_Segment_End;
    real_T SF_Confidence_2_isValid;
    real_T SF_Confidence_3;
    real_T SF_Confidence_3_Segment_End;
    real_T SF_Confidence_3_isValid;
    real_T SF_Confidence_4;
    real_T SF_Confidence_4_Segment_End;
    real_T SF_Confidence_4_isValid;
    real_T reserved_bits_2;
    real_T reserved_bits_3;
    real_T reserved_bits_4;
    real_T reserved_bits_5;
} LKA_Right_Lane_C_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_LKA_Left_Lane_C_T_
#define _DEFINED_TYPEDEF_FOR_LKA_Left_Lane_C_T_

typedef struct {
    real_T SF_Confidence_1;
    real_T SF_Confidence_1_Segment_End;
    real_T SF_Confidence_1_isValid;
    real_T SF_Confidence_2;
    real_T SF_Confidence_2_Segment_End;
    real_T SF_Confidence_2_isValid;
    real_T SF_Confidence_3;
    real_T SF_Confidence_3_Segment_End;
    real_T SF_Confidence_3_isValid;
    real_T SF_Confidence_4;
    real_T SF_Confidence_4_Segment_End;
    real_T SF_Confidence_4_isValid;
    real_T reserved_bits_2;
    real_T reserved_bits_3;
    real_T reserved_bits_4;
    real_T reserved_bits_5;
} LKA_Left_Lane_C_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_Lane_Assignment_35m_T_
#define _DEFINED_TYPEDEF_FOR_Lane_Assignment_35m_T_

typedef struct {
    real_T Lane_Assignment_1_35m_Confidence;
    real_T Lane_Assignment_1_35m_Type;
    real_T Lane_Assignment_2_35m_Confidence;
    real_T Lane_Assignment_2_35m_Type;
    real_T Lane_Assignment_3_35m_Confidence;
    real_T Lane_Assignment_3_35m_Type;
    real_T Lane_Assignment_4_35m_Confidence;
    real_T Lane_Assignment_4_35m_Type;
    real_T Lane_Assignment_5_35m_Confidence;
    real_T Lane_Assignment_5_35m_Type;
    real_T Lane_Assignment_6_35m_Confidence;
    real_T Lane_Assignment_6_35m_Type;
    real_T Lane_Assignment_7_35m_Confidence;
    real_T Lane_Assignment_7_35m_Type;
    real_T Lane_Assignment_8_35m_Confidence;
    real_T Lane_Assignment_8_35m_Type;
} Lane_Assignment_35m_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_Lane_Assignment_0m_T_
#define _DEFINED_TYPEDEF_FOR_Lane_Assignment_0m_T_

typedef struct {
    real_T Lane_Assignment_1_0m_Confidence;
    real_T Lane_Assignment_1_0m_Type;
    real_T Lane_Assignment_2_0m_Confidence;
    real_T Lane_Assignment_2_0m_Type;
    real_T Lane_Assignment_3_0m_Confidence;
    real_T Lane_Assignment_3_0m_Type;
    real_T Lane_Assignment_4_0m_Confidence;
    real_T Lane_Assignment_4_0m_Type;
    real_T Lane_Assignment_5_0m_Confidence;
    real_T Lane_Assignment_5_0m_Type;
    real_T Lane_Assignment_6_0m_Confidence;
    real_T Lane_Assignment_6_0m_Type;
    real_T Lane_Assignment_7_0m_Confidence;
    real_T Lane_Assignment_7_0m_Type;
    real_T Lane_Assignment_8_0m_Confidence;
    real_T Lane_Assignment_8_0m_Type;
} Lane_Assignment_0m_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_Next_Right_Lane_B_T_
#define _DEFINED_TYPEDEF_FOR_Next_Right_Lane_B_T_

typedef struct {
    real_T Lane_Model_C1;
    real_T Lane_mark_color;
    real_T View_Range_End;
    real_T View_Range_Start;
    real_T reserved_bits5;
} Next_Right_Lane_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_Next_Left_Lane_B_T_
#define _DEFINED_TYPEDEF_FOR_Next_Left_Lane_B_T_

typedef struct {
    real_T Lane_Model_C1;
    real_T Lane_mark_color;
    real_T View_Range_End;
    real_T View_Range_Start;
    real_T reserved_bits5;
} Next_Left_Lane_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_Next_Right_Lane_A_T_
#define _DEFINED_TYPEDEF_FOR_Next_Right_Lane_A_T_

typedef struct {
    real_T Lane_Model_C0;
    real_T Lane_Model_C2;
    real_T Lane_Model_C3;
    real_T Lane_Type;
    real_T Quality;
    real_T SF_confidence;
    real_T Width_marking;
    real_T reserved_3;
} Next_Right_Lane_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_Next_Left_Lane_A_T_
#define _DEFINED_TYPEDEF_FOR_Next_Left_Lane_A_T_

typedef struct {
    real_T Lane_Model_C0;
    real_T Lane_Model_C2;
    real_T Lane_Model_C3;
    real_T Lane_Type;
    real_T Quality;
    real_T SF_confidence;
    real_T Width_marking;
    real_T reserved_3;
} Next_Left_Lane_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_LKA_Right_Lane_B_T_
#define _DEFINED_TYPEDEF_FOR_LKA_Right_Lane_B_T_

typedef struct {
    real_T Lane_Crossing;
    real_T Lane_Model_C1;
    real_T Lane_mark_color;
    real_T PRED_DIST_BASED_EXTRAPOLATION;
    real_T PRED_HEADWAY_ORIENTED;
    real_T PRED_OCCLUDED_LM_EXTRAPOLATION;
    real_T PRED_OTHER_SIDE;
    real_T PRED_OVERRIDE;
    real_T PRED_SOURCE_DIVERGING_LANES;
    real_T PRED_SOURCE_GUARDRAIL_SHADOW;
    real_T PRED_SOURCE_HWE_SPAIN;
    real_T PRED_SOURCE_STD;
    real_T PRED_SOURCE_VRTL_MERGE;
    real_T Reserved1_laneB;
    real_T TLC;
    real_T View_Range_End;
    real_T View_Range_Start;
    real_T reserved2_laneB;
} LKA_Right_Lane_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_LKA_Right_Lane_A_T_
#define _DEFINED_TYPEDEF_FOR_LKA_Right_Lane_A_T_

typedef struct {
    real_T Lane_Model_C0;
    real_T Lane_Model_C2;
    real_T Lane_Model_C3;
    real_T Lane_Type;
    real_T Quality;
    real_T SF_confidence;
    real_T Width_marking;
    real_T reserved_3;
} LKA_Right_Lane_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_LKA_Left_Lane_B_T_
#define _DEFINED_TYPEDEF_FOR_LKA_Left_Lane_B_T_

typedef struct {
    real_T Lane_Crossing;
    real_T Lane_Model_C1;
    real_T Lane_mark_color;
    real_T PRED_DIST_BASED_EXTRAPOLATION;
    real_T PRED_HEADWAY_ORIENTED;
    real_T PRED_OCCLUDED_LM_EXTRAPOLATION;
    real_T PRED_OTHER_SIDE;
    real_T PRED_OVERRIDE;
    real_T PRED_SOURCE_DIVERGING_LANES;
    real_T PRED_SOURCE_GUARDRAIL_SHADOW;
    real_T PRED_SOURCE_HWE_SPAIN;
    real_T PRED_SOURCE_STD;
    real_T PRED_SOURCE_VRTL_MERGE;
    real_T Reserved1_laneB;
    real_T TLC;
    real_T View_Range_End;
    real_T View_Range_Start;
    real_T reserved2_laneB;
} LKA_Left_Lane_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_LKA_Left_Lane_A_T_
#define _DEFINED_TYPEDEF_FOR_LKA_Left_Lane_A_T_

typedef struct {
    real_T Lane_Model_C0;
    real_T Lane_Model_C2;
    real_T Lane_Model_C3;
    real_T Lane_Type;
    real_T Quality;
    real_T SF_confidence;
    real_T Width_marking;
    real_T reserved_3;
} LKA_Left_Lane_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_meLanes3_T_
#define _DEFINED_TYPEDEF_FOR_meLanes3_T_

typedef struct {
    Road_Information_T Road_Information;
    LKA_Right_Lane_C_T LKA_Right_Lane_C;
    LKA_Left_Lane_C_T LKA_Left_Lane_C;
    Lane_Assignment_35m_T Lane_Assignment_35m;
    Lane_Assignment_0m_T Lane_Assignment_0m;
    Next_Right_Lane_B_T Next_Right_Lane_B;
    Next_Left_Lane_B_T Next_Left_Lane_B;
    Next_Right_Lane_A_T Next_Right_Lane_A;
    Next_Left_Lane_A_T Next_Left_Lane_A;
    LKA_Right_Lane_B_T LKA_Right_Lane_B;
    LKA_Right_Lane_A_T LKA_Right_Lane_A;
    LKA_Left_Lane_B_T LKA_Left_Lane_B;
    LKA_Left_Lane_A_T LKA_Left_Lane_A;
} meLanes3_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CAMC_LaneInfo_T_
#define _DEFINED_TYPEDEF_FOR_CAMC_LaneInfo_T_

typedef struct {
    uint8_T CAMC_stLeftLaneQl;
    uint8_T CAMC_stLeftLaneTyp;
    real_T CAMC_lLeftMarkWdth;
    real_T CAMC_lLeftLanePos;
    real_T CAMC_phiLeftLaneHdgAg;
    real_T CAMC_xLeftLaneCur;
    real_T CAMC_xLeftLanedCur;
    real_T CAMC_lLeftLaneStrt;
    real_T CAMC_lLeftLaneEnd;
    boolean_T CAMC_flgLeftLaneCrsg;
    real_T CAMC_tLeftLaneTLC;
    uint8_T CAMC_stRightLaneQl;
    uint8_T CAMC_stRightLaneTyp;
    real_T CAMC_lRightMarkWdth;
    real_T CAMC_lRightLanePos;
    real_T CAMC_phiRightLaneHdgAg;
    real_T CAMC_xRightLaneCur;
    real_T CAMC_xRightLanedCur;
    real_T CAMC_lRightLaneStrt;
    real_T CAMC_lRightLaneEnd;
    boolean_T CAMC_flgRightLaneCrsg;
    real_T CAMC_tRightLaneTLC;
    uint8_T CAMC_stNxtLeftLaneQl;
    uint8_T CAMC_stNxtLeftLaneTyp;
    real_T CAMC_lNxtLeftMarkWdth;
    real_T CAMC_lNxtLeftLanePos;
    real_T CAMC_phiNxtLeftLaneHdgAg;
    real_T CAMC_xNxtLeftLaneCur;
    real_T CAMC_xNxtLeftLanedCur;
    real_T CAMC_lNxtLeftLaneStrt;
    real_T CAMC_lNxtLeftLaneEnd;
    uint8_T CAMC_stNxtRightLaneQl;
    uint8_T CAMC_stNxtRightLaneTyp;
    real_T CAMC_lNxtRightMarkWdth;
    real_T CAMC_lNxtRightLanePos;
    real_T CAMC_phiNxtRightLaneHdgAg;
    real_T CAMC_xNxtRightLaneCur;
    real_T CAMC_xNxtRightLanedCur;
    real_T CAMC_lNxtRightLaneStrt;
    real_T CAMC_lNxtRightLaneEnd;
    meLanes3_T CAMC_LaneRawData;
} CAMC_LaneInfo_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ACCInfo_B_T_
#define _DEFINED_TYPEDEF_FOR_ACCInfo_B_T_

typedef struct {
    real_T MotionType;
    real_T ObstacleRelVelY;
    real_T ObstacleVelX;
    real_T ObstacleWidth;
    real_T protocol_version;
    real_T reserved_1;
    real_T reserved_2;
    real_T reserved_5;
} ACCInfo_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_right_CCI_measurements_B_T_
#define _DEFINED_TYPEDEF_FOR_right_CCI_measurements_B_T_

typedef struct {
    real_T VCL_cutting_ttc;
    real_T hasCutLaneMark;
    real_T reserved_bits;
} right_CCI_measurements_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_right_CCI_measurements_A_T_
#define _DEFINED_TYPEDEF_FOR_right_CCI_measurements_A_T_

typedef struct {
    real_T VCL_cutting_backX;
    real_T VCL_cutting_backZ;
    real_T VCL_cutting_frontX;
    real_T VCL_cutting_frontZ;
    real_T VCL_cutting_hasCut;
    real_T VCL_cutting_lateral_speed;
    real_T VCL_cutting_longitudinal_speed;
} right_CCI_measurements_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_left_CCI_measurements_B_T_
#define _DEFINED_TYPEDEF_FOR_left_CCI_measurements_B_T_

typedef struct {
    real_T VCL_cutting_ttc;
    real_T hasCutLaneMark;
    real_T reserved_bits;
} left_CCI_measurements_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_left_CCI_measurements_A_T_
#define _DEFINED_TYPEDEF_FOR_left_CCI_measurements_A_T_

typedef struct {
    real_T VCL_cutting_backX;
    real_T VCL_cutting_backZ;
    real_T VCL_cutting_frontX;
    real_T VCL_cutting_frontZ;
    real_T VCL_cutting_hasCut;
    real_T VCL_cutting_lateral_speed;
    real_T VCL_cutting_longitudinal_speed;
} left_CCI_measurements_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ACCInfo_C_T_
#define _DEFINED_TYPEDEF_FOR_ACCInfo_C_T_

typedef struct {
    real_T Global_Frame_Index;
    real_T Obstacle_Angle;
    real_T Obstacle_Angle_Rate;
} ACCInfo_C_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ACCInfo_T_
#define _DEFINED_TYPEDEF_FOR_ACCInfo_T_

typedef struct {
    real_T BlinkerInfo;
    real_T CIPVBrakeLights;
    real_T CIPV_FreeSpace;
    real_T FCW_on;
    real_T LeftCloseRangeCutIn;
    real_T Move_in_and_Out;
    real_T ObjectFusionState;
    real_T Object_Accel_X;
    real_T ObstaclePosX;
    real_T ObstaclePosY;
    real_T ObstacleRelVelX;
    real_T ObstacleType;
    real_T RightCloseRangeCutIn;
    real_T lost_CIPV;
    real_T reserved_1;
} ACCInfo_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_meACC3_protocol_T_
#define _DEFINED_TYPEDEF_FOR_meACC3_protocol_T_

typedef struct {
    ACCInfo_B_T ACCInfo_B;
    right_CCI_measurements_B_T right_CCI_measurements_B;
    right_CCI_measurements_A_T right_CCI_measurements_A;
    left_CCI_measurements_B_T left_CCI_measurements_B;
    left_CCI_measurements_A_T left_CCI_measurements_A;
    ACCInfo_C_T ACCInfo_C;
    ACCInfo_T ACCInfo;
} meACC3_protocol_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_PCW_information_T_
#define _DEFINED_TYPEDEF_FOR_PCW_information_T_

typedef struct {
    real_T CAN_VIS_OBS_TTC_WITHOUT_ACC;
    real_T PCW_A;
    real_T PCW_B;
    real_T PCW_C;
    real_T PCW_D;
    real_T PCW_E;
    real_T Reserved_M1;
    real_T Reserved_M2;
    real_T Reserved_M3;
    real_T Reserved_M4;
    real_T Reserved_M5;
    real_T Reserved_M6;
    real_T Reserved_M7;
} PCW_information_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FCW_information_T_
#define _DEFINED_TYPEDEF_FOR_FCW_information_T_

typedef struct {
    real_T CAN_VIS_OBS_TTC_WITH_ACC;
    real_T FCW_A;
    real_T FCW_B;
    real_T FCW_C;
    real_T FCW_D;
    real_T FCW_E;
} FCW_information_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_meCMS3_T_
#define _DEFINED_TYPEDEF_FOR_meCMS3_T_

typedef struct {
    PCW_information_T PCW_information;
    FCW_information_T FCW_information;
} meCMS3_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_meHMI3_T_
#define _DEFINED_TYPEDEF_FOR_meHMI3_T_

typedef struct {
    real_T Continues_sound;
    real_T FCW_WRN_1;
    real_T FCW_WRN_2;
    real_T Failsafe;
    real_T HLB_Running_Mode;
    real_T HeadwayMeasurement;
    real_T HeadwayValid;
    real_T High_Beam_Recommendation;
    real_T LeftLDW;
    real_T Left_Availibility;
    real_T Maintenance;
    real_T Ped_WRN_1;
    real_T Ped_WRN_2;
    real_T Ped_WRN_3;
    real_T Pedal_Confusion_Indication;
    real_T Reserved1;
    real_T Reserved2;
    real_T Reserved3;
    real_T Reserved4;
    real_T Reserved5;
    real_T Reserved6;
    real_T RightLDW;
    real_T Right_Availibility;
    real_T Slow_Target_Vehicle;
    real_T SoundType;
    real_T Suppress;
    real_T Vehicle_Ahead_Alerts;
} meHMI3_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_slBus1_meHMI3_T_
#define _DEFINED_TYPEDEF_FOR_slBus1_meHMI3_T_

typedef struct {
    meHMI3_T meHMI3;
} slBus1_meHMI3_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_HPP_Header_T_
#define _DEFINED_TYPEDEF_FOR_HPP_Header_T_

typedef struct {
    real_T Image_grabIndex;
    real_T Image_timeStamp;
    real_T protocol_version;
    real_T reserved_bits_0;
} HPP_Header_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_Road_HPP_Fusion_Msg_B_T_
#define _DEFINED_TYPEDEF_FOR_Road_HPP_Fusion_Msg_B_T_

typedef struct {
    real_T Fusion_Confidence;
    real_T Fusion_Lane_Width_Estimation;
    real_T Fusion_Lateral_Control_Point;
    real_T Fusion_Long_Control_Point;
    real_T Fusion_isPrediction;
    real_T Fusion_reserved_bits;
} Road_HPP_Fusion_Msg_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_Road_HPP_Fusion_Msg_A_T_
#define _DEFINED_TYPEDEF_FOR_Road_HPP_Fusion_Msg_A_T_

typedef struct {
    real_T Fusion_Model_C0;
    real_T Fusion_Model_C1;
    real_T Fusion_Model_C2;
    real_T Fusion_Model_C3;
} Road_HPP_Fusion_Msg_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_PP_Model_T_
#define _DEFINED_TYPEDEF_FOR_PP_Model_T_

typedef struct {
    real_T HPP_Model_C0;
    real_T HPP_Model_C1;
    real_T HPP_Model_C2;
    real_T HPP_Model_C3;
    real_T PP_error;
    real_T reserved_bits_0;
} PP_Model_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_PP_Model_B_T_
#define _DEFINED_TYPEDEF_FOR_PP_Model_B_T_

typedef struct {
    real_T HPP_Z_close;
    real_T HPP_Z_far;
    real_T reserved;
} PP_Model_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_meHPP3_T_
#define _DEFINED_TYPEDEF_FOR_meHPP3_T_

typedef struct {
    HPP_Header_T HPP_Header;
    Road_HPP_Fusion_Msg_B_T Road_HPP_Fusion_Msg_B;
    Road_HPP_Fusion_Msg_A_T Road_HPP_Fusion_Msg_A;
    PP_Model_T PP_Model;
    PP_Model_B_T PP_Model_B;
} meHPP3_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleStatusA_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleStatusA_T_

typedef struct {
    real_T Close_Car;
    real_T Failsafe;
    real_T Go;
    real_T ID_MCP;
    real_T LeftCloseRangeCutIn;
    real_T NumObstacles;
    real_T ProtocolVersion;
    real_T RightCloseRangeCutIn;
    real_T Timestamp;
    real_T reserved_1;
    real_T reserved_2;
    real_T reserved_3;
} ObstacleStatusA_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleStatusB_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleStatusB_T_

typedef struct {
    real_T frameIndex;
    real_T timeStamp;
} ObstacleStatusB_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleStatusC_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleStatusC_T_

typedef struct {
    real_T grabIndex;
    real_T pedalConfGenObjDistFromBumper;
    real_T pedalConfusionGeneralObjTTC;
    real_T reserved_6;
} ObstacleStatusC_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CAMC_ObsInfo_T_
#define _DEFINED_TYPEDEF_FOR_CAMC_ObsInfo_T_

typedef struct {
    real_T CAMC_ObsAResvTwo[10];
    real_T CAMC_ObsAResvOne[10];
    real_T CAMC_ObsAResvFour[10];
    real_T CAMC_ObsAMoveInAndOut[10];
    real_T CAMC_ObsABlnInfo[10];
    real_T CAMC_ObsAObsVld[10];
    real_T CAMC_ObsAObsBrkLght[10];
    real_T CAMC_ObsAObsSts[10];
    real_T CAMC_ObsAObsTyp[10];
    real_T CAMC_ObsAObsVelX[10];
    real_T CAMC_ObsAObsPosY[10];
    real_T CAMC_ObsAObsPosX[10];
    real_T CAMC_ObsAObsID[10];
    real_T CAMC_ObsBObsLngth[10];
    real_T CAMC_ObsBObsWidth[10];
    real_T CAMC_ObsBObsAge[10];
    real_T CAMC_ObsBObsLane[10];
    real_T CAMC_ObsBCIPVFlg[10];
    real_T CAMC_ObsBRadarPosX[10];
    real_T CAMC_ObsBRadarVelX[10];
    real_T CAMC_ObsBRadarMatchConfidence[10];
    real_T CAMC_ObsBMatchedRadarID[10];
    real_T CAMC_ObsBResOne[10];
    real_T CAMC_ObsBResOneB[10];
    real_T CAMC_ObsBResOneC[10];
    real_T CAMC_ObsCResvFive[10];
    real_T CAMC_ObsCObsVelY[10];
    real_T CAMC_ObsCResThree[10];
    real_T CAMC_ObsCResTwo[10];
    real_T CAMC_ObsCObjAccelX[10];
    real_T CAMC_ObsCObsAg[10];
    real_T CAMC_ObsCObsRepl[10];
    real_T CAMC_ObsCObsAgRate[10];
    ObstacleStatusA_T CAMC_ObsStsA;
    ObstacleStatusB_T CAMC_ObsStsB;
    ObstacleStatusC_T CAMC_ObsStsC;
} CAMC_ObsInfo_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CAMC_TSRVsnOnlySignTyp_T_
#define _DEFINED_TYPEDEF_FOR_CAMC_TSRVsnOnlySignTyp_T_

typedef struct {
    real_T CAMC_idxVsnOnlySignTyp0;
    real_T CAMC_idxVsnOnlySignTyp1;
    real_T CAMC_idxVsnOnlySignTyp2;
    real_T CAMC_idxVsnOnlySignTyp3;
    real_T CAMC_idxVsnOnlySignTyp4;
    real_T CAMC_idxVsnOnlySignTyp5;
    real_T CAMC_idxVsnOnlySignTyp6;
} CAMC_TSRVsnOnlySignTyp_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CAMC_TSRVsnOnlySuppSignTyp_T_
#define _DEFINED_TYPEDEF_FOR_CAMC_TSRVsnOnlySuppSignTyp_T_

typedef struct {
    real_T CAMC_idxVsnOnlySuppSignTyp0;
    real_T CAMC_idxVsnOnlySuppSignTyp1;
    real_T CAMC_idxVsnOnlySuppSignTyp2;
    real_T CAMC_idxVsnOnlySuppSignTyp3;
    real_T CAMC_idxVsnOnlySuppSignTyp4;
    real_T CAMC_idxVsnOnlySuppSignTyp5;
    real_T CAMC_idxVsnOnlySuppSignTyp6;
} CAMC_TSRVsnOnlySuppSignTyp_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CAMC_TSRSignPosX_T_
#define _DEFINED_TYPEDEF_FOR_CAMC_TSRSignPosX_T_

typedef struct {
    real_T CAMC_locSignPosX0;
    real_T CAMC_locSignPosX1;
    real_T CAMC_locSignPosX2;
    real_T CAMC_locSignPosX3;
    real_T CAMC_locSignPosX4;
    real_T CAMC_locSignPosX5;
    real_T CAMC_locSignPosX6;
} CAMC_TSRSignPosX_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CAMC_TSRSignPosY_T_
#define _DEFINED_TYPEDEF_FOR_CAMC_TSRSignPosY_T_

typedef struct {
    real_T CAMC_locSignPosY0;
    real_T CAMC_locSignPosY1;
    real_T CAMC_locSignPosY2;
    real_T CAMC_locSignPosY3;
    real_T CAMC_locSignPosY4;
    real_T CAMC_locSignPosY5;
    real_T CAMC_locSignPosY6;
} CAMC_TSRSignPosY_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CAMC_TSRSignPosZ_T_
#define _DEFINED_TYPEDEF_FOR_CAMC_TSRSignPosZ_T_

typedef struct {
    real_T CAMC_locSignPosZ0;
    real_T CAMC_locSignPosZ1;
    real_T CAMC_locSignPosZ2;
    real_T CAMC_locSignPosZ3;
    real_T CAMC_locSignPosZ4;
    real_T CAMC_locSignPosZ5;
    real_T CAMC_locSignPosZ6;
} CAMC_TSRSignPosZ_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CAMC_TSRFltTyp_T_
#define _DEFINED_TYPEDEF_FOR_CAMC_TSRFltTyp_T_

typedef struct {
    real_T CAMC_idxFltTyp0;
    real_T CAMC_idxFltTyp1;
    real_T CAMC_idxFltTyp2;
    real_T CAMC_idxFltTyp3;
    real_T CAMC_idxFltTyp4;
    real_T CAMC_idxFltTyp5;
    real_T CAMC_idxFltTyp6;
} CAMC_TSRFltTyp_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CAMC_TSRAprvFlg_T_
#define _DEFINED_TYPEDEF_FOR_CAMC_TSRAprvFlg_T_

typedef struct {
    real_T CAMC_flgAprvFlg0;
    real_T CAMC_flgAprvFlg1;
    real_T CAMC_flgAprvFlg2;
    real_T CAMC_flgAprvFlg3;
    real_T CAMC_flgAprvFlg4;
    real_T CAMC_flgAprvFlg5;
    real_T CAMC_flgAprvFlg6;
} CAMC_TSRAprvFlg_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CAMC_TSRNoEntryVsnSts_T_
#define _DEFINED_TYPEDEF_FOR_CAMC_TSRNoEntryVsnSts_T_

typedef struct {
    real_T CAMC_stNoEntryVsnSts0;
    real_T CAMC_stNoEntryVsnSts1;
    real_T CAMC_stNoEntryVsnSts2;
    real_T CAMC_stNoEntryVsnSts3;
    real_T CAMC_stNoEntryVsnSts4;
    real_T CAMC_stNoEntryVsnSts5;
    real_T CAMC_stNoEntryVsnSts6;
} CAMC_TSRNoEntryVsnSts_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CAMC_TSRSignHght_T_
#define _DEFINED_TYPEDEF_FOR_CAMC_TSRSignHght_T_

typedef struct {
    real_T CAMC_lSignHght0;
    real_T CAMC_lSignHght1;
    real_T CAMC_lSignHght2;
    real_T CAMC_lSignHght3;
    real_T CAMC_lSignHght4;
    real_T CAMC_lSignHght5;
    real_T CAMC_lSignHght6;
} CAMC_TSRSignHght_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CAMC_TSRSignWidth_T_
#define _DEFINED_TYPEDEF_FOR_CAMC_TSRSignWidth_T_

typedef struct {
    real_T CAMC_lSignWidth0;
    real_T CAMC_lSignWidth1;
    real_T CAMC_lSignWidth2;
    real_T CAMC_lSignWidth3;
    real_T CAMC_lSignWidth4;
    real_T CAMC_lSignWidth5;
    real_T CAMC_lSignWidth6;
} CAMC_TSRSignWidth_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CAMC_VsnOnlyTSRCont_T_
#define _DEFINED_TYPEDEF_FOR_CAMC_VsnOnlyTSRCont_T_

typedef struct {
    real_T CAMC_idxContVsnSuppSignTyp4;
    real_T CAMC_idxContVsnSuppSignTyp3;
    real_T CAMC_idxContVsnSuppSignTyp2;
    real_T CAMC_idxContVsnSuppSignTyp1;
    real_T CAMC_idxContVsnSignTyp4;
    real_T CAMC_idxContVsnSignTyp3;
    real_T CAMC_idxContVsnSignTyp2;
    real_T CAMC_idxContVsnSignTyp1;
} CAMC_VsnOnlyTSRCont_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_Protocol_Header_T_
#define _DEFINED_TYPEDEF_FOR_Protocol_Header_T_

typedef struct {
    real_T num_Of_TSR_Suspects;
    real_T protocol_version;
    real_T reserved_0;
} Protocol_Header_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_TSR6_T_
#define _DEFINED_TYPEDEF_FOR_TSR6_T_

typedef struct {
    real_T Approved_Flag;
    real_T Filter_type;
    real_T No_Entry_Vision_Status;
    real_T Sign_Height;
    real_T Sign_Width;
    real_T Vision_only_Sign_Type;
    real_T Vision_only_Supp_Sign_Type;
    real_T reserved_0;
    real_T reserved_1;
    real_T reserved_2;
} TSR6_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_TSR5_T_
#define _DEFINED_TYPEDEF_FOR_TSR5_T_

typedef struct {
    real_T Approved_Flag;
    real_T Filter_type;
    real_T No_Entry_Vision_Status;
    real_T Sign_Height;
    real_T Sign_Width;
    real_T Vision_only_Sign_Type;
    real_T Vision_only_Supp_Sign_Type;
    real_T reserved_0;
    real_T reserved_1;
    real_T reserved_2;
} TSR5_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_TSR4_T_
#define _DEFINED_TYPEDEF_FOR_TSR4_T_

typedef struct {
    real_T Approved_Flag;
    real_T Filter_type;
    real_T No_Entry_Vision_Status;
    real_T Sign_Height;
    real_T Sign_Width;
    real_T Vision_only_Sign_Type;
    real_T Vision_only_Supp_Sign_Type;
    real_T reserved_0;
    real_T reserved_1;
    real_T reserved_2;
} TSR4_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_TSR3_T_
#define _DEFINED_TYPEDEF_FOR_TSR3_T_

typedef struct {
    real_T Approved_Flag;
    real_T Filter_type;
    real_T No_Entry_Vision_Status;
    real_T Sign_Height;
    real_T Sign_Width;
    real_T Vision_only_Sign_Type;
    real_T Vision_only_Supp_Sign_Type;
    real_T reserved_0;
    real_T reserved_1;
    real_T reserved_2;
} TSR3_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_TSR2_T_
#define _DEFINED_TYPEDEF_FOR_TSR2_T_

typedef struct {
    real_T Approved_Flag;
    real_T Filter_type;
    real_T No_Entry_Vision_Status;
    real_T Sign_Height;
    real_T Sign_Width;
    real_T Vision_only_Sign_Type;
    real_T Vision_only_Supp_Sign_Type;
    real_T reserved_0;
    real_T reserved_1;
    real_T reserved_2;
} TSR2_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_TSR1_T_
#define _DEFINED_TYPEDEF_FOR_TSR1_T_

typedef struct {
    real_T Approved_Flag;
    real_T Filter_type;
    real_T No_Entry_Vision_Status;
    real_T Sign_Height;
    real_T Sign_Width;
    real_T Vision_only_Sign_Type;
    real_T Vision_only_Supp_Sign_Type;
    real_T reserved_0;
    real_T reserved_1;
    real_T reserved_2;
} TSR1_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_TSR6_2_T_
#define _DEFINED_TYPEDEF_FOR_TSR6_2_T_

typedef struct {
    real_T Sign_Position_X;
    real_T Sign_Position_Y;
    real_T Sign_Position_Z;
    real_T reserved0;
} TSR6_2_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_TSR5_2_T_
#define _DEFINED_TYPEDEF_FOR_TSR5_2_T_

typedef struct {
    real_T Sign_Position_X;
    real_T Sign_Position_Y;
    real_T Sign_Position_Z;
    real_T reserved0;
} TSR5_2_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_TSR4_2_T_
#define _DEFINED_TYPEDEF_FOR_TSR4_2_T_

typedef struct {
    real_T Sign_Position_X;
    real_T Sign_Position_Y;
    real_T Sign_Position_Z;
    real_T reserved0;
} TSR4_2_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_TSR3_2_T_
#define _DEFINED_TYPEDEF_FOR_TSR3_2_T_

typedef struct {
    real_T Sign_Position_X;
    real_T Sign_Position_Y;
    real_T Sign_Position_Z;
    real_T reserved0;
} TSR3_2_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_TSR2_2_T_
#define _DEFINED_TYPEDEF_FOR_TSR2_2_T_

typedef struct {
    real_T Sign_Position_X;
    real_T Sign_Position_Y;
    real_T Sign_Position_Z;
    real_T reserved0;
} TSR2_2_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_TSR1_2_T_
#define _DEFINED_TYPEDEF_FOR_TSR1_2_T_

typedef struct {
    real_T Sign_Position_X;
    real_T Sign_Position_Y;
    real_T Sign_Position_Z;
    real_T reserved0;
} TSR1_2_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_TSR0_2_T_
#define _DEFINED_TYPEDEF_FOR_TSR0_2_T_

typedef struct {
    real_T Sign_Position_X;
    real_T Sign_Position_Y;
    real_T Sign_Position_Z;
    real_T reserved0;
} TSR0_2_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ID_TSR3_T_
#define _DEFINED_TYPEDEF_FOR_ID_TSR3_T_

typedef struct {
    real_T Internal_ID0;
    real_T Internal_ID1;
} ID_TSR3_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ID_TSR2_T_
#define _DEFINED_TYPEDEF_FOR_ID_TSR2_T_

typedef struct {
    real_T Internal_ID0;
    real_T Internal_ID1;
} ID_TSR2_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ID_TSR1_T_
#define _DEFINED_TYPEDEF_FOR_ID_TSR1_T_

typedef struct {
    real_T Internal_ID0;
    real_T Internal_ID1;
} ID_TSR1_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ID_TSR0_T_
#define _DEFINED_TYPEDEF_FOR_ID_TSR0_T_

typedef struct {
    real_T Internal_ID0;
    real_T Internal_ID1;
} ID_TSR0_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ID_TFL3_T_
#define _DEFINED_TYPEDEF_FOR_ID_TFL3_T_

typedef struct {
    real_T Internal_ID0;
    real_T Internal_ID1;
} ID_TFL3_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ID_TFL2_T_
#define _DEFINED_TYPEDEF_FOR_ID_TFL2_T_

typedef struct {
    real_T Internal_ID0;
    real_T Internal_ID1;
} ID_TFL2_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ID_TFL1_T_
#define _DEFINED_TYPEDEF_FOR_ID_TFL1_T_

typedef struct {
    real_T Internal_ID0;
    real_T Internal_ID1;
} ID_TFL1_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ID_TFL0_T_
#define _DEFINED_TYPEDEF_FOR_ID_TFL0_T_

typedef struct {
    real_T Internal_ID0;
    real_T Internal_ID1;
} ID_TFL0_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_TFL_Message7_T_
#define _DEFINED_TYPEDEF_FOR_TFL_Message7_T_

typedef struct {
    real_T Object_ID;
    real_T TFL_Color;
    real_T TFL_PosX;
    real_T TFL_PosY;
    real_T TFL_PosZ;
    real_T TFL_Supp1_Arrow;
    real_T TFL_Supp2_Arrow;
    real_T TFL_Supp3_Arrow;
    real_T TFL_Type;
    real_T TFL_Width;
    real_T TFL_assignment;
    real_T is_TFL_Blinking;
    real_T reserved_8;
} TFL_Message7_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_TFL_Message6_T_
#define _DEFINED_TYPEDEF_FOR_TFL_Message6_T_

typedef struct {
    real_T Object_ID;
    real_T TFL_Color;
    real_T TFL_PosX;
    real_T TFL_PosY;
    real_T TFL_PosZ;
    real_T TFL_Supp1_Arrow;
    real_T TFL_Supp2_Arrow;
    real_T TFL_Supp3_Arrow;
    real_T TFL_Type;
    real_T TFL_Width;
    real_T TFL_assignment;
    real_T is_TFL_Blinking;
    real_T reserved_8;
} TFL_Message6_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_TFL_Message5_T_
#define _DEFINED_TYPEDEF_FOR_TFL_Message5_T_

typedef struct {
    real_T Object_ID;
    real_T TFL_Color;
    real_T TFL_PosX;
    real_T TFL_PosY;
    real_T TFL_PosZ;
    real_T TFL_Supp1_Arrow;
    real_T TFL_Supp2_Arrow;
    real_T TFL_Supp3_Arrow;
    real_T TFL_Type;
    real_T TFL_Width;
    real_T TFL_assignment;
    real_T is_TFL_Blinking;
    real_T reserved_8;
} TFL_Message5_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_TFL_Message4_T_
#define _DEFINED_TYPEDEF_FOR_TFL_Message4_T_

typedef struct {
    real_T Object_ID;
    real_T TFL_Color;
    real_T TFL_PosX;
    real_T TFL_PosY;
    real_T TFL_PosZ;
    real_T TFL_Supp1_Arrow;
    real_T TFL_Supp2_Arrow;
    real_T TFL_Supp3_Arrow;
    real_T TFL_Type;
    real_T TFL_Width;
    real_T TFL_assignment;
    real_T is_TFL_Blinking;
    real_T reserved_8;
} TFL_Message4_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_TFL_Message3_T_
#define _DEFINED_TYPEDEF_FOR_TFL_Message3_T_

typedef struct {
    real_T Object_ID;
    real_T TFL_Color;
    real_T TFL_PosX;
    real_T TFL_PosY;
    real_T TFL_PosZ;
    real_T TFL_Supp1_Arrow;
    real_T TFL_Supp2_Arrow;
    real_T TFL_Supp3_Arrow;
    real_T TFL_Type;
    real_T TFL_Width;
    real_T TFL_assignment;
    real_T is_TFL_Blinking;
    real_T reserved_8;
} TFL_Message3_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_TFL_Message0_T_
#define _DEFINED_TYPEDEF_FOR_TFL_Message0_T_

typedef struct {
    real_T Object_ID;
    real_T TFL_Color;
    real_T TFL_PosX;
    real_T TFL_PosY;
    real_T TFL_PosZ;
    real_T TFL_Supp1_Arrow;
    real_T TFL_Supp2_Arrow;
    real_T TFL_Supp3_Arrow;
    real_T TFL_Type;
    real_T TFL_Width;
    real_T TFL_assignment;
    real_T is_TFL_Blinking;
    real_T reserved_8;
} TFL_Message0_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_TFL_Message1_T_
#define _DEFINED_TYPEDEF_FOR_TFL_Message1_T_

typedef struct {
    real_T Object_ID;
    real_T TFL_Color;
    real_T TFL_PosX;
    real_T TFL_PosY;
    real_T TFL_PosZ;
    real_T TFL_Supp1_Arrow;
    real_T TFL_Supp2_Arrow;
    real_T TFL_Supp3_Arrow;
    real_T TFL_Type;
    real_T TFL_Width;
    real_T TFL_assignment;
    real_T is_TFL_Blinking;
    real_T reserved_8;
} TFL_Message1_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_TFL_Message2_T_
#define _DEFINED_TYPEDEF_FOR_TFL_Message2_T_

typedef struct {
    real_T Object_ID;
    real_T TFL_Color;
    real_T TFL_PosX;
    real_T TFL_PosY;
    real_T TFL_PosZ;
    real_T TFL_Supp1_Arrow;
    real_T TFL_Supp2_Arrow;
    real_T TFL_Supp3_Arrow;
    real_T TFL_Type;
    real_T TFL_Width;
    real_T TFL_assignment;
    real_T is_TFL_Blinking;
    real_T reserved_8;
} TFL_Message2_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_TFL_Header_T_
#define _DEFINED_TYPEDEF_FOR_TFL_Header_T_

typedef struct {
    real_T JNC_Distance;
    real_T Junction_Status;
    real_T Main_Object_ID;
    real_T Number_Of_TFL_Objects;
    real_T Reserved_1;
    real_T SS_Warning_Supression;
    real_T StopSign_TTC;
    real_T StopSign_Warning;
    real_T StopSign_notification;
    real_T Stop_Line_Dist;
    real_T Stop_Line_Valid;
    real_T TFL_TTC;
    real_T TFL_Warning;
    real_T TFL_Warning_Supression_By_Driver;
    real_T TFL_Warning_Supression_By_Vision;
    real_T TFL_notification;
} TFL_Header_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_TSR0_T_
#define _DEFINED_TYPEDEF_FOR_TSR0_T_

typedef struct {
    real_T Approved_Flag;
    real_T Filter_type;
    real_T No_Entry_Vision_Status;
    real_T Sign_Height;
    real_T Sign_Width;
    real_T Vision_only_Sign_Type;
    real_T Vision_only_Supp_Sign_Type;
    real_T reserved_0;
    real_T reserved_1;
    real_T reserved_2;
} TSR0_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_Vision_Only_TSR_continuous_T_
#define _DEFINED_TYPEDEF_FOR_Vision_Only_TSR_continuous_T_

typedef struct {
    real_T Vision_only_Sign_Type_D1;
    real_T Vision_only_Sign_Type_D2;
    real_T Vision_only_Sign_Type_D3;
    real_T Vision_only_Sign_Type_D4;
    real_T Vision_only_supp_Sign_Type_D1;
    real_T Vision_only_supp_Sign_Type_D2;
    real_T Vision_only_supp_Sign_Type_D3;
    real_T Vision_only_supp_Sign_Type_D4;
} Vision_Only_TSR_continuous_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_meTSR3_protocol_T_
#define _DEFINED_TYPEDEF_FOR_meTSR3_protocol_T_

typedef struct {
    Protocol_Header_T Protocol_Header;
    TSR6_T TSR6;
    TSR5_T TSR5;
    TSR4_T TSR4;
    TSR3_T TSR3;
    TSR2_T TSR2;
    TSR1_T TSR1;
    TSR6_2_T TSR6_2;
    TSR5_2_T TSR5_2;
    TSR4_2_T TSR4_2;
    TSR3_2_T TSR3_2;
    TSR2_2_T TSR2_2;
    TSR1_2_T TSR1_2;
    TSR0_2_T TSR0_2;
    ID_TSR3_T ID_TSR3;
    ID_TSR2_T ID_TSR2;
    ID_TSR1_T ID_TSR1;
    ID_TSR0_T ID_TSR0;
    ID_TFL3_T ID_TFL3;
    ID_TFL2_T ID_TFL2;
    ID_TFL1_T ID_TFL1;
    ID_TFL0_T ID_TFL0;
    TFL_Message7_T TFL_Message7;
    TFL_Message6_T TFL_Message6;
    TFL_Message5_T TFL_Message5;
    TFL_Message4_T TFL_Message4;
    TFL_Message3_T TFL_Message3;
    TFL_Message0_T TFL_Message0;
    TFL_Message1_T TFL_Message1;
    TFL_Message2_T TFL_Message2;
    TFL_Header_T TFL_Header;
    TSR0_T TSR0;
    Vision_Only_TSR_continuous_T Vision_Only_TSR_continuous;
} meTSR3_protocol_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CAMC_TSR_T_
#define _DEFINED_TYPEDEF_FOR_CAMC_TSR_T_

typedef struct {
    CAMC_TSRVsnOnlySignTyp_T CAMC_TSRVsnOnlySignTyp;
    CAMC_TSRVsnOnlySuppSignTyp_T CAMC_TSRVsnOnlySuppSignTyp;
    CAMC_TSRSignPosX_T CAMC_TSRSignPosX;
    CAMC_TSRSignPosY_T CAMC_TSRSignPosY;
    CAMC_TSRSignPosZ_T CAMC_TSRSignPosZ;
    CAMC_TSRFltTyp_T CAMC_TSRFltTyp;
    CAMC_TSRAprvFlg_T CAMC_TSRAprvFlg;
    CAMC_TSRNoEntryVsnSts_T CAMC_TSRNoEntryVsnSts;
    CAMC_TSRSignHght_T CAMC_TSRSignHght;
    CAMC_TSRSignWidth_T CAMC_TSRSignWidth;
    CAMC_VsnOnlyTSRCont_T CAMC_VsnOnlyTSRCont;
    meTSR3_protocol_T CAMC_TSRRawData;
} CAMC_TSR_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CAMC_HighLowBeam_T_
#define _DEFINED_TYPEDEF_FOR_CAMC_HighLowBeam_T_

typedef struct {
    real_T CAMC_flgReasonStreetLghtGrace;
    real_T CAMC_flgReasonStreetLght;
    real_T CAMC_flgReasonSharpCurve;
    real_T CAMC_flgReasonPrecedingGrace;
    real_T CAMC_flgReasonOncomingGrace;
    real_T CAMC_flgReasonOncoming;
    real_T CAMC_flgReasonLowSpeed;
    real_T CAMC_flgReasonLoadBalance;
    real_T CAMC_flgReasonLitNightUS;
    real_T CAMC_flgReasonLitNight;
    real_T CAMC_flgReasonBrightScene;
    real_T CAMC_xReserved1;
    real_T CAMC_xReserved4;
    uint8_T CAMC_stHLBRunningMode;
    real_T CAMC_stReasonForHLBInactv;
    real_T CAMC_flgReasonPreceding;
    uint8_T CAMC_flgDecision;
} CAMC_HighLowBeam_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_HLB_Object_12_T_
#define _DEFINED_TYPEDEF_FOR_HLB_Object_12_T_

typedef struct {
    real_T HLB_COUPLED_WIDTH;
    real_T HLB_OBJ_ANG;
    real_T HLB_OBJ_ANG_BOTTOM;
    real_T HLB_OBJ_DIST;
    real_T HLB_OBJ_TYPE;
    real_T HLB_OBJ_VALID;
} HLB_Object_12_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_HLB_Object_11_T_
#define _DEFINED_TYPEDEF_FOR_HLB_Object_11_T_

typedef struct {
    real_T HLB_COUPLED_WIDTH;
    real_T HLB_OBJ_ANG;
    real_T HLB_OBJ_ANG_BOTTOM;
    real_T HLB_OBJ_DIST;
    real_T HLB_OBJ_TYPE;
    real_T HLB_OBJ_VALID;
} HLB_Object_11_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_HLB_Object_10_T_
#define _DEFINED_TYPEDEF_FOR_HLB_Object_10_T_

typedef struct {
    real_T HLB_COUPLED_WIDTH;
    real_T HLB_OBJ_ANG;
    real_T HLB_OBJ_ANG_BOTTOM;
    real_T HLB_OBJ_DIST;
    real_T HLB_OBJ_TYPE;
    real_T HLB_OBJ_VALID;
} HLB_Object_10_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_HLB_Object_9_T_
#define _DEFINED_TYPEDEF_FOR_HLB_Object_9_T_

typedef struct {
    real_T HLB_COUPLED_WIDTH;
    real_T HLB_OBJ_ANG;
    real_T HLB_OBJ_ANG_BOTTOM;
    real_T HLB_OBJ_DIST;
    real_T HLB_OBJ_TYPE;
    real_T HLB_OBJ_VALID;
} HLB_Object_9_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_HLB_Object_8_T_
#define _DEFINED_TYPEDEF_FOR_HLB_Object_8_T_

typedef struct {
    real_T HLB_COUPLED_WIDTH;
    real_T HLB_OBJ_ANG;
    real_T HLB_OBJ_ANG_BOTTOM;
    real_T HLB_OBJ_DIST;
    real_T HLB_OBJ_TYPE;
    real_T HLB_OBJ_VALID;
} HLB_Object_8_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_HLB_Object_7_T_
#define _DEFINED_TYPEDEF_FOR_HLB_Object_7_T_

typedef struct {
    real_T HLB_COUPLED_WIDTH;
    real_T HLB_OBJ_ANG;
    real_T HLB_OBJ_ANG_BOTTOM;
    real_T HLB_OBJ_DIST;
    real_T HLB_OBJ_TYPE;
    real_T HLB_OBJ_VALID;
} HLB_Object_7_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_HLB_Object_6_T_
#define _DEFINED_TYPEDEF_FOR_HLB_Object_6_T_

typedef struct {
    real_T HLB_COUPLED_WIDTH;
    real_T HLB_OBJ_ANG;
    real_T HLB_OBJ_ANG_BOTTOM;
    real_T HLB_OBJ_DIST;
    real_T HLB_OBJ_TYPE;
    real_T HLB_OBJ_VALID;
} HLB_Object_6_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_HLB_Object_5_T_
#define _DEFINED_TYPEDEF_FOR_HLB_Object_5_T_

typedef struct {
    real_T HLB_COUPLED_WIDTH;
    real_T HLB_OBJ_ANG;
    real_T HLB_OBJ_ANG_BOTTOM;
    real_T HLB_OBJ_DIST;
    real_T HLB_OBJ_TYPE;
    real_T HLB_OBJ_VALID;
} HLB_Object_5_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_HLB_Object_4_T_
#define _DEFINED_TYPEDEF_FOR_HLB_Object_4_T_

typedef struct {
    real_T HLB_COUPLED_WIDTH;
    real_T HLB_OBJ_ANG;
    real_T HLB_OBJ_ANG_BOTTOM;
    real_T HLB_OBJ_DIST;
    real_T HLB_OBJ_TYPE;
    real_T HLB_OBJ_VALID;
} HLB_Object_4_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_HLB_Object_3_T_
#define _DEFINED_TYPEDEF_FOR_HLB_Object_3_T_

typedef struct {
    real_T HLB_COUPLED_WIDTH;
    real_T HLB_OBJ_ANG;
    real_T HLB_OBJ_ANG_BOTTOM;
    real_T HLB_OBJ_DIST;
    real_T HLB_OBJ_TYPE;
    real_T HLB_OBJ_VALID;
} HLB_Object_3_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_HLB_Object_2_T_
#define _DEFINED_TYPEDEF_FOR_HLB_Object_2_T_

typedef struct {
    real_T HLB_COUPLED_WIDTH;
    real_T HLB_OBJ_ANG;
    real_T HLB_OBJ_ANG_BOTTOM;
    real_T HLB_OBJ_DIST;
    real_T HLB_OBJ_TYPE;
    real_T HLB_OBJ_VALID;
} HLB_Object_2_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_HLB_Object_1_T_
#define _DEFINED_TYPEDEF_FOR_HLB_Object_1_T_

typedef struct {
    real_T HLB_COUPLED_WIDTH;
    real_T HLB_OBJ_ANG;
    real_T HLB_OBJ_ANG_BOTTOM;
    real_T HLB_OBJ_DIST;
    real_T HLB_OBJ_TYPE;
    real_T HLB_OBJ_VALID;
} HLB_Object_1_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_Gradual_AHBC_T_
#define _DEFINED_TYPEDEF_FOR_Gradual_AHBC_T_

typedef struct {
    real_T BNDRY_DOM_BOT_NGL_HLB;
    real_T BNDRY_DOM_LH_NGL_HLB;
    real_T BNDRY_DOM_RH_NGL_HLB;
    real_T Num_Of_Objects;
    real_T ST_BNDRY_DOM_BOT_NGL_HLB;
    real_T ST_BNDRY_DOM_LH_NGL_HLB;
    real_T ST_BNDRY_DOM_RH_NGL_HLB;
} Gradual_AHBC_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_HighLowBeam_T_
#define _DEFINED_TYPEDEF_FOR_HighLowBeam_T_

typedef struct {
    real_T HLB_Running_Mode;
    real_T HLB_decision;
    real_T Reason_Bright_Scene;
    real_T Reason_Lit_Night;
    real_T Reason_Lit_Night_US;
    real_T Reason_Load_Balance;
    real_T Reason_Low_speed;
    real_T Reason_Oncoming;
    real_T Reason_Oncoming_Grace;
    real_T Reason_Preceding;
    real_T Reason_Preceding_Grace;
    real_T Reason_Sharp_Curve;
    real_T Reason_Street_Light;
    real_T Reason_Street_Light_Grace;
    real_T Reason_for_HLB_Inactive;
    real_T reserved_1;
    real_T reserved_4;
} HighLowBeam_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_meAHBC3_T_
#define _DEFINED_TYPEDEF_FOR_meAHBC3_T_

typedef struct {
    HLB_Object_12_T HLB_Object_12;
    HLB_Object_11_T HLB_Object_11;
    HLB_Object_10_T HLB_Object_10;
    HLB_Object_9_T HLB_Object_9;
    HLB_Object_8_T HLB_Object_8;
    HLB_Object_7_T HLB_Object_7;
    HLB_Object_6_T HLB_Object_6;
    HLB_Object_5_T HLB_Object_5;
    HLB_Object_4_T HLB_Object_4;
    HLB_Object_3_T HLB_Object_3;
    HLB_Object_2_T HLB_Object_2;
    HLB_Object_1_T HLB_Object_1;
    Gradual_AHBC_T Gradual_AHBC;
    HighLowBeam_T HighLowBeam;
} meAHBC3_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CAMC_AHC_T_
#define _DEFINED_TYPEDEF_FOR_CAMC_AHC_T_

typedef struct {
    CAMC_HighLowBeam_T CAMC_HighLowBeam;
    meAHBC3_T CAMC_AHBCRawData;
} CAMC_AHC_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_failsafe_applications_T_
#define _DEFINED_TYPEDEF_FOR_failsafe_applications_T_

typedef struct {
    real_T APP_ACC_blindness_decision;
    real_T APP_HLB_blindness_decision;
    real_T APP_LD_blindness_decision;
    real_T APP_PED_blindness_decision;
    real_T APP_TSR_blindness_decision;
    real_T APP_VD_blindness_decision;
    real_T reserved_bits_1;
} failsafe_applications_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_failsafe_signals_T_
#define _DEFINED_TYPEDEF_FOR_failsafe_signals_T_

typedef struct {
    real_T FS_autofixOutOfCalibHorizon;
    real_T FS_autofixOutOfCalibYAW;
    real_T FS_Persistent_Partial_Blockage;
    real_T FS_Persistent_Full_Blockage;
    real_T FS_Persistent_OutOfFocus;
    real_T FS_blurredImage;
    real_T FS_partialBlockage;
    real_T FS_fullBlockage;
    real_T FS_foggySpots;
    real_T FS_smearedSpots;
    real_T FS_spotHalos;
    real_T FS_splashes;
    real_T FS_selfGlare;
    real_T FS_sunRay;
    real_T FS_lowSun;
    real_T FS_out_of_focus;
    real_T FS_outOfCalibOffsetHorizon;
    real_T FS_outOfCalibSignsNumHorizon;
    real_T FS_outOfCalibOffsetYaw;
    real_T FS_outOfCalibSignsNumYaw;
    real_T FS_TSR_outOfCalib_mode;
    real_T FS_forzenWindshield_bool;
    real_T FS_frozenWindshield;
    real_T FS_fog;
    real_T FS_rain;
} failsafe_signals_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_meFailsafes3_T_
#define _DEFINED_TYPEDEF_FOR_meFailsafes3_T_

typedef struct {
    failsafe_applications_T failsafe_applications;
    failsafe_signals_T failsafe_signals;
} meFailsafes3_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_EyeQ4_FCW_AEB_T_
#define _DEFINED_TYPEDEF_FOR_EyeQ4_FCW_AEB_T_

typedef struct {
    real_T VD_RTA;
    real_T VD_FCWSuppressionReasons_setA;
    real_T VD_alertPattern_setA;
    real_T VD_AEBSuppressionReasons_setA;
    real_T VD_FCWSuppressionReasons_setB;
    real_T VD_alertPattern_setB;
    real_T VD_AEBSuppressionReasons_setB;
    real_T VD_FCWSuppressionReasons_setC;
    real_T VD_alertPattern_setC;
    real_T VD_AEBSuppressionReasons_setC;
    real_T VD_FCWSuppressionReasons_setD;
    real_T VD_alertPattern_setD;
    real_T VD_AEBSuppressionReasons_setD;
    real_T VD_FCWSuppressionReasons_setE;
    real_T VD_alertPattern_setE;
    real_T VD_AEBSuppressionReasons_setE;
    real_T VD_FCWSuppressionReasons_setF;
    real_T VD_alertPattern_setF;
    real_T VD_AEBSuppressionReasons_setF;
    real_T PD_alertPattern_L1;
    real_T PD_AEB_suppressReasons_L1;
    real_T PD_alertPattern_L2;
    real_T PD_AEB_suppressReasons_L2;
    real_T PD_alertPattern_L3;
    real_T PD_AEB_suppressReasons_L3;
    real_T PD_alertPattern_L4;
    real_T PD_AEB_suppressReasons_L4;
    real_T HW_FDI_Indication_Level;
    real_T HW_FollowingDistHighResolution;
    real_T HW_FollowingTime;
    real_T HW_SuppressionReasons;
    real_T HW_Alert;
    real_T PD_Alert_Type;
} EyeQ4_FCW_AEB_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CAMC_in_T_
#define _DEFINED_TYPEDEF_FOR_CAMC_in_T_

typedef struct {
    CAMC_LaneInfo_T CAMC_LaneInfo;
    real_T CAMC_lFSPntsCrdMat[128];
    meACC3_protocol_T meACC3;
    meCMS3_T meCMS3;
    slBus1_meHMI3_T meHMI3;
    meHPP3_T meHPP3;
    CAMC_ObsInfo_T CAMC_ObsInfo;
    CAMC_TSR_T CAMC_TSR;
    CAMC_AHC_T CAMC_AHC;
    meFailsafes3_T meFailsafes3;
    EyeQ4_FCW_AEB_T CAMC_FcwAeb;
} CAMC_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RADFC_Status_T_
#define _DEFINED_TYPEDEF_FOR_RADFC_Status_T_

typedef struct {
    real_T RADFC_tiDSPTiStmp;
    real_T RADFC_flgCommErr;
    real_T RADFC_dphiYawRateCalc;
    real_T RADFC_vVelSpdCalc;
    real_T RADFC_idxScanIndex;
    real_T RADFC_cntRollCnt1;
    real_T RADFC_xRaCurCalc;
    real_T RADFC_flgTruckTargetDet;
    real_T RADFC_flgLROnlyGratingLobeDet;
    real_T RADFC_flgSidelobeBlockage;
    real_T RADFC_flgPartialBlockage;
    real_T RADFC_flgPathIDACCstat;
    real_T RADFC_stMRLRMode;
    real_T RADFC_phiAutoAlignAngle;
    real_T RADFC_stRollCnt3;
    real_T RADFC_flgPathIDFCWStat;
    real_T RADFC_flgPathIDFCWMove;
    real_T RADFC_flgPathIDCMBBStat;
    real_T RADFC_flgPathIDCMBBMove;
    real_T RADFC_flgPathIDACC;
} RADFC_Status_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_DphRADFC_in_T_
#define _DEFINED_TYPEDEF_FOR_DphRADFC_in_T_

typedef struct {
    real_T RADFC_TrackOnComing[64];
    real_T RADFC_TrackGroupChanged[64];
    real_T RADFC_TrackLatRate[64];
    real_T RADFC_TrackStatus[64];
    real_T RADFC_TrackAngle[64];
    real_T RADFC_TrackRange[64];
    real_T RADFC_TrackWidth[64];
    real_T RADFC_TrackRollingCount[64];
    real_T RADFC_TrackBridgeObject[64];
    real_T RADFC_RangeRateAcc[64];
    real_T RADFC_TrackMedRangeMode[64];
    real_T RADFC_TrackRangeRate[64];
    RADFC_Status_T RADFC_Status;
    real_T RADFC_TrackMovable[64];
    real_T RADFC_TrackMoving[64];
    real_T RADFC_TrckPwr[64];
} DphRADFC_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RADFC_ObjStarter_T_
#define _DEFINED_TYPEDEF_FOR_RADFC_ObjStarter_T_

typedef struct {
    real_T RADFC_flgMessStaConsistBit;
    real_T RADFC_aEgoVeh;
    real_T RADFC_dphiYawrate;
    real_T RADFC_phiSlipAg;
    real_T RADFC_vEgoVeh;
} RADFC_ObjStarter_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RADFC_ObjEnder_T_
#define _DEFINED_TYPEDEF_FOR_RADFC_ObjEnder_T_

typedef struct {
    real_T RADFC_flgMessEnderConsistBit;
    real_T RADFC_idxObjTiStmp;
    real_T RADFC_numChecksum;
    real_T RADFC_cntObjMsgCnt;
} RADFC_ObjEnder_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RADFC_Sts_T_
#define _DEFINED_TYPEDEF_FOR_RADFC_Sts_T_

typedef struct {
    real_T RADFC_pctAbsorptionBlindness;
    real_T RADFC_pctDistortionBlindness;
    real_T RADFC_flgHWFail;
    real_T RADFC_phiMisalignment;
    real_T RADFC_numITCInfo;
    real_T RADFC_flgSGUFail;
    real_T RADFC_numCRC;
    real_T RADFC_cntMsgCntr;
} RADFC_Sts_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RADFC_in_T_
#define _DEFINED_TYPEDEF_FOR_RADFC_in_T_

typedef struct {
    real_T RADFC_flgMessStaConsistBitA[32];
    real_T RADFC_flgObjMeas[32];
    real_T RADFC_flgObjHist[32];
    real_T RADFC_flgObjVld[32];
    real_T RADFC_locObjPosX[32];
    real_T RADFC_locObjPosY[32];
    real_T RADFC_vObjVelX[32];
    real_T RADFC_aObjAccX[32];
    real_T RADFC_pctExistence[32];
    real_T RADFC_pctNonObstacle[32];
    real_T RADFC_pctObstacle[32];
    real_T RADFC_flgMessStaConsistBitB[32];
    real_T RADFC_aObjAccXSigma[32];
    real_T RADFC_locObjPosXSigma[32];
    real_T RADFC_bObjVelXSigma[32];
    real_T RADFC_vObjVelY[32];
    real_T RADFC_stObjMovgSts[32];
    real_T RADFC_locObjPosZ[32];
    real_T RADFC_stObjClass[32];
    real_T RADFC_lObjLngth[32];
    real_T RADFC_locObjPosYSigma[32];
    real_T RADFC_lObjRearEndLoss[32];
    real_T RADFC_pctObjClass[32];
    RADFC_ObjStarter_T RADFC_ObjStarter;
    RADFC_ObjEnder_T RADFC_ObjEnder;
    real_T RADFC_lTargetDstX[6];
    real_T RADFC_vTargetVelX[6];
    real_T RADFC_pctExist[6];
    real_T RADFC_lTargetDstY[6];
    real_T RADFC_flgTargetVld[6];
    real_T RADFC_pctTargetObstacle[6];
    real_T RADFC_aTargetAccX[6];
    real_T RADFC_flgTargetMessConsistBitA[6];
    real_T RADFC_flgTargetHist[6];
    real_T RADFC_flgTargetMeas[6];
    real_T RADFC_pctTargetNonObstacle[6];
    real_T RADFC_lTargetLngth[6];
    real_T RADFC_vTargetVelY[6];
    real_T RADFC_stTargetMovgSts[6];
    real_T RADFC_lTargetDstZ[6];
    real_T RADFC_lTargetDstSigmaX[6];
    real_T RADFC_vTargetVelSigmaX[6];
    real_T RADFC_lTargetDstSigmaY[6];
    real_T RADFC_aTargetAccSigmaX[6];
    real_T RADFC_stTargetClass[6];
    real_T RADFC_pctTargetClass[6];
    real_T RADFC_flgTargetMessConsistBitB[6];
    real_T RADFC_lTargetRearEndLoss[6];
    RADFC_Sts_T RADFC_Sts;
} RADFC_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RADFL_ObjStarter_T_
#define _DEFINED_TYPEDEF_FOR_RADFL_ObjStarter_T_

typedef struct {
    real_T RADFL_flgMessStaConsistBit;
    real_T RADFL_aEgoVeh;
    real_T RADFL_dphiYawrate;
    real_T RADFL_phiSlipAg;
    real_T RADFL_vEgoVeh;
} RADFL_ObjStarter_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RADFL_ObjEnder_T_
#define _DEFINED_TYPEDEF_FOR_RADFL_ObjEnder_T_

typedef struct {
    real_T RADFL_flgMessEnderConsistBit;
    real_T RADFL_idxObjTiStmp;
    real_T RADFL_numChecksum;
    real_T RADFL_cntObjMsgCnt;
} RADFL_ObjEnder_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RADFL_MRRInfoFL_T_
#define _DEFINED_TYPEDEF_FOR_RADFL_MRRInfoFL_T_

typedef struct {
    real_T RADFL_pctAbsorptionBlindness;
    real_T RADFL_pctDistortionBlindness;
    real_T RADFL_stHWFail;
    real_T RADFL_phiHorizontalMisalignment;
    real_T RADFL_cntITCInfo;
    real_T RADFL_flgSGUFail;
    real_T RADFL_xCRC;
    real_T RADFL_xMsgCnt;
} RADFL_MRRInfoFL_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RADFL_in_T_
#define _DEFINED_TYPEDEF_FOR_RADFL_in_T_

typedef struct {
    real_T RADFL_flgMessStaConsistBitA[32];
    real_T RADFL_flgObjMeas[32];
    real_T RADFL_flgObjHist[32];
    real_T RADFL_flgObjVld[32];
    real_T RADFL_locObjPosX[32];
    real_T RADFL_locObjPosY[32];
    real_T RADFL_vObjVelX[32];
    real_T RADFL_aObjAccX[32];
    real_T RADFL_pctExistence[32];
    real_T RADFL_pctNonObstacle[32];
    real_T RADFL_pctObstacle[32];
    real_T RADFL_flgMessStaConsistBitB[32];
    real_T RADFL_aObjAccXSigma[32];
    real_T RADFL_locObjPosXSigma[32];
    real_T RADFL_bObjVelXSigma[32];
    real_T RADFL_vObjVelY[32];
    real_T RADFL_stObjMovgSts[32];
    real_T RADFL_locObjPosZ[32];
    real_T RADFL_stObjClass[32];
    real_T RADFL_lObjLngth[32];
    real_T RADFL_locObjPosYSigma[32];
    real_T RADFL_lObjRearEndLoss[32];
    real_T RADFL_pctObjClass[32];
    RADFL_ObjStarter_T RADFL_ObjStarter;
    RADFL_ObjEnder_T RADFL_ObjEnder;
    RADFL_MRRInfoFL_T RADFL_MRRInfoFL;
} RADFL_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RADFR_ObjStarter_T_
#define _DEFINED_TYPEDEF_FOR_RADFR_ObjStarter_T_

typedef struct {
    real_T RADFR_flgMessStaConsistBit;
    real_T RADFR_aEgoVeh;
    real_T RADFR_dphiYawrate;
    real_T RADFR_phiSlipAg;
    real_T RADFR_vEgoVeh;
} RADFR_ObjStarter_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RADFR_ObjEnder_T_
#define _DEFINED_TYPEDEF_FOR_RADFR_ObjEnder_T_

typedef struct {
    real_T RADFR_flgMessEnderConsistBit;
    real_T RADFR_idxObjTiStmp;
    real_T RADFR_numChecksum;
    real_T RADFR_cntObjMsgCnt;
} RADFR_ObjEnder_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RADFR_MRRInfoFR_T_
#define _DEFINED_TYPEDEF_FOR_RADFR_MRRInfoFR_T_

typedef struct {
    real_T RADFR_pctAbsorptionBlindness;
    real_T RADFR_pctDistortionBlindness;
    real_T RADFR_stHWFail;
    real_T RADFR_phiHorizontalMisalignment;
    real_T RADFR_cntITCInfo;
    real_T RADFR_flgSGUFail;
    real_T RADFR_xCRC;
    real_T RADFR_xMsgCnt;
} RADFR_MRRInfoFR_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RADFR_in_T_
#define _DEFINED_TYPEDEF_FOR_RADFR_in_T_

typedef struct {
    real_T RADFR_flgMessStaConsistBitA[32];
    real_T RADFR_flgObjMeas[32];
    real_T RADFR_flgObjHist[32];
    real_T RADFR_flgObjVld[32];
    real_T RADFR_locObjPosX[32];
    real_T RADFR_locObjPosY[32];
    real_T RADFR_vObjVelX[32];
    real_T RADFR_aObjAccX[32];
    real_T RADFR_pctExistence[32];
    real_T RADFR_pctNonObstacle[32];
    real_T RADFR_pctObstacle[32];
    real_T RADFR_flgMessStaConsistBitB[32];
    real_T RADFR_aObjAccXSigma[32];
    real_T RADFR_locObjPosXSigma[32];
    real_T RADFR_bObjVelXSigma[32];
    real_T RADFR_vObjVelY[32];
    real_T RADFR_stObjMovgSts[32];
    real_T RADFR_locObjPosZ[32];
    real_T RADFR_stObjClass[32];
    real_T RADFR_lObjLngth[32];
    real_T RADFR_locObjPosYSigma[32];
    real_T RADFR_lObjRearEndLoss[32];
    real_T RADFR_pctObjClass[32];
    RADFR_ObjStarter_T RADFR_ObjStarter;
    RADFR_ObjEnder_T RADFR_ObjEnder;
    RADFR_MRRInfoFR_T RADFR_MRRInfoFR;
} RADFR_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RADRL_ObjStarter_T_
#define _DEFINED_TYPEDEF_FOR_RADRL_ObjStarter_T_

typedef struct {
    real_T RADRL_flgMessStaConsistBit;
    real_T RADRL_aEgoVeh;
    real_T RADRL_dphiYawrate;
    real_T RADRL_phiSlipAg;
    real_T RADRL_vEgoVeh;
} RADRL_ObjStarter_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RADRL_ObjEnder_T_
#define _DEFINED_TYPEDEF_FOR_RADRL_ObjEnder_T_

typedef struct {
    real_T RADRL_flgMessEnderConsistBit;
    real_T RADRL_idxObjTiStmp;
    real_T RADRL_numChecksum;
    real_T RADRL_cntObjMsgCnt;
} RADRL_ObjEnder_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RADRL_LRRInfo_T_
#define _DEFINED_TYPEDEF_FOR_RADRL_LRRInfo_T_

typedef struct {
    real_T RADRL_pctAbsorptionBlindness;
    real_T RADRL_pctDistortionBlindness;
    real_T RADRL_stHWFail;
    real_T RADRL_phiHorizontalMisalignment;
    real_T RADRL_cntITCInfo;
    real_T RADRL_flgSGUFail;
    real_T RADRL_xCRC;
    real_T RADRL_xMsgCnt;
} RADRL_LRRInfo_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RADRL_in_T_
#define _DEFINED_TYPEDEF_FOR_RADRL_in_T_

typedef struct {
    real_T RADRL_flgMessStaConsistBitA[32];
    real_T RADRL_flgObjMeas[32];
    real_T RADRL_flgObjHist[32];
    real_T RADRL_flgObjVld[32];
    real_T RADRL_locObjPosX[32];
    real_T RADRL_locObjPosY[32];
    real_T RADRL_vObjVelX[32];
    real_T RADRL_aObjAccX[32];
    real_T RADRL_pctExistence[32];
    real_T RADRL_pctNonObstacle[32];
    real_T RADRL_pctObstacle[32];
    real_T RADRL_flgMessStaConsistBitB[32];
    real_T RADRL_aObjAccXSigma[32];
    real_T RADRL_locObjPosXSigma[32];
    real_T RADRL_bObjVelXSigma[32];
    real_T RADRL_vObjVelY[32];
    real_T RADRL_stObjMovgSts[32];
    real_T RADRL_locObjPosZ[32];
    real_T RADRL_stObjClass[32];
    real_T RADRL_lObjLngth[32];
    real_T RADRL_locObjPosYSigma[32];
    real_T RADRL_lObjRearEndLoss[32];
    real_T RADRL_pctObjClass[32];
    RADRL_ObjStarter_T RADRL_ObjStarter;
    RADRL_ObjEnder_T RADRL_ObjEnder;
    RADRL_LRRInfo_T RADRL_LRRInfo;
} RADRL_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RADRR_ObjStarter_T_
#define _DEFINED_TYPEDEF_FOR_RADRR_ObjStarter_T_

typedef struct {
    real_T RADRR_flgMessStaConsistBit;
    real_T RADRR_aEgoVeh;
    real_T RADRR_dphiYawrate;
    real_T RADRR_phiSlipAg;
    real_T RADRR_vEgoVeh;
} RADRR_ObjStarter_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RADRR_ObjEnder_T_
#define _DEFINED_TYPEDEF_FOR_RADRR_ObjEnder_T_

typedef struct {
    real_T RADRR_flgMessEnderConsistBit;
    real_T RADRR_idxObjTiStmp;
    real_T RADRR_numChecksum;
    real_T RADRR_cntObjMsgCnt;
} RADRR_ObjEnder_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RADRR_MRRInfoRR_T_
#define _DEFINED_TYPEDEF_FOR_RADRR_MRRInfoRR_T_

typedef struct {
    real_T RADRR_pctAbsorptionBlindness;
    real_T RADRR_pctDistortionBlindness;
    real_T RADRR_stHWFail;
    real_T RADRR_phiHorizontalMisalignment;
    real_T RADRR_cntITCInfo;
    real_T RADRR_flgSGUFail;
    real_T RADRR_xCRC;
    real_T RADRR_xMsgCnt;
} RADRR_MRRInfoRR_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RADRR_in_T_
#define _DEFINED_TYPEDEF_FOR_RADRR_in_T_

typedef struct {
    real_T RADRR_flgMessStaConsistBitA[32];
    real_T RADRR_flgObjMeas[32];
    real_T RADRR_flgObjHist[32];
    real_T RADRR_flgObjVld[32];
    real_T RADRR_locObjPosX[32];
    real_T RADRR_locObjPosY[32];
    real_T RADRR_vObjVelX[32];
    real_T RADRR_aObjAccX[32];
    real_T RADRR_pctExistence[32];
    real_T RADRR_pctNonObstacle[32];
    real_T RADRR_pctObstacle[32];
    real_T RADRR_flgMessStaConsistBitB[32];
    real_T RADRR_aObjAccXSigma[32];
    real_T RADRR_locObjPosXSigma[32];
    real_T RADRR_bObjVelXSigma[32];
    real_T RADRR_vObjVelY[32];
    real_T RADRR_stObjMovgSts[32];
    real_T RADRR_locObjPosZ[32];
    real_T RADRR_stObjClass[32];
    real_T RADRR_lObjLngth[32];
    real_T RADRR_locObjPosYSigma[32];
    real_T RADRR_lObjRearEndLoss[32];
    real_T RADRR_pctObjClass[32];
    RADRR_ObjStarter_T RADRR_ObjStarter;
    RADRR_ObjEnder_T RADRR_ObjEnder;
    RADRR_MRRInfoRR_T RADRR_MRRInfoRR;
} RADRR_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_MAP_Confidence4_T_
#define _DEFINED_TYPEDEF_FOR_MAP_Confidence4_T_

typedef struct {
    real_T MAP_facC6;
    real_T MAP_facC5;
} MAP_Confidence4_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_MAP_Confidence3_T_
#define _DEFINED_TYPEDEF_FOR_MAP_Confidence3_T_

typedef struct {
    real_T MAP_facC4;
    real_T MAP_facC3;
} MAP_Confidence3_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_MAP_Confidence2_T_
#define _DEFINED_TYPEDEF_FOR_MAP_Confidence2_T_

typedef struct {
    real_T MAP_facC2;
    real_T MAP_facC1;
    real_T MAP_facC0;
} MAP_Confidence2_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_MAP_Confidence1_T_
#define _DEFINED_TYPEDEF_FOR_MAP_Confidence1_T_

typedef struct {
    real_T MAP_stTFLLonSts;
    real_T MAP_stTFLLatSts;
    real_T MAP_phiTFLSituationYaw;
    real_T MAP_xEgoVehPosY;
    real_T MAP_xEgoVehPosX;
} MAP_Confidence1_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_HDMap_T_
#define _DEFINED_TYPEDEF_FOR_HDMap_T_

typedef struct {
    real_T MAP_stTFLLonSts;
    real_T MAP_stTFLLatSts;
    real_T MAP_phiTFLSituationYaw;
} HDMap_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_MAP_in_T_
#define _DEFINED_TYPEDEF_FOR_MAP_in_T_

typedef struct {
    MAP_Confidence4_T MAP_Confidence4;
    MAP_Confidence3_T MAP_Confidence3;
    MAP_Confidence2_T MAP_Confidence2;
    MAP_Confidence1_T MAP_Confidence1;
    HDMap_T HDMap;
} MAP_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_SVC_PrkSlotDet_T_
#define _DEFINED_TYPEDEF_FOR_SVC_PrkSlotDet_T_

typedef struct {
    real_T SVC_phiVehYawStrtPnt;
    real_T SVC_locVehPosYStrtPnt;
    real_T SVC_locVehPosXStrtPnt;
    uint8_T SVC_stSlotSts;
    real_T SVC_szSlotLngth;
    real_T SVC_szSlotDpth;
} SVC_PrkSlotDet_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_SVC_in_T_
#define _DEFINED_TYPEDEF_FOR_SVC_in_T_

typedef struct {
    SVC_PrkSlotDet_T SVC_PrkSlotDet;
} SVC_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_SensInfo_T_
#define _DEFINED_TYPEDEF_FOR_SensInfo_T_

typedef struct {
    real32_T SensInfo_lRADFCHght;
    real32_T SensInfo_lRADFLHght;
    real32_T SensInfo_lRADFRHght;
    real32_T SensInfo_lRADRLHght;
    real32_T SensInfo_lRADRRHght;
    real32_T SensInfo_phiRADFCMntAg;
    real32_T SensInfo_phiRADFLMntAg;
    real32_T SensInfo_phiRADFRMntAg;
    real32_T SensInfo_phiRADRLMntAg;
    real32_T SensInfo_phiRADRRMntAg;
    real32_T SensInfo_lRADFCLatDst2Center;
    real32_T SensInfo_lRADFLLatDst2Center;
    real32_T SensInfo_lRADFRLatDst2Center;
    real32_T SensInfo_lRADRLLatDst2Center;
    real32_T SensInfo_lRADRRLatDst2Center;
    real32_T SensInfo_lRADFCLongDst2RearAxle;
    real32_T SensInfo_lRADFLLongDst2RearAxle;
    real32_T SensInfo_lRADFRLongDst2RearAxle;
    real32_T SensInfo_lRADRLLongDst2RearAxle;
    real32_T SensInfo_lRADRRLongDst2RearAxle;
    real32_T SensInfo_lDstFrBumper2RearAxle;
    real32_T SensInfo_lEPMPosToFrBumper;
} SensInfo_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_Sens_outputs_T_
#define _DEFINED_TYPEDEF_FOR_Sens_outputs_T_

typedef struct {
    IMU_in_T IMU_in;
    USS_in_T USS_in;
    CAMC_in_T CAMC_in;
    real_T CAMN_in;
    real_T CAMW_in;
    DphRADFC_in_T DphRADFC_in;
    RADFC_in_T RADFC_in;
    RADFL_in_T RADFL_in;
    RADFR_in_T RADFR_in;
    RADRL_in_T RADRL_in;
    RADRR_in_T RADRR_in;
    MAP_in_T MAP_in;
    SVC_in_T SVC_in;
    SensInfo_T SensInfo;
} Sens_outputs_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_VCU_in_T_
#define _DEFINED_TYPEDEF_FOR_VCU_in_T_

typedef struct {
    real_T VCU_trqIntdFrntMotrTrq;
    real_T VCU_flgIntdFrntMotrTrqVld;
    real_T VCU_trqIntdRearMotrTrq;
    real_T VCU_flgIntdReadMotrTrqVld;
    real_T VCU_pntAccPedActPos;
    real_T VCU_pntAccPedEffPos;
    real_T VCU_flgAccPedOvrd;
    real_T VCU_flgAccPedActPosVld;
    real_T VCU_flgAccPedEffPosVld;
    real_T VCU_stVCUEPBReq;
    real_T VCU_flgTargetGearVld;
    real_T VCU_flgActGearVld;
    real_T VCU_stTargetGear;
    real_T VCU_stCruSts;
    real_T VCU_vCruStrdSpd;
    real_T VCU_flgPtWakeupReq;
    real_T VCU_flgBrkLmpReq;
    real_T VCU_flgRvsLmpReq;
    real_T VCU_flgNGear;
    real_T VCU_flgDGear;
    real_T VCU_flgRGear;
    real_T VCU_flgPGear;
    real_T VCU_stActGear;
    real_T VCU_flgStillDrv;
    real_T VCU_stChrgDispLmpReq;
    real_T VCU_stAlrmSetReq;
    real_T VCU_flgShftChngFail;
    real_T VCU_flgRmvAcChger;
    real_T VCU_stRegenSts;
    real_T VCU_flgMotrOverTemp;
    real_T VCU_flgMotrOverSpd;
    real_T VCU_flgLmpHome;
    real_T VCU_flgImdStopDrv;
    real_T VCU_flgHVILErr;
    real_T VCU_flgElecLockFail;
    real_T VCU_flgChgLine;
    real_T VCU_flgBreakerRemind;
    real_T VCU_flgVehRdy;
    real_T VCU_stDrvModeIndct;
    real_T VCU_stEPFaultLvlWarn;
    real_T VCU_stFourWhlDrvIndct;
    real_T VCU_pwrPwrDisp;
    real_T VCU_lRemainingRng;
    real_T VCU_xAlrmSetReqVal;
    real_T VCU_uLVBattU;
    real_T VCU_stLVBattUSts;
    real_T VCU_pntLVBattSOC;
    real_T VCU_stLVBattSOCSts;
    real_T VCU_stLoadShed;
    real_T VCU_stLVBattWarn;
    real_T VCU_stBattChgSts;
    real_T Vcu_trqTotMotrNegTrqCap;
    real_T Vcu_trqTotMotrPosTrqCap;
} VCU_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_BCU_in_T_
#define _DEFINED_TYPEDEF_FOR_BCU_in_T_

typedef struct {
    real_T BCU_vWhlSpdFL;
    real_T BCU_vWhlSpdFR;
    real_T BCU_stWhlSpdFLSts;
    real_T BCU_stWhlSpdFRSts;
    real_T BCU_stWhlSpdFLDir;
    real_T BCU_stWhlSpdFRDir;
    real_T BCU_vWhlSpdRL;
    real_T BCU_vWhlSpdRR;
    real_T BCU_stWhlSpdRLSts;
    real_T BCU_stWhlSpdRRSts;
    real_T BCU_stWhlSpdRLDir;
    real_T BCU_stWhlSpdRRDir;
    real_T BCU_cntWhlPlsFL;
    real_T BCU_cntWhlPlsFR;
    real_T BCU_cntWhlPlsRL;
    real_T BCU_cntWhlPlsRR;
    real_T BCU_flgWhlPlsFLVld;
    real_T BCU_flgWhlPlsFRVld;
    real_T BCU_flgWhlPlsRLVld;
    real_T BCU_flgWhlPlsRRVld;
    real_T BCU_vVehSpd;
    real_T BCU_flgVehSpdVld;
    real_T BCU_stVehMovgDir;
    real_T BCU_stEPBSts;
    real_T BCU_pBrkPres;
    real_T BCU_flgBrkPresVld;
    real_T BCU_flgNoBrkFr;
    real_T BCU_pBrkPresOfs;
    real_T BCU_flgBrkPresOfsVld;
    real_T BCU_stBrkSwt;
    real_T BCU_stBrkLghtReq;
    real_T BCU_flgHAZReq;
    real_T BCU_flgBrkOvht;
    real_T BCU_stEPBSwt;
    real_T BCU_flgABSFailLmpReq;
    real_T BCU_flgVDCTCSFailLmpReq;
    real_T BCU_flgVDCTCSLmpInfo;
    real_T BCU_flgEBDFailLmpReq;
    real_T BCU_stEPBWarnLmpReq;
    real_T BCU_stEPBFailLmpReq;
    real_T BCU_flgBAUFailLmpReq;
    real_T BCU_stEPBMod;
    real_T BCU_flgABSActv;
    real_T BCU_flgVDCActv;
    real_T BCU_flgVDCDeactv;
    real_T BCU_flgTCSActv;
    real_T BCU_flgTCSDeactv;
    real_T BCU_flgEBDActv;
    real_T BCU_flgDTCActv;
    real_T BCU_flgABAActv;
    real_T BCU_flgABAAvl;
    real_T BCU_flgEBPActv;
    real_T BCU_flgEBPAvl;
    real_T BCU_flgAEBActv;
    real_T BCU_flgAEBAvl;
    real_T BCU_flgEBAActv;
    real_T BCU_flgEBAAvl;
    real_T BCU_flgCDDSActv;
    real_T BCU_flgCDDSAvl;
    real_T BCU_flgSCMActv;
    real_T BCU_flgSCMAvl;
    real_T BCU_flgAWBActv;
    real_T BCU_flgAWBAvl;
    real_T BCU_flgPEDPActv;
    real_T BCU_flgPEDPAvl;
    real_T BCU_flgHRBActv;
    real_T BCU_flgCDPActv;
    real_T BCU_flgHFCActv;
    real_T BCU_flgHBAActv;
    real_T BCU_stQDCACCFail;
    real_T BCU_flgECDTTempOffs;
    real_T BCU_flgCDPAvail;
    real_T BCU_flgHHCAvail;
    real_T BCU_stStandstillSts;
    real_T BCU_flgHHCActv;
    real_T BCU_flgAutoBrkgActv;
    real_T BCU_flgAutoBrkgAvl;
    real_T BCU_stHDCSts;
    real_T BCU_stAVHSts;
    real_T BCU_flgDSR_AddlTqReqValid;
    real_T BCU_flgVLCActv;
    real_T BCU_flgVLCAvl;
    real_T BCU_aVLCTarDecel;
    real_T BCU_trqDSRAddTrqReq;
    real_T BCU_stDSREPSReqTyp;
    real_T BCU_vVehSpdASILD;
    real_T BCU_flgVehSpdASILD;
} BCU_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_SCM_in_T_
#define _DEFINED_TYPEDEF_FOR_SCM_in_T_

typedef struct {
    real_T SCM_phiStrngWhlAg;
    real_T SCM_flgStrngWhlAgDir;
    real_T SCM_dphiStrngWhlAgSpd;
    real_T SCM_flgStrngWhlAgSpdDir;
    real_T SCM_flgStrngWhlAgSpdVld;
    real_T SCM_stStrngAgSensFailSts;
    real_T SCM_flgStrngAgSensClb;
    real_T SCM_stFrntWiperSwt;
    real_T SCM_stFrntWiperSpd;
    real_T SCM_stWasherRearWiperSwt;
    real_T SCM_stWiperAutoSwt;
    real_T SCM_stHiLowBeamSwt;
    real_T SCM_stFogLghtSwt;
    real_T SCM_stTurnIdctrSwt;
    real_T SCM_stSCMFailSts;
} SCM_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_EPS_in_T_
#define _DEFINED_TYPEDEF_FOR_EPS_in_T_

typedef struct {
    real_T EPS_stEPSWarnLmpReq;
    real_T EPS_stEPSDrvMod;
    real_T EPS_stEPSSts;
    real_T EPS_stEPSDrvTrqVld;
    real_T EPS_trqEPSStrngTrq;
    real_T EPS_stActvExtIfc;
    real_T EPS_flgDSRAddTrqReqAvl;
    real_T EPS_flgLKSTrqReqAvl;
    real_T EPS_flgAPAAgReqAvl;
    real_T EPS_flgHapticWarn1AvlRADRR;
    real_T EPS_flgHapticWarn2AvlRADRR;
    real_T EPS_flgHapticWarn1AvlCAMFC;
    real_T EPS_flgHapticWarn2AvlCAMFC;
    real_T EPS_stHandsOffDetConf;
    real_T EPS_stEPSHandsOnDet;
    real_T EPS_phiEPSPinionAg;
    real_T EPS_stEPSPinionAgVld;
} EPS_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_BCM_in_T_
#define _DEFINED_TYPEDEF_FOR_BCM_in_T_

typedef struct {
    real_T BCM_stLowBeamSts;
    real_T BCM_stHiBeamSts;
    real_T BCM_stFogLghtFrntSts;
    real_T BCM_stFogLghtFLSts;
    real_T BCM_stFogLghtFRSts;
    real_T BCM_stPosLghtSts;
    real_T BCM_stDaytimeRunningLghtSts;
    real_T BCM_stLeftTurnIdctrLghtSts;
    real_T BCM_stRghtTurnIdctrLghtSts;
    real_T BCM_stHzrdWarnSts;
    real_T BCM_stPuddleLghtFLSts;
    real_T BCM_stPuddleLghtFRSts;
    real_T BCM_stPuddleLghtRLSts;
    real_T BCM_stPuddleLghtRRSts;
    real_T BCM_stFootwellLghtSts;
    real_T BCM_stHandleLghtSts;
    real_T BCM_stLghtPwrSplyEnaSts;
    real_T BCM_stFogLghtRSts;
    real_T BCM_stRvsLghtSts;
    real_T BCM_stWasherMotrDir;
    real_T BCM_stPuddleLghtTrunkCmdSts;
    real_T BCM_stBrkLghtSts;
    real_T BCM_stTrunkLghtSts;
    real_T BCM_stRearWiperSts;
    real_T BCM_stWiperWasherPmpFailSts;
    real_T BCM_stRearWiperBlkSts;
    real_T BCM_stRearWiperParkPosSts;
    real_T BCM_stSeatOccupantFLSts;
    real_T BCM_stDoorAjarFLSts;
    real_T BCM_stDoorAjarFRSts;
    real_T BCM_stDoorAjarRLSts;
    real_T BCM_stDoorAjarRRSts;
    real_T BCM_stHoodAjarSts;
    real_T BCM_stTrunkAjarSts;
    real_T BCM_stSteerWhlHeatSts;
    real_T BCM_flgLowBattWarn;
    real_T BCM_flgKeyOutWarnReq;
    real_T BCM_flgKeyInsideWarnReq;
    real_T BCM_flgLockFailWarnReq;
    real_T BCM_stLockFailSrc;
    real_T BCM_flgPEPSECUFailWarn;
    real_T BCM_stBrkFluidLvl;
    real_T BCM_stBrkPadWearSts;
    real_T BCM_stAntiTheftWarnSts;
    real_T BCM_stBrkFluidWarnReq;
    real_T BCM_stBrkPadWearWarnReq;
    real_T BCM_stFrntWiperSts;
    real_T BCM_stMirrAutoFoldSts;
    real_T BCM_stMirrAutoDipSts;
    real_T BCM_stWiperSrvReqSts;
    real_T BCM_stMirrFLSts;
    real_T BCM_stMirrFRSts;
    real_T BCM_stMirrDimSts;
    real_T BCM_stWiperWasherLvl;
    real_T BCM_stMirrHeatSts;
    real_T BCM_stFrntWiperParkPosSts;
    real_T BCM_stFrntWiperBlkPosSts;
} BCM_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CDC_in_T_
#define _DEFINED_TYPEDEF_FOR_CDC_in_T_

typedef struct {
    real_T CDC_lVehOdometer;
    real_T CDC_vVehDispSpd;
    real_T CDC_stAirbLmpFail;
    real_T CDC_stAirbPassLmpFail;
    real_T CDC_idxNavCtryCod;
    real_T CDC_idxNavCurrRoadCod;
    real_T CDC_vNaviSpdLim;
    real_T CDC_stNaviSpdLimSts;
    real_T CDC_stNaviSpdLimUnit;
    real_T CDC_stFCWSet;
    real_T CDC_stACCTauGapStored;
    real_T CDC_stToggleModeDrvCmd;
    real_T CDC_stGoNotifierOnOff;
    real_T CDC_stTSRSpdLimDataOnOff;
    real_T CDC_stFCTAOnOffCmd;
    real_T CDC_stRCTAReq;
    real_T CDC_stLCAOnOff;
    real_T CDC_stLCATactileWarnOnOff;
    real_T CDC_stSetHMA;
    real_T CDC_stSdowOnOff;
    real_T CDC_stSetLaneAsstAidTyp;
    real_T CDC_stSetLaneAsstSnvty;
    real_T CDC_stLaneAsstTactileOnOff;
    real_T CDC_stSetTSR;
    real_T CDC_stDrvAlertSysOnOff;
    real_T CDC_stPCWLatentWarnOnOff;
    real_T CDC_stPCWPreWarnOnOff;
    real_T CDC_stAEBOnOff;
    real_T CDC_stDASTactileOnOff;
    real_T CDC_stCDCFail;
    real_T CDC_stStrWhlHtgReq;
    real_T CDC_stWelcomeLghtOnOff;
    real_T CDC_stFlwMeHomeOnOff;
    real_T CDC_stFlwMeHomeTiSet;
    real_T CDC_stMainLghtSet;
    real_T CDC_stWiperSrvReq;
    real_T CDC_stExtraWiperModeOnOff;
    real_T CDC_stRearWiperAutoSetOnOff;
    real_T CDC_stAVAOnOffReq;
    real_T CDC_stDaytimeRunningLghtOnOff;
} CDC_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ACM_in_T_
#define _DEFINED_TYPEDEF_FOR_ACM_in_T_

typedef struct {
    real_T ACM_flgCrashDet;
    real_T ACM_flgSeatBltFrntLeSts;
    real_T ACM_flgSeatBltFrntRiSts;
    real_T ACM_flgSeatBltMidRowLeSts;
    real_T ACM_flgSeatBltMidRowMidSts;
    real_T ACM_flgSeatBltMidRowRiSts;
    real_T ACM_flgSeatOccptFrntRiSts;
    real_T ACM_stAirbWarnReq;
    real_T ACM_stPassAirbgInhbnLampReq;
    real_T ACM_dphiYawRate;
    real_T ACM_stYawRateSts;
    real_T ACM_aVehLatAcc;
    real_T ACM_stVehLatAccSts;
    real_T ACM_aVehLongAcc;
    real_T ACM_stVehLongAccSts;
} ACM_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_TCU_in_T_
#define _DEFINED_TYPEDEF_FOR_TCU_in_T_

typedef struct {
    real_T TCU_tiYear;
    real_T TCU_tiMonth;
    real_T TCU_tiDay;
    real_T TCU_tiHour;
    real_T TCU_tiMinute;
    real_T TCU_tiSecond;
    real_T TCU_locLongiCoor;
    real_T TCU_locLongiDir;
    real_T TCU_locLatiCoor;
    real_T TCU_locLatiDir;
} TCU_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CGW_in_T_
#define _DEFINED_TYPEDEF_FOR_CGW_in_T_

typedef struct {
    real_T CGW_stHiBeamCmd;
    real_T CGW_stFogLghtCmd;
    real_T CGW_stReWiperCmd;
    real_T CGW_flgBulbOutTurnIdctrFrntLe;
    real_T CGW_flgBulbOutTurnIdctrFrntRi;
    real_T CGW_flgBulbOutTurnIdctrReLe;
    real_T CGW_flgBulbOutTurnIdctrReRi;
    real_T CGW_flgBulbOutFogLghtFrntLe;
    real_T CGW_flgBulbOutFogLghtFrntRi;
    real_T CGW_flgBulbOutFogLghtReLe;
    real_T CGW_flgBulbOutFogLghtReRi;
    real_T CGW_flgBulbOutDaytimeRunngLghtFrntLe;
    real_T CGW_flgBulbOutDaytimeRunngLghtFrntRi;
    real_T CGW_flgBulbOutFenderBrkPosnLghtReLe;
    real_T CGW_flgBulbOutFenderBrkPosnLghtReRi;
    real_T CGW_flgBulbOutTrBrkPosnLghtReLe;
    real_T CGW_flgBulbOutTrBrkPosnLghtReRi;
    real_T CGW_flgBulbOutBrkLghtTop;
    real_T CGW_flgBulbOutHiBeamLe;
    real_T CGW_flgBulbOutHiBeamRi;
    real_T CGW_flgBulbOutLoBeamLe;
    real_T CGW_flgBulbOutLoBeamRi;
    real_T CGW_flgBulbOutResvLiLe;
    real_T CGW_flgBulbOutResvLiRi;
    real_T CGW_stVehSt;
    real_T CGW_stComfortEna;
    real_T CGW_stImmoSts;
    real_T CGW_stKeyAutoSts;
} CGW_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_VehInfo_T_
#define _DEFINED_TYPEDEF_FOR_VehInfo_T_

typedef struct {
    real32_T VehInfo_lWheelBase;
    real32_T VehInfo_lVehOveralLngth;
    real32_T VehInfo_lVehOveralWidth;
    real32_T VehInfo_lVehOveralHght;
    real32_T VehInfo_lTreadWidthF;
    real32_T VehInfo_lTreadWidthR;
    real32_T VehInfo_rStrngRat;
    uint8_T VehInfo_idxVehTyp;
} VehInfo_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FCM_in_T_
#define _DEFINED_TYPEDEF_FOR_FCM_in_T_

typedef struct {
    boolean_T FCM_flgACCStopGo;
    boolean_T FCM_flgAEBVisionOnly;
    boolean_T FCM_flgAEBPedestrian;
    boolean_T FCM_flgAEBAdvanced;
    boolean_T FCM_flgISA;
    boolean_T FCM_flgHWA;
    boolean_T FCM_flgTJA;
    boolean_T FCM_flgFCTA;
    boolean_T FCM_flgReserved1;
    boolean_T FCM_flgLDW;
    boolean_T FCM_flgLKA;
    boolean_T FCM_flgLKS;
    boolean_T FCM_flgAHBC;
    boolean_T FCM_flgTSR;
    boolean_T FCM_flgSAPA;
    boolean_T FCM_flgReserved2;
} FCM_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FIM_in_T_
#define _DEFINED_TYPEDEF_FOR_FIM_in_T_

typedef struct {
    boolean_T FIM_flgADCInternalFault;
    boolean_T FIM_flgEQ4NonRecoverableFault;
    boolean_T FIM_flgEQ4RecoverableFault;
    boolean_T FIM_flgACMLossCommFault;
    boolean_T FIM_flgASDMLossCommFault;
    boolean_T FIM_flgBCULossCommFault;
    boolean_T FIM_flgCGWLossCommFault;
    boolean_T FIM_flgEPSLossCommFault;
    boolean_T FIM_flgSCMLossCommFault;
    boolean_T FIM_flgVCULossCommFault;
    boolean_T FIM_flgAPALossCommFault;
    boolean_T FIM_flgRADFCLossCommFault;
    boolean_T FIM_flgRADFLLossCommFault;
    boolean_T FIM_flgRADFRLossCommFault;
    boolean_T FIM_flgRADRLLossCommFault;
    boolean_T FIM_flgRADRRLossCommFault;
    boolean_T FIM_flgGPSLossCommFault;
    boolean_T FIM_flgCDCLossCommFault;
    boolean_T FIM_flgBCMLossCommFault;
} FIM_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_Veh_outputs_T_
#define _DEFINED_TYPEDEF_FOR_Veh_outputs_T_

typedef struct {
    VCU_in_T VCU_in;
    BCU_in_T BCU_in;
    SCM_in_T SCM_in;
    EPS_in_T EPS_in;
    BCM_in_T BCM_in;
    CDC_in_T CDC_in;
    ACM_in_T ACM_in;
    TCU_in_T TCU_in;
    CGW_in_T CGW_in;
    VehInfo_T VehInfo;
    FCM_in_T FCM_in;
    FIM_in_T FIM_in;
} Veh_outputs_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_DIN_TmpInputs_T_
#define _DEFINED_TYPEDEF_FOR_DIN_TmpInputs_T_

typedef struct {
    uint8_T DIN_stCruSpdLimSwtSts;
} DIN_TmpInputs_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_DIN_in_T_
#define _DEFINED_TYPEDEF_FOR_DIN_in_T_

typedef struct {
    real_T DIN_stAccSpdResIncSwt;
    real_T DIN_stAccSpdDecSwt;
    real_T DIN_stAccSetSwt;
    real_T DIN_stAccTimeGapIncSwt;
    real_T DIN_stAccTimeGapDecSwt;
    real_T DIN_stModeTogIncSwt;
    real_T DIN_stAPASetSwt;
    real_T DIN_stModeTogDecSwt;
    real_T DIN_stNioPilotSetSwt;
    real_T DIN_stNOMISwt;
    real_T DIN_stMenuVolUpSwt;
    real_T DIN_stMenuVolDwnSwt;
    real_T DIN_stMenuLeftSwt;
    real_T DIN_stMenuRightSwt;
    real_T DIN_stMenuSwt;
    real_T DIN_stSelSwt;
    real_T DIN_stSprSwt;
    real_T DIN_stSWCFail;
    DIN_TmpInputs_T DIN_TmpInputs;
} DIN_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_Drv_outputs_T_
#define _DEFINED_TYPEDEF_FOR_Drv_outputs_T_

typedef struct {
    real_T AIN_in;
    DIN_in_T DIN_in;
} Drv_outputs_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_MGM_outputs_T_
#define _DEFINED_TYPEDEF_FOR_MGM_outputs_T_

typedef struct {
    real_T MGM_stLCASts;
    real_T MGM_stLDWSts;
    real_T MGM_stLKSSts;
    real_T MGM_stACCSts;
    real_T MGM_stFCWSts;
    real_T MGM_stAEBSts;
    real_T MGM_stTJASts;
    real_T MGM_stETJASts;
    real_T MGM_stHWASts;
    real_T MGM_stAPASts;
    real_T MGM_stSUMNSts;
    real_T MGM_stAHCSts;
    real_T MGM_stBSDSts;
    real_T MGM_stCTASts;
    real_T MGM_stHMISts;
    real_T MGM_stTSRSts;
} MGM_outputs_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_SIN_outputs_T_
#define _DEFINED_TYPEDEF_FOR_SIN_outputs_T_

typedef struct {
    Sens_outputs_T Sens_out;
    Veh_outputs_T Veh_out;
    Drv_outputs_T Drv_out;
    MGM_outputs_T MGM_out;
} SIN_outputs_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_VCU_CGW_219_T_
#define _DEFINED_TYPEDEF_FOR_VCU_CGW_219_T_

typedef struct {
    real_T ACChrgCmplSts;
    real_T ACChrgCurrentRng;
    real_T ACChrgrOverT;
    real_T ACChrgrPluginSts;
    real_T DCChrgrOverT;
    real_T EPFaultLevelWarning;
    real_T HiVoltCntctrSts;
    real_T VCUBrakeRemind;
    real_T VCUChgLineSts;
    real_T VCUChrgDispLampReq;
    real_T VCUDrvModIndcn;
    real_T VCUElecLockfail;
    real_T VCUFourWhlDrvIndcn;
    real_T VCUHVILError;
    real_T VCUImdStopDriving;
    real_T VCUMotOverSpd;
    real_T VCUMotOverTemp;
    real_T VCUPwrDisp;
    real_T VCURegenSts;
    real_T VCURemainingRng;
    real_T VCURmvAcChger;
    real_T VCUShiftChangefail;
    real_T VCUVehRdy;
    real_T VehPwrLimdlampReq;
} VCU_CGW_219_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_VCU_05_T_
#define _DEFINED_TYPEDEF_FOR_VCU_05_T_

typedef struct {
    real_T CruiseStatus;
    real_T CruiseStoredSpeed;
    real_T VCUActGear;
    real_T VCUActGearValid;
    real_T VCUBrkLampReq;
    real_T VCUCruiseCtrlMod;
    real_T VCUEPBReq;
    real_T VCUPtWakeupReq;
    real_T VCURvsLampReq;
    real_T VCUTargetGear;
    real_T VCUTargetGearValid;
    real_T VCU_05_CRC;
    real_T VCU_05_MsgCntr;
} VCU_05_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_VCU_02_T_
#define _DEFINED_TYPEDEF_FOR_VCU_02_T_

typedef struct {
    real_T AccrPedlActPosn;
    real_T AccrPedlActPosnValid;
    real_T AccrPedlEfcPosn;
    real_T AccrPedlEfcPosnValid;
    real_T VCUAccrPedlOvrd;
    real_T VCUIntdFrntMotTq;
    real_T VCUIntdFrntMotTqValid;
    real_T VCUIntdReMotTq;
    real_T VCUIntdReMotTqValid;
    real_T VCU_02_CRC;
    real_T VCU_02_MsgCntr;
} VCU_02_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_SWC_01_T_
#define _DEFINED_TYPEDEF_FOR_SWC_01_T_

typedef struct {
    real_T AccSetSwtSts;
    real_T AccSpdDecSwtSts;
    real_T AccSpdIncOrResuSwtSts;
    real_T AccTimeGapDecSwtSts;
    real_T AccTimeGapIncSwtSts;
    real_T MenuLePushSwtSts;
    real_T MenuOrVolDwnPushSwtSts;
    real_T MenuOrVolUpPushSwtSts;
    real_T MenuPushSwtSts;
    real_T MenuRiPushSwtSts;
    real_T ModeTogDecSwtSts;
    real_T ModeTogIncSwtSts;
    real_T NOMICtrlPushSwtSts;
    real_T SWCFailSts;
    real_T SWC_01_CRC;
    real_T SWC_01_MsgCntr;
    real_T SelnPushSwtSts;
    real_T Spare01PushSwtSts;
} SWC_01_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_SCM_02_T_
#define _DEFINED_TYPEDEF_FOR_SCM_02_T_

typedef struct {
    real_T FogLiPushSwtSts;
    real_T FrntWiprInterSpd;
    real_T FrntWiprSwtSts;
    real_T HiLowBeamPushSwtSts;
    real_T SCMFailSts;
    real_T TurnIndcrSwtSts;
    real_T WiprAutModPushSwtSts;
    real_T WshrAndReWiprPushSwtSts;
} SCM_02_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_SCM_01_T_
#define _DEFINED_TYPEDEF_FOR_SCM_01_T_

typedef struct {
    real_T SCM_01_CRC;
    real_T SCM_01_MsgCntr;
    real_T SteerAgSnsrCalSts;
    real_T SteerAgSnsrFailSts;
    real_T SteerWhlAg;
    real_T SteerWhlAgAndSpdValid;
    real_T SteerWhlAgDir;
    real_T SteerWhlAgSpd;
    real_T SteerWhlAgSpdDir;
} SCM_01_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_EPS_02_T_
#define _DEFINED_TYPEDEF_FOR_EPS_02_T_

typedef struct {
    real_T EPS_02_CRC;
    real_T EPS_02_MsgCntr;
    real_T EPS_HandsOffDetnConfidence;
    real_T EPS_HandsOnDetn;
    real_T EPS_PinionAg;
    real_T EPS_PinionAgValid;
} EPS_02_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_EPS_01_T_
#define _DEFINED_TYPEDEF_FOR_EPS_01_T_

typedef struct {
    real_T APA_PinionAgReqAvl;
    real_T CAM_FC_HapticWarn1Avl;
    real_T CAM_FC_HapticWarn2Avl;
    real_T DSR_AddlTqReqAvl;
    real_T EPSDrvngMod;
    real_T EPSSts;
    real_T EPSWarnLampReq;
    real_T EPS_01_CRC;
    real_T EPS_01_MsgCntr;
    real_T EPS_ActvExtIf;
    real_T LKS_TqReqAvl;
    real_T RAD_RR_HapticWarn1Avl;
    real_T RAD_RR_HapticWarn2Avl;
    real_T TorsBarTq;
    real_T TorsBarTqValid;
} EPS_01_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CGW_TCU_01_T_
#define _DEFINED_TYPEDEF_FOR_CGW_TCU_01_T_

typedef struct {
    real_T Day;
    real_T Hr;
    real_T Min;
    real_T Mth;
    real_T Sec;
    real_T Yr;
} CGW_TCU_01_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CGW_02_T_
#define _DEFINED_TYPEDEF_FOR_CGW_02_T_

typedef struct {
    real_T ComfEna;
    real_T FOTAHvPwrMgnt;
    real_T ImobEnaReq;
    real_T ImobSts;
    real_T KeyAuthSts;
    real_T KeyPrsntSts;
    real_T VehState;
} CGW_02_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CGW_01_T_
#define _DEFINED_TYPEDEF_FOR_CGW_01_T_

typedef struct {
    real_T VIN_Cntr;
    real_T VIN_Data_1;
    real_T VIN_Data_2;
    real_T VIN_Data_3;
    real_T VIN_Data_4;
    real_T VIN_Data_5;
    real_T VIN_Data_6;
    real_T VIN_Data_7;
} CGW_01_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CDC_IC_04_T_
#define _DEFINED_TYPEDEF_FOR_CDC_IC_04_T_

typedef struct {
    real_T AirbLampFailSts;
    real_T AirbPassLampFailSts;
    real_T IC_VideoSrcReq;
    real_T VehDispdSpd;
} CDC_IC_04_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CDC_IC_01_T_
#define _DEFINED_TYPEDEF_FOR_CDC_IC_01_T_

typedef struct {
    real_T VehOdometer;
} CDC_IC_01_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CCU_01_T_
#define _DEFINED_TYPEDEF_FOR_CCU_01_T_

typedef struct {
    real_T AmbTemp;
    real_T AmbTempValid;
    real_T CCUActPwrLimEna;
    real_T CbnACSysSts;
    real_T CmprOnOffSts;
    real_T ComprActPwr;
    real_T ComprFaultSts;
    real_T ComprReqdPwr;
    real_T ComprlimSts;
    real_T CoolgFanDutyCycReq;
    real_T PtcFrntFailSts;
    real_T PtcFrntOnOffSts;
    real_T PtcReFailSts;
    real_T PtcReOnOffSts;
    real_T PtcTotActPwr;
    real_T PtcTotReqdPwr;
    real_T PwrLimOfChi;
} CCU_01_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_BCU_09_T_
#define _DEFINED_TYPEDEF_FOR_BCU_09_T_

typedef struct {
    real_T ABSFailLampReq;
    real_T BAUFailLampReq;
    real_T EBDFailLampReq;
    real_T EPBFailLampReq;
    real_T EPBMod;
    real_T EPBWarnLampReq;
    real_T VDCTCSFailLampReq;
    real_T VDCTCSLampInfo;
    real_T VDCTCSOnOfflampReq;
} BCU_09_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_BCU_08_T_
#define _DEFINED_TYPEDEF_FOR_BCU_08_T_

typedef struct {
    real_T BCU_08_CRC;
    real_T BCU_08_MsgCntr;
    real_T DSR_AddlTqReq;
    real_T DSR_AddlTqReqValid;
    real_T DSR_EPSReqTyp;
    real_T VLCActv;
    real_T VLCAvl;
    real_T VLCTarDecel;
    real_T VehSpdSts_ASILD;
    real_T VehSpd_ASILD;
} BCU_08_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_BCU_07_T_
#define _DEFINED_TYPEDEF_FOR_BCU_07_T_

typedef struct {
    real_T ABAActv;
    real_T ABAAvl;
    real_T ABPActv;
    real_T ABPAvl;
    real_T ABSActv;
    real_T AEBActv;
    real_T AEBAvl;
    real_T AVHSts;
    real_T AWBActv;
    real_T AWBAvl;
    real_T AutoBrkgActv;
    real_T AutoBrkgAvl;
    real_T CDDSActv;
    real_T CDDSAvl;
    real_T CDPActv;
    real_T CDPAvail;
    real_T DTCActv;
    real_T EBAActv;
    real_T EBAAvl;
    real_T EBDActv;
    real_T ECDTTempOffs;
    real_T HBAActv;
    real_T HDCSts;
    real_T HFCActv;
    real_T HHCActv;
    real_T HHCAvail;
    real_T HRBActv;
    real_T PEDPActv;
    real_T PEDPAvl;
    real_T QDCACCFail;
    real_T SCMActv;
    real_T SCMAvl;
    real_T StandstillSts;
    real_T TCSActv;
    real_T TCSDeactv;
    real_T VDCActv;
    real_T VDCDeactv;
} BCU_07_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_BCU_04_T_
#define _DEFINED_TYPEDEF_FOR_BCU_04_T_

typedef struct {
    real_T BCUBrkLiReq;
    real_T BCU_04_CRC;
    real_T BCU_04_MsgCntr;
    real_T BCU_NoBrkF;
    real_T BrkOverHeat;
    real_T BrkPedlSts;
    real_T BrkPress;
    real_T BrkPressOffset;
    real_T BrkPressOffsetValid;
    real_T BrkPressValid;
    real_T EPBSts;
    real_T EPBSwtSts;
    real_T HAZReq;
    real_T VehMovgDir;
    real_T VehSpd;
    real_T VehSpdSts;
} BCU_04_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_BCU_03_T_
#define _DEFINED_TYPEDEF_FOR_BCU_03_T_

typedef struct {
    real_T BCU_03_CRC;
    real_T BCU_03_MsgCntr;
    real_T WhlPlsCntrFrntLe;
    real_T WhlPlsCntrFrntLeVld;
    real_T WhlPlsCntrFrntRi;
    real_T WhlPlsCntrFrntRiVld;
    real_T WhlPlsCntrReLe;
    real_T WhlPlsCntrReLeVld;
    real_T WhlPlsCntrReRi;
    real_T WhlPlsCntrReRiVld;
} BCU_03_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_BCU_02_T_
#define _DEFINED_TYPEDEF_FOR_BCU_02_T_

typedef struct {
    real_T BCU_02_CRC;
    real_T BCU_02_MsgCntr;
    real_T WhlSpdReLe;
    real_T WhlSpdReLeMovgDir;
    real_T WhlSpdReLeSts;
    real_T WhlSpdReRi;
    real_T WhlSpdReRiMovgDir;
    real_T WhlSpdReRiSts;
} BCU_02_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_BCU_01_T_
#define _DEFINED_TYPEDEF_FOR_BCU_01_T_

typedef struct {
    real_T BCU_01_CRC;
    real_T BCU_01_MsgCntr;
    real_T WhlSpdFrntLe;
    real_T WhlSpdFrntLeMovgDir;
    real_T WhlSpdFrntLeSts;
    real_T WhlSpdFrntRi;
    real_T WhlSpdFrntRiMovgDir;
    real_T WhlSpdFrntRiSts;
} BCU_01_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_BCM_03_T_
#define _DEFINED_TYPEDEF_FOR_BCM_03_T_

typedef struct {
    real_T BCM_CLOSURE_CRC;
    real_T BCM_CLOSURE_MsgCntr;
    real_T DoorAjarFrntLeSts;
    real_T DoorAjarFrntRiSts;
    real_T DoorAjarReLeSts;
    real_T DoorAjarReRiSts;
    real_T HoodAjarSts;
    real_T SeatOccpFrntLeSts;
    real_T SteerWhlHeatSts;
    real_T TrAjarSts;
} BCM_03_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ASDM_03_T_
#define _DEFINED_TYPEDEF_FOR_ASDM_03_T_

typedef struct {
    real_T DampgCtrlLimpHome;
    real_T DampgCtrlMod;
    real_T DampgCtrlampReq;
    real_T DampgDrvgMod;
} ASDM_03_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ASDM_02_T_
#define _DEFINED_TYPEDEF_FOR_ASDM_02_T_

typedef struct {
    real_T ASDM_02_CRC;
    real_T ASDM_02_MsgCntr;
    real_T CargoActv;
    real_T Current_Lvl;
    real_T ExtraHiPosn;
    real_T ExtraLoPosn;
    real_T LC_Deactivation_RequestSts;
    real_T LC_EasyEntryEnaSts;
    real_T LvlAdjDrvgMod;
    real_T LvlAdjLampReq;
    real_T LvlAdjLimpHome;
    real_T LvlAdjMod;
    real_T LvlAdjSts;
    real_T LvlAdj_Restriction;
    real_T TarLvl;
} ASDM_02_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ASDM_01_T_
#define _DEFINED_TYPEDEF_FOR_ASDM_01_T_

typedef struct {
    real_T FrntLeLvl;
    real_T FrntLeLvlAdjm;
    real_T FrntRiLvl;
    real_T FrntRiLvlAdjm;
    real_T LvlCalCmptl;
    real_T ReLeLvl;
    real_T ReRiLvl;
    real_T RearLeLvlAdjm;
    real_T RearRiLvlAdjm;
} ASDM_01_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ACM_03_T_
#define _DEFINED_TYPEDEF_FOR_ACM_03_T_

typedef struct {
    real_T ACM_03_CRC;
    real_T ACM_03_MsgCntr;
    real_T LgtA;
    real_T LgtAValSts;
} ACM_03_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ACM_02_T_
#define _DEFINED_TYPEDEF_FOR_ACM_02_T_

typedef struct {
    real_T ACM_02_CRC;
    real_T ACM_02_MsgCntr;
    real_T LatA;
    real_T LatAValSts;
    real_T YawRate;
    real_T YawRateValSts;
} ACM_02_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ACM_01_T_
#define _DEFINED_TYPEDEF_FOR_ACM_01_T_

typedef struct {
    real_T ACM_01_CRC;
    real_T ACM_01_MsgCntr;
    real_T AirbWarnReq;
    real_T CrashDetd;
    real_T PassAirbgInhbnLampReq;
    real_T SeatBltFrntLeSts;
    real_T SeatBltFrntRiSts;
    real_T SeatBltMidRowLeSts;
    real_T SeatBltMidRowMidSts;
    real_T SeatBltMidRowRiSts;
    real_T SeatOccptFrntRiSts;
} ACM_01_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_Chassis_in_T_
#define _DEFINED_TYPEDEF_FOR_Chassis_in_T_

typedef struct {
    VCU_CGW_219_T VCU_CGW_219;
    VCU_05_T VCU_05;
    VCU_02_T VCU_02;
    SWC_01_T SWC_01;
    SCM_02_T SCM_02;
    SCM_01_T SCM_01;
    EPS_02_T EPS_02;
    EPS_01_T EPS_01;
    CGW_TCU_01_T CGW_TCU_01;
    CGW_02_T CGW_02;
    CGW_01_T CGW_01;
    CDC_IC_04_T CDC_IC_04;
    CDC_IC_01_T CDC_IC_01;
    CCU_01_T CCU_01;
    BCU_09_T BCU_09;
    BCU_08_T BCU_08;
    BCU_07_T BCU_07;
    BCU_04_T BCU_04;
    BCU_03_T BCU_03;
    BCU_02_T BCU_02;
    BCU_01_T BCU_01;
    BCM_03_T BCM_03;
    ASDM_03_T ASDM_03;
    ASDM_02_T ASDM_02;
    ASDM_01_T ASDM_01;
    ACM_03_T ACM_03;
    ACM_02_T ACM_02;
    ACM_01_T ACM_01;
} Chassis_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track06_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track06_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track06_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track07_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track07_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track07_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track33_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track33_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track33_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track28_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track28_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track28_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track29_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track29_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track29_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track24_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track24_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track24_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track19_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track19_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track19_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track27_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track27_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track27_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track30_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track30_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track30_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track13_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track13_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track13_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track18_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track18_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track18_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track26_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track26_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track26_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track31_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track31_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track31_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track17_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track17_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track17_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track20_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track20_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track20_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track12_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track12_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track12_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track09_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track09_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track09_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track10_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track10_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track10_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track22_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track22_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track22_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track16_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track16_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track16_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track21_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track21_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track21_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track15_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track15_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track15_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track23_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track23_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track23_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track08_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track08_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track08_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track25_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track25_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track25_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track34_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track34_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track34_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track36_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track36_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track36_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track64_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track64_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track64_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track35_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track35_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track35_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track53_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track53_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track53_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track37_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track37_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track37_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track38_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track38_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track38_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track48_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track48_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track48_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track45_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track45_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track45_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track60_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track60_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track60_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track43_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track43_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track43_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track39_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track39_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track39_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track42_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track42_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track42_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track41_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track41_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track41_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track40_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track40_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track40_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track44_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track44_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track44_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track50_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track50_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track50_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track47_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track47_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track47_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track63_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track63_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track63_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track61_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track61_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track61_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track54_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track54_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track54_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track56_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track56_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track56_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track58_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track58_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track58_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track52_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track52_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track52_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track59_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track59_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track59_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track57_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track57_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track57_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track55_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track55_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track55_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track51_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track51_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track51_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track49_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track49_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track49_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track03_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track03_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track03_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track04_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track04_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track04_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track05_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track05_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track05_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track32_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track32_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track32_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track11_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track11_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track11_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track14_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track14_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track14_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track46_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track46_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track46_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track62_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track62_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track62_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track02_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track02_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track02_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Status4_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Status4_T_

typedef struct {
    real_T CAN_TX_AUTO_ALIGN_ANGLE;
    real_T CAN_TX_LR_ONLY_GRATING_LOBE_DET;
    real_T CAN_TX_MR_LR_MODE;
    real_T CAN_TX_PARTIAL_BLOCKAGE;
    real_T CAN_TX_PATH_ID_ACC;
    real_T CAN_TX_PATH_ID_ACC_STAT;
    real_T CAN_TX_PATH_ID_CMBB_MOVE;
    real_T CAN_TX_PATH_ID_CMBB_STAT;
    real_T CAN_TX_PATH_ID_FCW_MOVE;
    real_T CAN_TX_PATH_ID_FCW_STAT;
    real_T CAN_TX_ROLLING_COUNT_3;
    real_T CAN_TX_SIDELOBE_BLOCKAGE;
    real_T CAN_TX_TRUCK_TARGET_DET;
} ESR_Status4_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Track01_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Track01_T_

typedef struct {
    real_T CAN_TX_TRACK_ANGLE;
    real_T CAN_TX_TRACK_BRIDGE_OBJECT;
    real_T CAN_TX_TRACK_GROUPING_CHANGED;
    real_T CAN_TX_TRACK_LAT_RATE;
    real_T CAN_TX_TRACK_MED_RANGE_MODE;
    real_T CAN_TX_TRACK_ONCOMING;
    real_T CAN_TX_TRACK_RANGE;
    real_T CAN_TX_TRACK_RANGE_ACCEL;
    real_T CAN_TX_TRACK_RANGE_RATE;
    real_T CAN_TX_TRACK_ROLLING_COUNT;
    real_T CAN_TX_TRACK_STATUS;
    real_T CAN_TX_TRACK_WIDTH;
} ESR_Track01_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_Status1_T_
#define _DEFINED_TYPEDEF_FOR_ESR_Status1_T_

typedef struct {
    real_T CAN_TX_COMM_ERROR;
    real_T CAN_TX_DSP_TIMESTAMP;
    real_T CAN_TX_RADIUS_CURVATURE_CALC;
    real_T CAN_TX_ROLLING_COUNT_1;
    real_T CAN_TX_SCAN_INDEX;
    real_T CAN_TX_VEHICLE_SPEED_CALC;
    real_T CAN_TX_YAW_RATE_CALC;
} ESR_Status1_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_TrackMotionPower_T_
#define _DEFINED_TYPEDEF_FOR_ESR_TrackMotionPower_T_

typedef struct {
    real_T CAN_TX_TRACK_CAN_ID_GROUP;
    real_T CAN_TX_TRACK_MOVABLE_FAST01;
    real_T CAN_TX_TRACK_MOVABLE_FAST02;
    real_T CAN_TX_TRACK_MOVABLE_FAST03;
    real_T CAN_TX_TRACK_MOVABLE_FAST04;
    real_T CAN_TX_TRACK_MOVABLE_FAST05;
    real_T CAN_TX_TRACK_MOVABLE_FAST06;
    real_T CAN_TX_TRACK_MOVABLE_FAST07;
    real_T CAN_TX_TRACK_MOVABLE_FAST08;
    real_T CAN_TX_TRACK_MOVABLE_FAST09;
    real_T CAN_TX_TRACK_MOVABLE_FAST10;
    real_T CAN_TX_TRACK_MOVABLE_FAST11;
    real_T CAN_TX_TRACK_MOVABLE_FAST12;
    real_T CAN_TX_TRACK_MOVABLE_FAST13;
    real_T CAN_TX_TRACK_MOVABLE_FAST14;
    real_T CAN_TX_TRACK_MOVABLE_FAST15;
    real_T CAN_TX_TRACK_MOVABLE_FAST16;
    real_T CAN_TX_TRACK_MOVABLE_FAST17;
    real_T CAN_TX_TRACK_MOVABLE_FAST18;
    real_T CAN_TX_TRACK_MOVABLE_FAST19;
    real_T CAN_TX_TRACK_MOVABLE_FAST20;
    real_T CAN_TX_TRACK_MOVABLE_FAST21;
    real_T CAN_TX_TRACK_MOVABLE_FAST22;
    real_T CAN_TX_TRACK_MOVABLE_FAST23;
    real_T CAN_TX_TRACK_MOVABLE_FAST24;
    real_T CAN_TX_TRACK_MOVABLE_FAST25;
    real_T CAN_TX_TRACK_MOVABLE_FAST26;
    real_T CAN_TX_TRACK_MOVABLE_FAST27;
    real_T CAN_TX_TRACK_MOVABLE_FAST28;
    real_T CAN_TX_TRACK_MOVABLE_FAST29;
    real_T CAN_TX_TRACK_MOVABLE_FAST30;
    real_T CAN_TX_TRACK_MOVABLE_FAST31;
    real_T CAN_TX_TRACK_MOVABLE_FAST32;
    real_T CAN_TX_TRACK_MOVABLE_FAST33;
    real_T CAN_TX_TRACK_MOVABLE_FAST34;
    real_T CAN_TX_TRACK_MOVABLE_FAST35;
    real_T CAN_TX_TRACK_MOVABLE_FAST36;
    real_T CAN_TX_TRACK_MOVABLE_FAST37;
    real_T CAN_TX_TRACK_MOVABLE_FAST38;
    real_T CAN_TX_TRACK_MOVABLE_FAST39;
    real_T CAN_TX_TRACK_MOVABLE_FAST40;
    real_T CAN_TX_TRACK_MOVABLE_FAST41;
    real_T CAN_TX_TRACK_MOVABLE_FAST42;
    real_T CAN_TX_TRACK_MOVABLE_FAST43;
    real_T CAN_TX_TRACK_MOVABLE_FAST44;
    real_T CAN_TX_TRACK_MOVABLE_FAST45;
    real_T CAN_TX_TRACK_MOVABLE_FAST46;
    real_T CAN_TX_TRACK_MOVABLE_FAST47;
    real_T CAN_TX_TRACK_MOVABLE_FAST48;
    real_T CAN_TX_TRACK_MOVABLE_FAST49;
    real_T CAN_TX_TRACK_MOVABLE_FAST50;
    real_T CAN_TX_TRACK_MOVABLE_FAST51;
    real_T CAN_TX_TRACK_MOVABLE_FAST52;
    real_T CAN_TX_TRACK_MOVABLE_FAST53;
    real_T CAN_TX_TRACK_MOVABLE_FAST54;
    real_T CAN_TX_TRACK_MOVABLE_FAST55;
    real_T CAN_TX_TRACK_MOVABLE_FAST56;
    real_T CAN_TX_TRACK_MOVABLE_FAST57;
    real_T CAN_TX_TRACK_MOVABLE_FAST58;
    real_T CAN_TX_TRACK_MOVABLE_FAST59;
    real_T CAN_TX_TRACK_MOVABLE_FAST60;
    real_T CAN_TX_TRACK_MOVABLE_FAST61;
    real_T CAN_TX_TRACK_MOVABLE_FAST62;
    real_T CAN_TX_TRACK_MOVABLE_FAST63;
    real_T CAN_TX_TRACK_MOVABLE_FAST64;
    real_T CAN_TX_TRACK_MOVABLE_SLOW01;
    real_T CAN_TX_TRACK_MOVABLE_SLOW02;
    real_T CAN_TX_TRACK_MOVABLE_SLOW03;
    real_T CAN_TX_TRACK_MOVABLE_SLOW04;
    real_T CAN_TX_TRACK_MOVABLE_SLOW05;
    real_T CAN_TX_TRACK_MOVABLE_SLOW06;
    real_T CAN_TX_TRACK_MOVABLE_SLOW07;
    real_T CAN_TX_TRACK_MOVABLE_SLOW08;
    real_T CAN_TX_TRACK_MOVABLE_SLOW09;
    real_T CAN_TX_TRACK_MOVABLE_SLOW10;
    real_T CAN_TX_TRACK_MOVABLE_SLOW11;
    real_T CAN_TX_TRACK_MOVABLE_SLOW12;
    real_T CAN_TX_TRACK_MOVABLE_SLOW13;
    real_T CAN_TX_TRACK_MOVABLE_SLOW14;
    real_T CAN_TX_TRACK_MOVABLE_SLOW15;
    real_T CAN_TX_TRACK_MOVABLE_SLOW16;
    real_T CAN_TX_TRACK_MOVABLE_SLOW17;
    real_T CAN_TX_TRACK_MOVABLE_SLOW18;
    real_T CAN_TX_TRACK_MOVABLE_SLOW19;
    real_T CAN_TX_TRACK_MOVABLE_SLOW20;
    real_T CAN_TX_TRACK_MOVABLE_SLOW21;
    real_T CAN_TX_TRACK_MOVABLE_SLOW22;
    real_T CAN_TX_TRACK_MOVABLE_SLOW23;
    real_T CAN_TX_TRACK_MOVABLE_SLOW24;
    real_T CAN_TX_TRACK_MOVABLE_SLOW25;
    real_T CAN_TX_TRACK_MOVABLE_SLOW26;
    real_T CAN_TX_TRACK_MOVABLE_SLOW27;
    real_T CAN_TX_TRACK_MOVABLE_SLOW28;
    real_T CAN_TX_TRACK_MOVABLE_SLOW29;
    real_T CAN_TX_TRACK_MOVABLE_SLOW30;
    real_T CAN_TX_TRACK_MOVABLE_SLOW31;
    real_T CAN_TX_TRACK_MOVABLE_SLOW32;
    real_T CAN_TX_TRACK_MOVABLE_SLOW33;
    real_T CAN_TX_TRACK_MOVABLE_SLOW34;
    real_T CAN_TX_TRACK_MOVABLE_SLOW35;
    real_T CAN_TX_TRACK_MOVABLE_SLOW36;
    real_T CAN_TX_TRACK_MOVABLE_SLOW37;
    real_T CAN_TX_TRACK_MOVABLE_SLOW38;
    real_T CAN_TX_TRACK_MOVABLE_SLOW39;
    real_T CAN_TX_TRACK_MOVABLE_SLOW40;
    real_T CAN_TX_TRACK_MOVABLE_SLOW41;
    real_T CAN_TX_TRACK_MOVABLE_SLOW42;
    real_T CAN_TX_TRACK_MOVABLE_SLOW43;
    real_T CAN_TX_TRACK_MOVABLE_SLOW44;
    real_T CAN_TX_TRACK_MOVABLE_SLOW45;
    real_T CAN_TX_TRACK_MOVABLE_SLOW46;
    real_T CAN_TX_TRACK_MOVABLE_SLOW47;
    real_T CAN_TX_TRACK_MOVABLE_SLOW48;
    real_T CAN_TX_TRACK_MOVABLE_SLOW49;
    real_T CAN_TX_TRACK_MOVABLE_SLOW50;
    real_T CAN_TX_TRACK_MOVABLE_SLOW51;
    real_T CAN_TX_TRACK_MOVABLE_SLOW52;
    real_T CAN_TX_TRACK_MOVABLE_SLOW53;
    real_T CAN_TX_TRACK_MOVABLE_SLOW54;
    real_T CAN_TX_TRACK_MOVABLE_SLOW55;
    real_T CAN_TX_TRACK_MOVABLE_SLOW56;
    real_T CAN_TX_TRACK_MOVABLE_SLOW57;
    real_T CAN_TX_TRACK_MOVABLE_SLOW58;
    real_T CAN_TX_TRACK_MOVABLE_SLOW59;
    real_T CAN_TX_TRACK_MOVABLE_SLOW60;
    real_T CAN_TX_TRACK_MOVABLE_SLOW61;
    real_T CAN_TX_TRACK_MOVABLE_SLOW62;
    real_T CAN_TX_TRACK_MOVABLE_SLOW63;
    real_T CAN_TX_TRACK_MOVABLE_SLOW64;
    real_T CAN_TX_TRACK_MOVING01;
    real_T CAN_TX_TRACK_MOVING02;
    real_T CAN_TX_TRACK_MOVING03;
    real_T CAN_TX_TRACK_MOVING04;
    real_T CAN_TX_TRACK_MOVING05;
    real_T CAN_TX_TRACK_MOVING06;
    real_T CAN_TX_TRACK_MOVING07;
    real_T CAN_TX_TRACK_MOVING08;
    real_T CAN_TX_TRACK_MOVING09;
    real_T CAN_TX_TRACK_MOVING10;
    real_T CAN_TX_TRACK_MOVING11;
    real_T CAN_TX_TRACK_MOVING12;
    real_T CAN_TX_TRACK_MOVING13;
    real_T CAN_TX_TRACK_MOVING14;
    real_T CAN_TX_TRACK_MOVING15;
    real_T CAN_TX_TRACK_MOVING16;
    real_T CAN_TX_TRACK_MOVING17;
    real_T CAN_TX_TRACK_MOVING18;
    real_T CAN_TX_TRACK_MOVING19;
    real_T CAN_TX_TRACK_MOVING20;
    real_T CAN_TX_TRACK_MOVING21;
    real_T CAN_TX_TRACK_MOVING22;
    real_T CAN_TX_TRACK_MOVING23;
    real_T CAN_TX_TRACK_MOVING24;
    real_T CAN_TX_TRACK_MOVING25;
    real_T CAN_TX_TRACK_MOVING26;
    real_T CAN_TX_TRACK_MOVING27;
    real_T CAN_TX_TRACK_MOVING28;
    real_T CAN_TX_TRACK_MOVING29;
    real_T CAN_TX_TRACK_MOVING30;
    real_T CAN_TX_TRACK_MOVING31;
    real_T CAN_TX_TRACK_MOVING32;
    real_T CAN_TX_TRACK_MOVING33;
    real_T CAN_TX_TRACK_MOVING34;
    real_T CAN_TX_TRACK_MOVING35;
    real_T CAN_TX_TRACK_MOVING36;
    real_T CAN_TX_TRACK_MOVING37;
    real_T CAN_TX_TRACK_MOVING38;
    real_T CAN_TX_TRACK_MOVING39;
    real_T CAN_TX_TRACK_MOVING40;
    real_T CAN_TX_TRACK_MOVING41;
    real_T CAN_TX_TRACK_MOVING42;
    real_T CAN_TX_TRACK_MOVING43;
    real_T CAN_TX_TRACK_MOVING44;
    real_T CAN_TX_TRACK_MOVING45;
    real_T CAN_TX_TRACK_MOVING46;
    real_T CAN_TX_TRACK_MOVING47;
    real_T CAN_TX_TRACK_MOVING48;
    real_T CAN_TX_TRACK_MOVING49;
    real_T CAN_TX_TRACK_MOVING50;
    real_T CAN_TX_TRACK_MOVING51;
    real_T CAN_TX_TRACK_MOVING52;
    real_T CAN_TX_TRACK_MOVING53;
    real_T CAN_TX_TRACK_MOVING54;
    real_T CAN_TX_TRACK_MOVING55;
    real_T CAN_TX_TRACK_MOVING56;
    real_T CAN_TX_TRACK_MOVING57;
    real_T CAN_TX_TRACK_MOVING58;
    real_T CAN_TX_TRACK_MOVING59;
    real_T CAN_TX_TRACK_MOVING60;
    real_T CAN_TX_TRACK_MOVING61;
    real_T CAN_TX_TRACK_MOVING62;
    real_T CAN_TX_TRACK_MOVING63;
    real_T CAN_TX_TRACK_MOVING64;
    real_T CAN_TX_TRACK_POWER01;
    real_T CAN_TX_TRACK_POWER02;
    real_T CAN_TX_TRACK_POWER03;
    real_T CAN_TX_TRACK_POWER04;
    real_T CAN_TX_TRACK_POWER05;
    real_T CAN_TX_TRACK_POWER06;
    real_T CAN_TX_TRACK_POWER07;
    real_T CAN_TX_TRACK_POWER08;
    real_T CAN_TX_TRACK_POWER09;
    real_T CAN_TX_TRACK_POWER10;
    real_T CAN_TX_TRACK_POWER11;
    real_T CAN_TX_TRACK_POWER12;
    real_T CAN_TX_TRACK_POWER13;
    real_T CAN_TX_TRACK_POWER14;
    real_T CAN_TX_TRACK_POWER15;
    real_T CAN_TX_TRACK_POWER16;
    real_T CAN_TX_TRACK_POWER17;
    real_T CAN_TX_TRACK_POWER18;
    real_T CAN_TX_TRACK_POWER19;
    real_T CAN_TX_TRACK_POWER20;
    real_T CAN_TX_TRACK_POWER21;
    real_T CAN_TX_TRACK_POWER22;
    real_T CAN_TX_TRACK_POWER23;
    real_T CAN_TX_TRACK_POWER24;
    real_T CAN_TX_TRACK_POWER25;
    real_T CAN_TX_TRACK_POWER26;
    real_T CAN_TX_TRACK_POWER27;
    real_T CAN_TX_TRACK_POWER28;
    real_T CAN_TX_TRACK_POWER29;
    real_T CAN_TX_TRACK_POWER30;
    real_T CAN_TX_TRACK_POWER31;
    real_T CAN_TX_TRACK_POWER32;
    real_T CAN_TX_TRACK_POWER33;
    real_T CAN_TX_TRACK_POWER34;
    real_T CAN_TX_TRACK_POWER35;
    real_T CAN_TX_TRACK_POWER36;
    real_T CAN_TX_TRACK_POWER37;
    real_T CAN_TX_TRACK_POWER38;
    real_T CAN_TX_TRACK_POWER39;
    real_T CAN_TX_TRACK_POWER40;
    real_T CAN_TX_TRACK_POWER41;
    real_T CAN_TX_TRACK_POWER42;
    real_T CAN_TX_TRACK_POWER43;
    real_T CAN_TX_TRACK_POWER44;
    real_T CAN_TX_TRACK_POWER45;
    real_T CAN_TX_TRACK_POWER46;
    real_T CAN_TX_TRACK_POWER47;
    real_T CAN_TX_TRACK_POWER48;
    real_T CAN_TX_TRACK_POWER49;
    real_T CAN_TX_TRACK_POWER50;
    real_T CAN_TX_TRACK_POWER51;
    real_T CAN_TX_TRACK_POWER52;
    real_T CAN_TX_TRACK_POWER53;
    real_T CAN_TX_TRACK_POWER54;
    real_T CAN_TX_TRACK_POWER55;
    real_T CAN_TX_TRACK_POWER56;
    real_T CAN_TX_TRACK_POWER57;
    real_T CAN_TX_TRACK_POWER58;
    real_T CAN_TX_TRACK_POWER59;
    real_T CAN_TX_TRACK_POWER60;
    real_T CAN_TX_TRACK_POWER61;
    real_T CAN_TX_TRACK_POWER62;
    real_T CAN_TX_TRACK_POWER63;
    real_T CAN_TX_TRACK_POWER64;
    real_T CAN_TX_TRACK_ROLLING_COUNT_2;
} ESR_TrackMotionPower_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ESR_in_T_
#define _DEFINED_TYPEDEF_FOR_ESR_in_T_

typedef struct {
    ESR_Track06_T ESR_Track06;
    ESR_Track07_T ESR_Track07;
    ESR_Track33_T ESR_Track33;
    ESR_Track28_T ESR_Track28;
    ESR_Track29_T ESR_Track29;
    ESR_Track24_T ESR_Track24;
    ESR_Track19_T ESR_Track19;
    ESR_Track27_T ESR_Track27;
    ESR_Track30_T ESR_Track30;
    ESR_Track13_T ESR_Track13;
    ESR_Track18_T ESR_Track18;
    ESR_Track26_T ESR_Track26;
    ESR_Track31_T ESR_Track31;
    ESR_Track17_T ESR_Track17;
    ESR_Track20_T ESR_Track20;
    ESR_Track12_T ESR_Track12;
    ESR_Track09_T ESR_Track09;
    ESR_Track10_T ESR_Track10;
    ESR_Track22_T ESR_Track22;
    ESR_Track16_T ESR_Track16;
    ESR_Track21_T ESR_Track21;
    ESR_Track15_T ESR_Track15;
    ESR_Track23_T ESR_Track23;
    ESR_Track08_T ESR_Track08;
    ESR_Track25_T ESR_Track25;
    ESR_Track34_T ESR_Track34;
    ESR_Track36_T ESR_Track36;
    ESR_Track64_T ESR_Track64;
    ESR_Track35_T ESR_Track35;
    ESR_Track53_T ESR_Track53;
    ESR_Track37_T ESR_Track37;
    ESR_Track38_T ESR_Track38;
    ESR_Track48_T ESR_Track48;
    ESR_Track45_T ESR_Track45;
    ESR_Track60_T ESR_Track60;
    ESR_Track43_T ESR_Track43;
    ESR_Track39_T ESR_Track39;
    ESR_Track42_T ESR_Track42;
    ESR_Track41_T ESR_Track41;
    ESR_Track40_T ESR_Track40;
    ESR_Track44_T ESR_Track44;
    ESR_Track50_T ESR_Track50;
    ESR_Track47_T ESR_Track47;
    ESR_Track63_T ESR_Track63;
    ESR_Track61_T ESR_Track61;
    ESR_Track54_T ESR_Track54;
    ESR_Track56_T ESR_Track56;
    ESR_Track58_T ESR_Track58;
    ESR_Track52_T ESR_Track52;
    ESR_Track59_T ESR_Track59;
    ESR_Track57_T ESR_Track57;
    ESR_Track55_T ESR_Track55;
    ESR_Track51_T ESR_Track51;
    ESR_Track49_T ESR_Track49;
    ESR_Track03_T ESR_Track03;
    ESR_Track04_T ESR_Track04;
    ESR_Track05_T ESR_Track05;
    ESR_Track32_T ESR_Track32;
    ESR_Track11_T ESR_Track11;
    ESR_Track14_T ESR_Track14;
    ESR_Track46_T ESR_Track46;
    ESR_Track62_T ESR_Track62;
    ESR_Track02_T ESR_Track02;
    ESR_Status4_T ESR_Status4;
    ESR_Track01_T ESR_Track01;
    ESR_Status1_T ESR_Status1;
    ESR_TrackMotionPower_T ESR_TrackMotionPower;
} ESR_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj00_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj00_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj00_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj00_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj00_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj00_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj01_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj01_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj01_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj01_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj01_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj01_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj02_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj02_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj02_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj02_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj02_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj02_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj03_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj03_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj03_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj03_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj03_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj03_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj04_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj04_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj04_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj04_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj04_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj04_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj05_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj05_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj05_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj05_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj05_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj05_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj06_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj06_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj06_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj06_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj06_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj06_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj07_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj07_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj07_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj07_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj07_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj07_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj08_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj08_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj08_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj08_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj08_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj08_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj09_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj09_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj09_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj09_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj09_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj09_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj10_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj10_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj10_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj10_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj10_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj10_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj11_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj11_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj11_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj11_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj11_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj11_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj12_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj12_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj12_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj12_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj12_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj12_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj13_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj13_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj13_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj13_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj13_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj13_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj14_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj14_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj14_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj14_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj14_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj14_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj15_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj15_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj15_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj15_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj15_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj15_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj16_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj16_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj16_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj16_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj16_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj16_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj17_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj17_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj17_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj17_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj17_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj17_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj18_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj18_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj18_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj18_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj18_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj18_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj19_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj19_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj19_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj19_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj19_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj19_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj20_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj20_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj20_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj20_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj20_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj20_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj21_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj21_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj21_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj21_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj21_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj21_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj22_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj22_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj22_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj22_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj22_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj22_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj23_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj23_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj23_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj23_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj23_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj23_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj24_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj24_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj24_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj24_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj24_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj24_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj25_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj25_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj25_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj25_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj25_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj25_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj26_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj26_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj26_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj26_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj26_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj26_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj27_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj27_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj27_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj27_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj27_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj27_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj28_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj28_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj28_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj28_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj28_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj28_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj29_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj29_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj29_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj29_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj29_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj29_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj30_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj30_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj30_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj30_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj30_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj30_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj31_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj31_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Obj31_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Obj31_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Obj31_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T ObjClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Obj31_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Target00_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Target00_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Target00_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Target00_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Target00_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T TgtClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Target00_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Target01_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Target01_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Target01_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Target01_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Target01_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T TgtClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Target01_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Target02_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Target02_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Target02_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Target02_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Target02_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T TgtClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Target02_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Target03_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Target03_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Target03_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Target03_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Target03_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T TgtClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Target03_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Target04_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Target04_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Target04_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Target04_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Target04_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T TgtClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Target04_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Target05_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Target05_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FC_Target05_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Target05_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Target05_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T TgtClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FC_Target05_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Object_Ender_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Object_Ender_T_

typedef struct {
    real_T RAD_FC_MessEnderConsistBit;
    real_T RAD_FC_Object_Ender_CRC;
    real_T RAD_FC_TCCounter;
    real_T RAD_FC_timestamp;
} RAD_FC_Object_Ender_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Object_Starter_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Object_Starter_T_

typedef struct {
    real_T RAD_FC_MessStarterConsistBit;
    real_T RAD_FC_Veh_aEgo;
    real_T RAD_FC_Veh_psiDt;
    real_T RAD_FC_Veh_slipAngle;
    real_T RAD_FC_Veh_vEgo;
} RAD_FC_Object_Starter_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FC_Status_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FC_Status_T_

typedef struct {
    real_T RAD_FC_Stat_AbsorptionBlindness;
    real_T RAD_FC_Stat_DistortionBlindness;
    real_T RAD_FC_Stat_HWFail;
    real_T RAD_FC_Stat_H_Misalignment;
    real_T RAD_FC_Stat_ITCInfo;
    real_T RAD_FC_Stat_SGUFail;
    real_T RAD_FC_Status_CRC;
    real_T RAD_FC_Status_MsgCntr;
} RAD_FC_Status_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_MRRevo_in_T_
#define _DEFINED_TYPEDEF_FOR_MRRevo_in_T_

typedef struct {
    RAD_FC_Obj00_A_T RAD_FC_Obj00_A;
    RAD_FC_Obj00_B_T RAD_FC_Obj00_B;
    RAD_FC_Obj01_A_T RAD_FC_Obj01_A;
    RAD_FC_Obj01_B_T RAD_FC_Obj01_B;
    RAD_FC_Obj02_A_T RAD_FC_Obj02_A;
    RAD_FC_Obj02_B_T RAD_FC_Obj02_B;
    RAD_FC_Obj03_A_T RAD_FC_Obj03_A;
    RAD_FC_Obj03_B_T RAD_FC_Obj03_B;
    RAD_FC_Obj04_A_T RAD_FC_Obj04_A;
    RAD_FC_Obj04_B_T RAD_FC_Obj04_B;
    RAD_FC_Obj05_A_T RAD_FC_Obj05_A;
    RAD_FC_Obj05_B_T RAD_FC_Obj05_B;
    RAD_FC_Obj06_A_T RAD_FC_Obj06_A;
    RAD_FC_Obj06_B_T RAD_FC_Obj06_B;
    RAD_FC_Obj07_A_T RAD_FC_Obj07_A;
    RAD_FC_Obj07_B_T RAD_FC_Obj07_B;
    RAD_FC_Obj08_A_T RAD_FC_Obj08_A;
    RAD_FC_Obj08_B_T RAD_FC_Obj08_B;
    RAD_FC_Obj09_A_T RAD_FC_Obj09_A;
    RAD_FC_Obj09_B_T RAD_FC_Obj09_B;
    RAD_FC_Obj10_A_T RAD_FC_Obj10_A;
    RAD_FC_Obj10_B_T RAD_FC_Obj10_B;
    RAD_FC_Obj11_A_T RAD_FC_Obj11_A;
    RAD_FC_Obj11_B_T RAD_FC_Obj11_B;
    RAD_FC_Obj12_A_T RAD_FC_Obj12_A;
    RAD_FC_Obj12_B_T RAD_FC_Obj12_B;
    RAD_FC_Obj13_A_T RAD_FC_Obj13_A;
    RAD_FC_Obj13_B_T RAD_FC_Obj13_B;
    RAD_FC_Obj14_A_T RAD_FC_Obj14_A;
    RAD_FC_Obj14_B_T RAD_FC_Obj14_B;
    RAD_FC_Obj15_A_T RAD_FC_Obj15_A;
    RAD_FC_Obj15_B_T RAD_FC_Obj15_B;
    RAD_FC_Obj16_A_T RAD_FC_Obj16_A;
    RAD_FC_Obj16_B_T RAD_FC_Obj16_B;
    RAD_FC_Obj17_A_T RAD_FC_Obj17_A;
    RAD_FC_Obj17_B_T RAD_FC_Obj17_B;
    RAD_FC_Obj18_A_T RAD_FC_Obj18_A;
    RAD_FC_Obj18_B_T RAD_FC_Obj18_B;
    RAD_FC_Obj19_A_T RAD_FC_Obj19_A;
    RAD_FC_Obj19_B_T RAD_FC_Obj19_B;
    RAD_FC_Obj20_A_T RAD_FC_Obj20_A;
    RAD_FC_Obj20_B_T RAD_FC_Obj20_B;
    RAD_FC_Obj21_A_T RAD_FC_Obj21_A;
    RAD_FC_Obj21_B_T RAD_FC_Obj21_B;
    RAD_FC_Obj22_A_T RAD_FC_Obj22_A;
    RAD_FC_Obj22_B_T RAD_FC_Obj22_B;
    RAD_FC_Obj23_A_T RAD_FC_Obj23_A;
    RAD_FC_Obj23_B_T RAD_FC_Obj23_B;
    RAD_FC_Obj24_A_T RAD_FC_Obj24_A;
    RAD_FC_Obj24_B_T RAD_FC_Obj24_B;
    RAD_FC_Obj25_A_T RAD_FC_Obj25_A;
    RAD_FC_Obj25_B_T RAD_FC_Obj25_B;
    RAD_FC_Obj26_A_T RAD_FC_Obj26_A;
    RAD_FC_Obj26_B_T RAD_FC_Obj26_B;
    RAD_FC_Obj27_A_T RAD_FC_Obj27_A;
    RAD_FC_Obj27_B_T RAD_FC_Obj27_B;
    RAD_FC_Obj28_A_T RAD_FC_Obj28_A;
    RAD_FC_Obj28_B_T RAD_FC_Obj28_B;
    RAD_FC_Obj29_A_T RAD_FC_Obj29_A;
    RAD_FC_Obj29_B_T RAD_FC_Obj29_B;
    RAD_FC_Obj30_A_T RAD_FC_Obj30_A;
    RAD_FC_Obj30_B_T RAD_FC_Obj30_B;
    RAD_FC_Obj31_A_T RAD_FC_Obj31_A;
    RAD_FC_Obj31_B_T RAD_FC_Obj31_B;
    RAD_FC_Target00_A_T RAD_FC_Target00_A;
    RAD_FC_Target00_B_T RAD_FC_Target00_B;
    RAD_FC_Target01_A_T RAD_FC_Target01_A;
    RAD_FC_Target01_B_T RAD_FC_Target01_B;
    RAD_FC_Target02_A_T RAD_FC_Target02_A;
    RAD_FC_Target02_B_T RAD_FC_Target02_B;
    RAD_FC_Target03_A_T RAD_FC_Target03_A;
    RAD_FC_Target03_B_T RAD_FC_Target03_B;
    RAD_FC_Target04_A_T RAD_FC_Target04_A;
    RAD_FC_Target04_B_T RAD_FC_Target04_B;
    RAD_FC_Target05_A_T RAD_FC_Target05_A;
    RAD_FC_Target05_B_T RAD_FC_Target05_B;
    RAD_FC_Object_Ender_T RAD_FC_Object_Ender;
    RAD_FC_Object_Starter_T RAD_FC_Object_Starter;
    RAD_FC_Status_T RAD_FC_Status;
} MRRevo_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FS_Header_T_
#define _DEFINED_TYPEDEF_FOR_FS_Header_T_

typedef struct {
    real_T protocol_version;
    real_T reserved_bits;
} FS_Header_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FS_Types_message4_T_
#define _DEFINED_TYPEDEF_FOR_FS_Types_message4_T_

typedef struct {
    real_T FS_Type_Point64;
} FS_Types_message4_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FS_Types_message3_T_
#define _DEFINED_TYPEDEF_FOR_FS_Types_message3_T_

typedef struct {
    real_T FS_Type_Point43;
    real_T FS_Type_Point44;
    real_T FS_Type_Point45;
    real_T FS_Type_Point46;
    real_T FS_Type_Point47;
    real_T FS_Type_Point48;
    real_T FS_Type_Point49;
    real_T FS_Type_Point50;
    real_T FS_Type_Point51;
    real_T FS_Type_Point52;
    real_T FS_Type_Point53;
    real_T FS_Type_Point54;
    real_T FS_Type_Point55;
    real_T FS_Type_Point56;
    real_T FS_Type_Point57;
    real_T FS_Type_Point58;
    real_T FS_Type_Point59;
    real_T FS_Type_Point60;
    real_T FS_Type_Point61;
    real_T FS_Type_Point62;
    real_T FS_Type_Point63;
} FS_Types_message3_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FS_Types_message2_T_
#define _DEFINED_TYPEDEF_FOR_FS_Types_message2_T_

typedef struct {
    real_T FS_Type_Point22;
    real_T FS_Type_Point23;
    real_T FS_Type_Point24;
    real_T FS_Type_Point25;
    real_T FS_Type_Point26;
    real_T FS_Type_Point27;
    real_T FS_Type_Point28;
    real_T FS_Type_Point29;
    real_T FS_Type_Point30;
    real_T FS_Type_Point31;
    real_T FS_Type_Point32;
    real_T FS_Type_Point33;
    real_T FS_Type_Point34;
    real_T FS_Type_Point35;
    real_T FS_Type_Point36;
    real_T FS_Type_Point37;
    real_T FS_Type_Point38;
    real_T FS_Type_Point39;
    real_T FS_Type_Point40;
    real_T FS_Type_Point41;
    real_T FS_Type_Point42;
} FS_Types_message2_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FS_Types_message1_T_
#define _DEFINED_TYPEDEF_FOR_FS_Types_message1_T_

typedef struct {
    real_T FS_Type_Point1;
    real_T FS_Type_Point10;
    real_T FS_Type_Point11;
    real_T FS_Type_Point12;
    real_T FS_Type_Point13;
    real_T FS_Type_Point14;
    real_T FS_Type_Point15;
    real_T FS_Type_Point16;
    real_T FS_Type_Point17;
    real_T FS_Type_Point18;
    real_T FS_Type_Point19;
    real_T FS_Type_Point2;
    real_T FS_Type_Point20;
    real_T FS_Type_Point21;
    real_T FS_Type_Point3;
    real_T FS_Type_Point4;
    real_T FS_Type_Point5;
    real_T FS_Type_Point6;
    real_T FS_Type_Point7;
    real_T FS_Type_Point8;
    real_T FS_Type_Point9;
} FS_Types_message1_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FS_Points_message22_T_
#define _DEFINED_TYPEDEF_FOR_FS_Points_message22_T_

typedef struct {
    real_T FS_lateral64;
    real_T FS_longitudinal64;
} FS_Points_message22_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FS_Points_message21_T_
#define _DEFINED_TYPEDEF_FOR_FS_Points_message21_T_

typedef struct {
    real_T FS_lateral61;
    real_T FS_lateral62;
    real_T FS_lateral63;
    real_T FS_longitudinal61;
    real_T FS_longitudinal62;
    real_T FS_longitudinal63;
} FS_Points_message21_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FS_Points_message20_T_
#define _DEFINED_TYPEDEF_FOR_FS_Points_message20_T_

typedef struct {
    real_T FS_lateral58;
    real_T FS_lateral59;
    real_T FS_lateral60;
    real_T FS_longitudinal58;
    real_T FS_longitudinal59;
    real_T FS_longitudinal60;
} FS_Points_message20_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FS_Points_message19_T_
#define _DEFINED_TYPEDEF_FOR_FS_Points_message19_T_

typedef struct {
    real_T FS_lateral55;
    real_T FS_lateral56;
    real_T FS_lateral57;
    real_T FS_longitudinal55;
    real_T FS_longitudinal56;
    real_T FS_longitudinal57;
} FS_Points_message19_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FS_Points_message18_T_
#define _DEFINED_TYPEDEF_FOR_FS_Points_message18_T_

typedef struct {
    real_T FS_lateral52;
    real_T FS_lateral53;
    real_T FS_lateral54;
    real_T FS_longitudinal52;
    real_T FS_longitudinal53;
    real_T FS_longitudinal54;
} FS_Points_message18_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FS_Points_message17_T_
#define _DEFINED_TYPEDEF_FOR_FS_Points_message17_T_

typedef struct {
    real_T FS_lateral49;
    real_T FS_lateral50;
    real_T FS_lateral51;
    real_T FS_longitudinal49;
    real_T FS_longitudinal50;
    real_T FS_longitudinal51;
} FS_Points_message17_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FS_Points_message16_T_
#define _DEFINED_TYPEDEF_FOR_FS_Points_message16_T_

typedef struct {
    real_T FS_lateral46;
    real_T FS_lateral47;
    real_T FS_lateral48;
    real_T FS_longitudinal46;
    real_T FS_longitudinal47;
    real_T FS_longitudinal48;
} FS_Points_message16_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FS_Points_message15_T_
#define _DEFINED_TYPEDEF_FOR_FS_Points_message15_T_

typedef struct {
    real_T FS_lateral43;
    real_T FS_lateral44;
    real_T FS_lateral45;
    real_T FS_longitudinal43;
    real_T FS_longitudinal44;
    real_T FS_longitudinal45;
} FS_Points_message15_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FS_Points_message14_T_
#define _DEFINED_TYPEDEF_FOR_FS_Points_message14_T_

typedef struct {
    real_T FS_lateral40;
    real_T FS_lateral41;
    real_T FS_lateral42;
    real_T FS_longitudinal40;
    real_T FS_longitudinal41;
    real_T FS_longitudinal42;
} FS_Points_message14_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FS_Points_message13_T_
#define _DEFINED_TYPEDEF_FOR_FS_Points_message13_T_

typedef struct {
    real_T FS_lateral37;
    real_T FS_lateral38;
    real_T FS_lateral39;
    real_T FS_longitudinal37;
    real_T FS_longitudinal38;
    real_T FS_longitudinal39;
} FS_Points_message13_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FS_Points_message12_T_
#define _DEFINED_TYPEDEF_FOR_FS_Points_message12_T_

typedef struct {
    real_T FS_lateral34;
    real_T FS_lateral35;
    real_T FS_lateral36;
    real_T FS_longitudinal34;
    real_T FS_longitudinal35;
    real_T FS_longitudinal36;
} FS_Points_message12_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FS_Points_message11_T_
#define _DEFINED_TYPEDEF_FOR_FS_Points_message11_T_

typedef struct {
    real_T FS_lateral31;
    real_T FS_lateral32;
    real_T FS_lateral33;
    real_T FS_longitudinal31;
    real_T FS_longitudinal32;
    real_T FS_longitudinal33;
} FS_Points_message11_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FS_Points_message10_T_
#define _DEFINED_TYPEDEF_FOR_FS_Points_message10_T_

typedef struct {
    real_T FS_lateral28;
    real_T FS_lateral29;
    real_T FS_lateral30;
    real_T FS_longitudinal28;
    real_T FS_longitudinal29;
    real_T FS_longitudinal30;
} FS_Points_message10_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FS_Points_message9_T_
#define _DEFINED_TYPEDEF_FOR_FS_Points_message9_T_

typedef struct {
    real_T FS_lateral25;
    real_T FS_lateral26;
    real_T FS_lateral27;
    real_T FS_longitudinal25;
    real_T FS_longitudinal26;
    real_T FS_longitudinal27;
} FS_Points_message9_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FS_Points_message8_T_
#define _DEFINED_TYPEDEF_FOR_FS_Points_message8_T_

typedef struct {
    real_T FS_lateral22;
    real_T FS_lateral23;
    real_T FS_lateral24;
    real_T FS_longitudinal22;
    real_T FS_longitudinal23;
    real_T FS_longitudinal24;
} FS_Points_message8_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FS_Points_message7_T_
#define _DEFINED_TYPEDEF_FOR_FS_Points_message7_T_

typedef struct {
    real_T FS_lateral19;
    real_T FS_lateral20;
    real_T FS_lateral21;
    real_T FS_longitudinal19;
    real_T FS_longitudinal20;
    real_T FS_longitudinal21;
} FS_Points_message7_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FS_Points_message6_T_
#define _DEFINED_TYPEDEF_FOR_FS_Points_message6_T_

typedef struct {
    real_T FS_lateral16;
    real_T FS_lateral17;
    real_T FS_lateral18;
    real_T FS_longitudinal16;
    real_T FS_longitudinal17;
    real_T FS_longitudinal18;
} FS_Points_message6_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FS_Points_message5_T_
#define _DEFINED_TYPEDEF_FOR_FS_Points_message5_T_

typedef struct {
    real_T FS_lateral13;
    real_T FS_lateral14;
    real_T FS_lateral15;
    real_T FS_longitudinal13;
    real_T FS_longitudinal14;
    real_T FS_longitudinal15;
} FS_Points_message5_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FS_Points_message4_T_
#define _DEFINED_TYPEDEF_FOR_FS_Points_message4_T_

typedef struct {
    real_T FS_lateral10;
    real_T FS_lateral11;
    real_T FS_lateral12;
    real_T FS_longitudinal10;
    real_T FS_longitudinal11;
    real_T FS_longitudinal12;
} FS_Points_message4_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FS_Points_message3_T_
#define _DEFINED_TYPEDEF_FOR_FS_Points_message3_T_

typedef struct {
    real_T FS_lateral7;
    real_T FS_lateral8;
    real_T FS_lateral9;
    real_T FS_longitudinal7;
    real_T FS_longitudinal8;
    real_T FS_longitudinal9;
} FS_Points_message3_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FS_Points_message2_T_
#define _DEFINED_TYPEDEF_FOR_FS_Points_message2_T_

typedef struct {
    real_T FS_lateral4;
    real_T FS_lateral5;
    real_T FS_lateral6;
    real_T FS_longitudinal4;
    real_T FS_longitudinal5;
    real_T FS_longitudinal6;
} FS_Points_message2_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FS_Points_message1_T_
#define _DEFINED_TYPEDEF_FOR_FS_Points_message1_T_

typedef struct {
    real_T FS_lateral1;
    real_T FS_lateral2;
    real_T FS_lateral3;
    real_T FS_longitudinal1;
    real_T FS_longitudinal2;
    real_T FS_longitudinal3;
} FS_Points_message1_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_meFreeSpaceRWC3_T_
#define _DEFINED_TYPEDEF_FOR_meFreeSpaceRWC3_T_

typedef struct {
    FS_Header_T FS_Header;
    FS_Types_message4_T FS_Types_message4;
    FS_Types_message3_T FS_Types_message3;
    FS_Types_message2_T FS_Types_message2;
    FS_Types_message1_T FS_Types_message1;
    FS_Points_message22_T FS_Points_message22;
    FS_Points_message21_T FS_Points_message21;
    FS_Points_message20_T FS_Points_message20;
    FS_Points_message19_T FS_Points_message19;
    FS_Points_message18_T FS_Points_message18;
    FS_Points_message17_T FS_Points_message17;
    FS_Points_message16_T FS_Points_message16;
    FS_Points_message15_T FS_Points_message15;
    FS_Points_message14_T FS_Points_message14;
    FS_Points_message13_T FS_Points_message13;
    FS_Points_message12_T FS_Points_message12;
    FS_Points_message11_T FS_Points_message11;
    FS_Points_message10_T FS_Points_message10;
    FS_Points_message9_T FS_Points_message9;
    FS_Points_message8_T FS_Points_message8;
    FS_Points_message7_T FS_Points_message7;
    FS_Points_message6_T FS_Points_message6;
    FS_Points_message5_T FS_Points_message5;
    FS_Points_message4_T FS_Points_message4;
    FS_Points_message3_T FS_Points_message3;
    FS_Points_message2_T FS_Points_message2;
    FS_Points_message1_T FS_Points_message1;
} meFreeSpaceRWC3_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataC3_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataC3_T_

typedef struct {
    real_T Object_Accel_X;
    real_T ObstacleAngle;
    real_T ObstacleAngleRate;
    real_T ObstacleReplaced;
    real_T ObstacleVelY;
    real_T reserved_2;
    real_T reserved_3;
    real_T reserved_5;
} ObstacleDataC3_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataC10_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataC10_T_

typedef struct {
    real_T Object_Accel_X;
    real_T ObstacleAngle;
    real_T ObstacleAngleRate;
    real_T ObstacleReplaced;
    real_T ObstacleVelY;
    real_T reserved_2;
    real_T reserved_3;
    real_T reserved_5;
} ObstacleDataC10_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataC9_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataC9_T_

typedef struct {
    real_T Object_Accel_X;
    real_T ObstacleAngle;
    real_T ObstacleAngleRate;
    real_T ObstacleReplaced;
    real_T ObstacleVelY;
    real_T reserved_2;
    real_T reserved_3;
    real_T reserved_5;
} ObstacleDataC9_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataC8_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataC8_T_

typedef struct {
    real_T Object_Accel_X;
    real_T ObstacleAngle;
    real_T ObstacleAngleRate;
    real_T ObstacleReplaced;
    real_T ObstacleVelY;
    real_T reserved_2;
    real_T reserved_3;
    real_T reserved_5;
} ObstacleDataC8_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataC7_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataC7_T_

typedef struct {
    real_T Object_Accel_X;
    real_T ObstacleAngle;
    real_T ObstacleAngleRate;
    real_T ObstacleReplaced;
    real_T ObstacleVelY;
    real_T reserved_2;
    real_T reserved_3;
    real_T reserved_5;
} ObstacleDataC7_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataC6_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataC6_T_

typedef struct {
    real_T Object_Accel_X;
    real_T ObstacleAngle;
    real_T ObstacleAngleRate;
    real_T ObstacleReplaced;
    real_T ObstacleVelY;
    real_T reserved_2;
    real_T reserved_3;
    real_T reserved_5;
} ObstacleDataC6_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataC5_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataC5_T_

typedef struct {
    real_T Object_Accel_X;
    real_T ObstacleAngle;
    real_T ObstacleAngleRate;
    real_T ObstacleReplaced;
    real_T ObstacleVelY;
    real_T reserved_2;
    real_T reserved_3;
    real_T reserved_5;
} ObstacleDataC5_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataC4_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataC4_T_

typedef struct {
    real_T Object_Accel_X;
    real_T ObstacleAngle;
    real_T ObstacleAngleRate;
    real_T ObstacleReplaced;
    real_T ObstacleVelY;
    real_T reserved_2;
    real_T reserved_3;
    real_T reserved_5;
} ObstacleDataC4_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataC2_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataC2_T_

typedef struct {
    real_T Object_Accel_X;
    real_T ObstacleAngle;
    real_T ObstacleAngleRate;
    real_T ObstacleReplaced;
    real_T ObstacleVelY;
    real_T reserved_2;
    real_T reserved_3;
    real_T reserved_5;
} ObstacleDataC2_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataB5_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataB5_T_

typedef struct {
    real_T CIPVFlag;
    real_T MatchedRadarID;
    real_T ObstacleAge;
    real_T ObstacleLane;
    real_T ObstacleLength;
    real_T ObstacleWidth;
    real_T RadarMatchConfidence;
    real_T RadarPosX;
    real_T RadarVelX;
    real_T reserved_1;
    real_T reserved_1_b;
    real_T reserved_1_c;
} ObstacleDataB5_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataB6_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataB6_T_

typedef struct {
    real_T CIPVFlag;
    real_T MatchedRadarID;
    real_T ObstacleAge;
    real_T ObstacleLane;
    real_T ObstacleLength;
    real_T ObstacleWidth;
    real_T RadarMatchConfidence;
    real_T RadarPosX;
    real_T RadarVelX;
    real_T reserved_1;
    real_T reserved_1_b;
    real_T reserved_1_c;
} ObstacleDataB6_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataB7_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataB7_T_

typedef struct {
    real_T CIPVFlag;
    real_T MatchedRadarID;
    real_T ObstacleAge;
    real_T ObstacleLane;
    real_T ObstacleLength;
    real_T ObstacleWidth;
    real_T RadarMatchConfidence;
    real_T RadarPosX;
    real_T RadarVelX;
    real_T reserved_1;
    real_T reserved_1_b;
    real_T reserved_1_c;
} ObstacleDataB7_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataB8_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataB8_T_

typedef struct {
    real_T CIPVFlag;
    real_T MatchedRadarID;
    real_T ObstacleAge;
    real_T ObstacleLane;
    real_T ObstacleLength;
    real_T ObstacleWidth;
    real_T RadarMatchConfidence;
    real_T RadarPosX;
    real_T RadarVelX;
    real_T reserved_1;
    real_T reserved_1_b;
    real_T reserved_1_c;
} ObstacleDataB8_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataB9_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataB9_T_

typedef struct {
    real_T CIPVFlag;
    real_T MatchedRadarID;
    real_T ObstacleAge;
    real_T ObstacleLane;
    real_T ObstacleLength;
    real_T ObstacleWidth;
    real_T RadarMatchConfidence;
    real_T RadarPosX;
    real_T RadarVelX;
    real_T reserved_1;
    real_T reserved_1_b;
    real_T reserved_1_c;
} ObstacleDataB9_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataB10_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataB10_T_

typedef struct {
    real_T CIPVFlag;
    real_T MatchedRadarID;
    real_T ObstacleAge;
    real_T ObstacleLane;
    real_T ObstacleLength;
    real_T ObstacleWidth;
    real_T RadarMatchConfidence;
    real_T RadarPosX;
    real_T RadarVelX;
    real_T reserved_1;
    real_T reserved_1_b;
    real_T reserved_1_c;
} ObstacleDataB10_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataB4_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataB4_T_

typedef struct {
    real_T CIPVFlag;
    real_T MatchedRadarID;
    real_T ObstacleAge;
    real_T ObstacleLane;
    real_T ObstacleLength;
    real_T ObstacleWidth;
    real_T RadarMatchConfidence;
    real_T RadarPosX;
    real_T RadarVelX;
    real_T reserved_1;
    real_T reserved_1_b;
    real_T reserved_1_c;
} ObstacleDataB4_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataB3_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataB3_T_

typedef struct {
    real_T CIPVFlag;
    real_T MatchedRadarID;
    real_T ObstacleAge;
    real_T ObstacleLane;
    real_T ObstacleLength;
    real_T ObstacleWidth;
    real_T RadarMatchConfidence;
    real_T RadarPosX;
    real_T RadarVelX;
    real_T reserved_1;
    real_T reserved_1_b;
    real_T reserved_1_c;
} ObstacleDataB3_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataB2_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataB2_T_

typedef struct {
    real_T CIPVFlag;
    real_T MatchedRadarID;
    real_T ObstacleAge;
    real_T ObstacleLane;
    real_T ObstacleLength;
    real_T ObstacleWidth;
    real_T RadarMatchConfidence;
    real_T RadarPosX;
    real_T RadarVelX;
    real_T reserved_1;
    real_T reserved_1_b;
    real_T reserved_1_c;
} ObstacleDataB2_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataA7_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataA7_T_

typedef struct {
    real_T BlinkerInfo;
    real_T Move_in_and_Out;
    real_T ObstacleBrakeLights;
    real_T ObstacleID;
    real_T ObstaclePosX;
    real_T ObstaclePosY;
    real_T ObstacleStatus;
    real_T ObstacleType;
    real_T ObstacleValid;
    real_T ObstacleVelX;
    real_T reserved_1;
    real_T reserved_2;
    real_T reserved_4;
} ObstacleDataA7_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataA8_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataA8_T_

typedef struct {
    real_T BlinkerInfo;
    real_T Move_in_and_Out;
    real_T ObstacleBrakeLights;
    real_T ObstacleID;
    real_T ObstaclePosX;
    real_T ObstaclePosY;
    real_T ObstacleStatus;
    real_T ObstacleType;
    real_T ObstacleValid;
    real_T ObstacleVelX;
    real_T reserved_1;
    real_T reserved_2;
    real_T reserved_4;
} ObstacleDataA8_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataA9_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataA9_T_

typedef struct {
    real_T BlinkerInfo;
    real_T Move_in_and_Out;
    real_T ObstacleBrakeLights;
    real_T ObstacleID;
    real_T ObstaclePosX;
    real_T ObstaclePosY;
    real_T ObstacleStatus;
    real_T ObstacleType;
    real_T ObstacleValid;
    real_T ObstacleVelX;
    real_T reserved_1;
    real_T reserved_2;
    real_T reserved_4;
} ObstacleDataA9_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataA10_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataA10_T_

typedef struct {
    real_T BlinkerInfo;
    real_T Move_in_and_Out;
    real_T ObstacleBrakeLights;
    real_T ObstacleID;
    real_T ObstaclePosX;
    real_T ObstaclePosY;
    real_T ObstacleStatus;
    real_T ObstacleType;
    real_T ObstacleValid;
    real_T ObstacleVelX;
    real_T reserved_1;
    real_T reserved_2;
    real_T reserved_4;
} ObstacleDataA10_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataA6_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataA6_T_

typedef struct {
    real_T BlinkerInfo;
    real_T Move_in_and_Out;
    real_T ObstacleBrakeLights;
    real_T ObstacleID;
    real_T ObstaclePosX;
    real_T ObstaclePosY;
    real_T ObstacleStatus;
    real_T ObstacleType;
    real_T ObstacleValid;
    real_T ObstacleVelX;
    real_T reserved_1;
    real_T reserved_2;
    real_T reserved_4;
} ObstacleDataA6_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataA5_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataA5_T_

typedef struct {
    real_T BlinkerInfo;
    real_T Move_in_and_Out;
    real_T ObstacleBrakeLights;
    real_T ObstacleID;
    real_T ObstaclePosX;
    real_T ObstaclePosY;
    real_T ObstacleStatus;
    real_T ObstacleType;
    real_T ObstacleValid;
    real_T ObstacleVelX;
    real_T reserved_1;
    real_T reserved_2;
    real_T reserved_4;
} ObstacleDataA5_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataA4_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataA4_T_

typedef struct {
    real_T BlinkerInfo;
    real_T Move_in_and_Out;
    real_T ObstacleBrakeLights;
    real_T ObstacleID;
    real_T ObstaclePosX;
    real_T ObstaclePosY;
    real_T ObstacleStatus;
    real_T ObstacleType;
    real_T ObstacleValid;
    real_T ObstacleVelX;
    real_T reserved_1;
    real_T reserved_2;
    real_T reserved_4;
} ObstacleDataA4_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataA3_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataA3_T_

typedef struct {
    real_T BlinkerInfo;
    real_T Move_in_and_Out;
    real_T ObstacleBrakeLights;
    real_T ObstacleID;
    real_T ObstaclePosX;
    real_T ObstaclePosY;
    real_T ObstacleStatus;
    real_T ObstacleType;
    real_T ObstacleValid;
    real_T ObstacleVelX;
    real_T reserved_1;
    real_T reserved_2;
    real_T reserved_4;
} ObstacleDataA3_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataA2_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataA2_T_

typedef struct {
    real_T BlinkerInfo;
    real_T Move_in_and_Out;
    real_T ObstacleBrakeLights;
    real_T ObstacleID;
    real_T ObstaclePosX;
    real_T ObstaclePosY;
    real_T ObstacleStatus;
    real_T ObstacleType;
    real_T ObstacleValid;
    real_T ObstacleVelX;
    real_T reserved_1;
    real_T reserved_2;
    real_T reserved_4;
} ObstacleDataA2_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataC1_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataC1_T_

typedef struct {
    real_T Object_Accel_X;
    real_T ObstacleAngle;
    real_T ObstacleAngleRate;
    real_T ObstacleReplaced;
    real_T ObstacleVelY;
    real_T reserved_2;
    real_T reserved_3;
    real_T reserved_5;
} ObstacleDataC1_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataB1_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataB1_T_

typedef struct {
    real_T CIPVFlag;
    real_T MatchedRadarID;
    real_T ObstacleAge;
    real_T ObstacleLane;
    real_T ObstacleLength;
    real_T ObstacleWidth;
    real_T RadarMatchConfidence;
    real_T RadarPosX;
    real_T RadarVelX;
    real_T reserved_1;
    real_T reserved_1_b;
    real_T reserved_1_c;
} ObstacleDataB1_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ObstacleDataA1_T_
#define _DEFINED_TYPEDEF_FOR_ObstacleDataA1_T_

typedef struct {
    real_T BlinkerInfo;
    real_T Move_in_and_Out;
    real_T ObstacleBrakeLights;
    real_T ObstacleID;
    real_T ObstaclePosX;
    real_T ObstaclePosY;
    real_T ObstacleStatus;
    real_T ObstacleType;
    real_T ObstacleValid;
    real_T ObstacleVelX;
    real_T reserved_1;
    real_T reserved_2;
    real_T reserved_4;
} ObstacleDataA1_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_meObs3_T_
#define _DEFINED_TYPEDEF_FOR_meObs3_T_

typedef struct {
    ObstacleStatusA_T ObstacleStatusA;
    ObstacleStatusC_T ObstacleStatusC;
    ObstacleStatusB_T ObstacleStatusB;
    ObstacleDataC3_T ObstacleDataC3;
    ObstacleDataC10_T ObstacleDataC10;
    ObstacleDataC9_T ObstacleDataC9;
    ObstacleDataC8_T ObstacleDataC8;
    ObstacleDataC7_T ObstacleDataC7;
    ObstacleDataC6_T ObstacleDataC6;
    ObstacleDataC5_T ObstacleDataC5;
    ObstacleDataC4_T ObstacleDataC4;
    ObstacleDataC2_T ObstacleDataC2;
    ObstacleDataB5_T ObstacleDataB5;
    ObstacleDataB6_T ObstacleDataB6;
    ObstacleDataB7_T ObstacleDataB7;
    ObstacleDataB8_T ObstacleDataB8;
    ObstacleDataB9_T ObstacleDataB9;
    ObstacleDataB10_T ObstacleDataB10;
    ObstacleDataB4_T ObstacleDataB4;
    ObstacleDataB3_T ObstacleDataB3;
    ObstacleDataB2_T ObstacleDataB2;
    ObstacleDataA7_T ObstacleDataA7;
    ObstacleDataA8_T ObstacleDataA8;
    ObstacleDataA9_T ObstacleDataA9;
    ObstacleDataA10_T ObstacleDataA10;
    ObstacleDataA6_T ObstacleDataA6;
    ObstacleDataA5_T ObstacleDataA5;
    ObstacleDataA4_T ObstacleDataA4;
    ObstacleDataA3_T ObstacleDataA3;
    ObstacleDataA2_T ObstacleDataA2;
    ObstacleDataC1_T ObstacleDataC1;
    ObstacleDataB1_T ObstacleDataB1;
    ObstacleDataA1_T ObstacleDataA1;
} meObs3_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_NIO_General_T_
#define _DEFINED_TYPEDEF_FOR_NIO_General_T_

typedef struct {
    EyeQ4_FCW_AEB_T EyeQ4_FCW_AEB;
} NIO_General_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_EPM_in_T_
#define _DEFINED_TYPEDEF_FOR_EPM_in_T_

typedef struct {
    meACC3_protocol_T meACC3_protocol;
    meAHBC3_T meAHBC3;
    meCMS3_T meCMS3;
    meFailsafes3_T meFailsafes3;
    meFreeSpaceRWC3_T meFreeSpaceRWC3;
    slBus1_meHMI3_T meHMI3;
    meHPP3_T meHPP3;
    meLanes3_T meLanes3;
    meObs3_T meObs3;
    meTSR3_protocol_T meTSR3_protocol;
    NIO_General_T NIO_General;
} EPM_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_VCU_01_T_
#define _DEFINED_TYPEDEF_FOR_VCU_01_T_

typedef struct {
    real_T VCUTotlMotNegTqCp;
    real_T VCUTotlMotNegTqCpValid;
    real_T VCUTotlMotPosTqCp;
    real_T VCUTotlMotPosTqCpValid;
    real_T VCU_01_CRC;
    real_T VCU_01_MsgCntr;
} VCU_01_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_PD_in_T_
#define _DEFINED_TYPEDEF_FOR_PD_in_T_

typedef struct {
    VCU_01_T VCU_01;
} PD_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_PPEI_Cruise_Control_Sw_Status_T_
#define _DEFINED_TYPEDEF_FOR_PPEI_Cruise_Control_Sw_Status_T_

typedef struct {
    real_T AdptCrsGapSwAct;
    real_T AuxHtrAtv;
    real_T AuxHtrRq;
    real_T CrsCntCncRq;
    real_T CrsCntrlSwStAlvRollCnt;
    real_T CrsCntrlSwStCanSwAct;
    real_T CrsCntrlSwStOnSwAct;
    real_T CrsCntrlSwStResSwAct;
    real_T CrsCntrlSwStSetSwAct;
    real_T CrsCntrlSwStSpDcSwAct;
    real_T CrsCntrlSwStSpdInSwAct;
    real_T CrsCntrlSwStSwDataIntgty;
    real_T CrsCntrlSwStatProtValue;
    real_T CrsSecSwStat;
    real_T CrsSecSwStatARC;
    real_T CrsSecSwStatPVal;
    real_T CrsSpdLmtrSwStat;
    real_T CrsSpdLmtrSwStatARC;
    real_T CrsSpdLmtrSwStatPVal;
    real_T DrvSelMdSw1Sta;
    real_T DrvSelMdSw2Sta;
    real_T DrvSelMdSw3Sta;
    real_T DrvSelMdSwStaARC;
    real_T FuelMdSwAct;
    real_T FuelMdSwActV;
} PPEI_Cruise_Control_Sw_Status_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ADAS_PDC_F_T_
#define _DEFINED_TYPEDEF_FOR_ADAS_PDC_F_T_

typedef struct {
    real_T PDC_F_DistanceFL;
    real_T PDC_F_DistanceFLM;
    real_T PDC_F_DistanceFLS;
    real_T PDC_F_DistanceFR;
    real_T PDC_F_DistanceFRM;
    real_T PDC_F_DistanceFRS;
} ADAS_PDC_F_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ADAS_PDC_R_T_
#define _DEFINED_TYPEDEF_FOR_ADAS_PDC_R_T_

typedef struct {
    real_T PDC_R_DistanceRL;
    real_T PDC_R_DistanceRLM;
    real_T PDC_R_DistanceRLS;
    real_T PDC_R_DistanceRR;
    real_T PDC_R_DistanceRRM;
    real_T PDC_R_DistanceRRS;
} ADAS_PDC_R_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_TmpRaw_in_T_
#define _DEFINED_TYPEDEF_FOR_TmpRaw_in_T_

typedef struct {
    PPEI_Cruise_Control_Sw_Status_T PPEI_Cruise_Control_Sw_Status;
    ADAS_PDC_F_T ADAS_PDC_F;
    ADAS_PDC_R_T ADAS_PDC_R;
} TmpRaw_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_VCU_10_T_
#define _DEFINED_TYPEDEF_FOR_VCU_10_T_

typedef struct {
    real_T LVBattChgSts;
    real_T LVBattSOC;
    real_T LVBattSOCSts;
    real_T LVBattU;
    real_T LVBattUSts;
    real_T LoadShed;
    real_T VCUHVBattCutOffWarn;
    real_T VCULvBattWarn;
} VCU_10_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CGW_STEERWHL_CMD_T_
#define _DEFINED_TYPEDEF_FOR_CGW_STEERWHL_CMD_T_

typedef struct {
    real_T FogLiSCMCmd;
    real_T HiBeamSCMCmd;
    real_T ReWiprSCMCmd;
} CGW_STEERWHL_CMD_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CGW_SNSR_T_
#define _DEFINED_TYPEDEF_FOR_CGW_SNSR_T_

typedef struct {
    real_T HeadLampsOn;
    real_T LiSnsrData;
    real_T LiSnsrFailSts;
} CGW_SNSR_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CDC_HU_09_T_
#define _DEFINED_TYPEDEF_FOR_CDC_HU_09_T_

typedef struct {
    real_T ACChrgCurrentLimReq;
    real_T APAPrkgModReq;
    real_T APAReq;
    real_T CDCUnlockACChrgr;
    real_T CDC_EPBSwtSts;
    real_T CargoReq;
    real_T CreepOnOff;
    real_T ESCAndTCSReq;
    real_T HMIStopChargingReq;
    real_T HU_09_CRC;
    real_T HU_09_MsgCntr;
    real_T HillDescentControlReq;
    real_T LC_Deactivation_Request;
    real_T LC_EasyEntryEna;
    real_T PassAirbInhbnReq;
    real_T TowEPBReq;
    real_T TowModActv;
    real_T TowModOnOff;
    real_T UPAReq;
} CDC_HU_09_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CDC_HU_08_T_
#define _DEFINED_TYPEDEF_FOR_CDC_HU_08_T_

typedef struct {
    real_T NavCtryCod;
    real_T NaviCurrentRoadTyp;
    real_T NaviSpdLim;
    real_T NaviSpdLimSts;
    real_T NaviSpdLimUnit;
} CDC_HU_08_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CDC_HU_07_T_
#define _DEFINED_TYPEDEF_FOR_CDC_HU_07_T_

typedef struct {
    real_T AVAOnOffReq;
    real_T AmbLiOnOff;
    real_T CbnLiSet;
    real_T ExtraWiprModOnOff;
    real_T FolwMeHomeOnOff;
    real_T FolwMeHomeTiSet;
    real_T MaiLiSet;
    real_T ReWiprAutoSetOnOff;
    real_T StrWhlHeatingReq;
    real_T WelcomeLiOnOff;
    real_T WiprSrvReq;
} CDC_HU_07_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_CDC_HU_03_T_
#define _DEFINED_TYPEDEF_FOR_CDC_HU_03_T_

typedef struct {
    real_T ACCTauGapStored;
    real_T AEBOnOff;
    real_T CDC_ADAS_FailSts;
    real_T CDC_FailSts;
    real_T DAS_TactileOnOff;
    real_T DriverAlertSystemOnOff;
    real_T FCTAOnOffCmd;
    real_T FCWSet;
    real_T GoNotifierOnOff;
    real_T GuestModOnOff;
    real_T LCAOnOff;
    real_T LCATactileWarningOnOff;
    real_T LaneAssistTactileOnOff;
    real_T PCW_LatentWarningOnOff;
    real_T PCW_PreWarningOnOff;
    real_T RCTAReq;
    real_T SdowOnOffReq;
    real_T SetHMA;
    real_T SetLaneAssiAidTyp;
    real_T SetLaneAssiSnvty;
    real_T SetTSR;
    real_T TSRSpdLimDataOnOff;
    real_T TogModDrvrCmd;
    real_T VldKeyfobChkReq;
} CDC_HU_03_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_BCM_R_01_T_
#define _DEFINED_TYPEDEF_FOR_BCM_R_01_T_

typedef struct {
    real_T BrkLiSts;
    real_T ChrgrPortACAjarSts;
    real_T ChrgrPortDCAjarSts;
    real_T FogLiReSts;
    real_T PuddleLiTrCmdSts;
    real_T QuickAcsBtn;
    real_T ReWinDefrstSts;
    real_T ReWiprBlkSts;
    real_T ReWiprParkSts;
    real_T ReWiprSts;
    real_T RvsLiSts;
    real_T TrLiSts;
    real_T WiprWshrPmpFailSts;
    real_T WshingTankPortAjarSts;
    real_T WshrMotDir;
} BCM_R_01_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_BCM_08_T_
#define _DEFINED_TYPEDEF_FOR_BCM_08_T_

typedef struct {
    real_T FrntWiperBlkSts;
    real_T FrntWiperParkSts;
    real_T FrntWiprSts;
    real_T MirrCtrlSts;
    real_T MirrFrntLeSts;
    real_T MirrFrntRiSts;
    real_T MirrHeatSts;
    real_T WiprServReqSts;
    real_T WiprWshrLvl;
} BCM_08_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_BCM_06_T_
#define _DEFINED_TYPEDEF_FOR_BCM_06_T_

typedef struct {
    real_T DASFctSts;
    real_T DayTiRunngLiSts;
    real_T DrowsinessIndex;
    real_T DrowsinessIndexSts;
    real_T DrowsyWarning;
    real_T FogLiFrntLeDrvrSts;
    real_T FogLiFrntRiDrvrSts;
    real_T FogLiFrntSts;
    real_T HiBeamSts;
    real_T HndlLiSts;
    real_T HzrdWarnSts;
    real_T ImmoAuthWarning;
    real_T IntrLiFootWellSts;
    real_T LeTurnIndcrLiSts;
    real_T LoBeamSts;
    real_T LtgPwrSplyEnaSts;
    real_T PosnLiSts;
    real_T PuddleLiFrntLeSts;
    real_T PuddleLiFrntRiSts;
    real_T PuddleLiReLeSts;
    real_T PuddleLiReRiSts;
    real_T RiTurnIndcrLiSts;
    real_T ScurKeyInvd;
    real_T WelcomeLiReq;
} BCM_06_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_APA_ADC_10_T_
#define _DEFINED_TYPEDEF_FOR_APA_ADC_10_T_

typedef struct {
    real_T APA_ADC_10_CRC;
    real_T APA_ADC_10_MsgCntr;
    real_T MapObj09Hei;
    real_T MapObj09HeiProblty;
    real_T MapObj09P1X;
    real_T MapObj09P1Y;
    real_T MapObj09P2X;
    real_T MapObj09P2Y;
    real_T MapObj09Problty;
    real_T MapObj09Typ;
    real_T MapObj19Hei;
    real_T MapObj19HeiProblty;
    real_T MapObj19P1X;
    real_T MapObj19P1Y;
    real_T MapObj19P2X;
    real_T MapObj19P2Y;
    real_T MapObj19Problty;
    real_T MapObj19Typ;
    real_T MapObjX9Offs;
} APA_ADC_10_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_APA_ADC_09_T_
#define _DEFINED_TYPEDEF_FOR_APA_ADC_09_T_

typedef struct {
    real_T APA_ADC_09_CRC;
    real_T APA_ADC_09_MsgCntr;
    real_T MapObj08Hei;
    real_T MapObj08HeiProblty;
    real_T MapObj08P1X;
    real_T MapObj08P1Y;
    real_T MapObj08P2X;
    real_T MapObj08P2Y;
    real_T MapObj08Problty;
    real_T MapObj08Typ;
    real_T MapObj18Hei;
    real_T MapObj18HeiProblty;
    real_T MapObj18P1X;
    real_T MapObj18P1Y;
    real_T MapObj18P2X;
    real_T MapObj18P2Y;
    real_T MapObj18Problty;
    real_T MapObj18Typ;
    real_T MapObjX8Offs;
} APA_ADC_09_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_APA_ADC_08_T_
#define _DEFINED_TYPEDEF_FOR_APA_ADC_08_T_

typedef struct {
    real_T APA_ADC_08_CRC;
    real_T APA_ADC_08_MsgCntr;
    real_T MapObj07Hei;
    real_T MapObj07HeiProblty;
    real_T MapObj07P1X;
    real_T MapObj07P1Y;
    real_T MapObj07P2X;
    real_T MapObj07P2Y;
    real_T MapObj07Problty;
    real_T MapObj07Typ;
    real_T MapObj17Hei;
    real_T MapObj17HeiProblty;
    real_T MapObj17P1X;
    real_T MapObj17P1Y;
    real_T MapObj17P2X;
    real_T MapObj17P2Y;
    real_T MapObj17Problty;
    real_T MapObj17Typ;
    real_T MapObjX7Offs;
} APA_ADC_08_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_APA_ADC_07_T_
#define _DEFINED_TYPEDEF_FOR_APA_ADC_07_T_

typedef struct {
    real_T APA_ADC_07_CRC;
    real_T APA_ADC_07_MsgCntr;
    real_T MapObj06Hei;
    real_T MapObj06HeiProblty;
    real_T MapObj06P1X;
    real_T MapObj06P1Y;
    real_T MapObj06P2X;
    real_T MapObj06P2Y;
    real_T MapObj06Problty;
    real_T MapObj06Typ;
    real_T MapObj16Hei;
    real_T MapObj16HeiProblty;
    real_T MapObj16P1X;
    real_T MapObj16P1Y;
    real_T MapObj16P2X;
    real_T MapObj16P2Y;
    real_T MapObj16Problty;
    real_T MapObj16Typ;
    real_T MapObjX6Offs;
} APA_ADC_07_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_APA_ADC_06_T_
#define _DEFINED_TYPEDEF_FOR_APA_ADC_06_T_

typedef struct {
    real_T APA_ADC_06_CRC;
    real_T APA_ADC_06_MsgCntr;
    real_T MapObj05Hei;
    real_T MapObj05HeiProblty;
    real_T MapObj05P1X;
    real_T MapObj05P1Y;
    real_T MapObj05P2X;
    real_T MapObj05P2Y;
    real_T MapObj05Problty;
    real_T MapObj05Typ;
    real_T MapObj15Hei;
    real_T MapObj15HeiProblty;
    real_T MapObj15P1X;
    real_T MapObj15P1Y;
    real_T MapObj15P2X;
    real_T MapObj15P2Y;
    real_T MapObj15Problty;
    real_T MapObj15Typ;
    real_T MapObjX5Offs;
} APA_ADC_06_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_APA_ADC_05_T_
#define _DEFINED_TYPEDEF_FOR_APA_ADC_05_T_

typedef struct {
    real_T APA_ADC_05_CRC;
    real_T APA_ADC_05_MsgCntr;
    real_T MapObj04Hei;
    real_T MapObj04HeiProblty;
    real_T MapObj04P1X;
    real_T MapObj04P1Y;
    real_T MapObj04P2X;
    real_T MapObj04P2Y;
    real_T MapObj04Problty;
    real_T MapObj04Typ;
    real_T MapObj14Hei;
    real_T MapObj14HeiProblty;
    real_T MapObj14P1X;
    real_T MapObj14P1Y;
    real_T MapObj14P2X;
    real_T MapObj14P2Y;
    real_T MapObj14Problty;
    real_T MapObj14Typ;
    real_T MapObjX4Offs;
} APA_ADC_05_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_APA_ADC_04_T_
#define _DEFINED_TYPEDEF_FOR_APA_ADC_04_T_

typedef struct {
    real_T APA_ADC_04_CRC;
    real_T APA_ADC_04_MsgCntr;
    real_T MapObj03Hei;
    real_T MapObj03HeiProblty;
    real_T MapObj03P1X;
    real_T MapObj03P1Y;
    real_T MapObj03P2X;
    real_T MapObj03P2Y;
    real_T MapObj03Problty;
    real_T MapObj03Typ;
    real_T MapObj13Hei;
    real_T MapObj13HeiProblty;
    real_T MapObj13P1X;
    real_T MapObj13P1Y;
    real_T MapObj13P2X;
    real_T MapObj13P2Y;
    real_T MapObj13Problty;
    real_T MapObj13Typ;
    real_T MapObjX3Offs;
} APA_ADC_04_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_APA_ADC_03_T_
#define _DEFINED_TYPEDEF_FOR_APA_ADC_03_T_

typedef struct {
    real_T APA_ADC_03_CRC;
    real_T APA_ADC_03_MsgCntr;
    real_T MapObj02Hei;
    real_T MapObj02HeiProblty;
    real_T MapObj02P1X;
    real_T MapObj02P1Y;
    real_T MapObj02P2X;
    real_T MapObj02P2Y;
    real_T MapObj02Problty;
    real_T MapObj02Typ;
    real_T MapObj12Hei;
    real_T MapObj12HeiProblty;
    real_T MapObj12P1X;
    real_T MapObj12P1Y;
    real_T MapObj12P2X;
    real_T MapObj12P2Y;
    real_T MapObj12Problty;
    real_T MapObj12Typ;
    real_T MapObjX2Offs;
} APA_ADC_03_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_APA_ADC_02_T_
#define _DEFINED_TYPEDEF_FOR_APA_ADC_02_T_

typedef struct {
    real_T APA_ADC_02_CRC;
    real_T APA_ADC_02_MsgCntr;
    real_T MapObj01Hei;
    real_T MapObj01HeiProblty;
    real_T MapObj01P1X;
    real_T MapObj01P1Y;
    real_T MapObj01P2X;
    real_T MapObj01P2Y;
    real_T MapObj01Problty;
    real_T MapObj01Typ;
    real_T MapObj11Hei;
    real_T MapObj11HeiProblty;
    real_T MapObj11P1X;
    real_T MapObj11P1Y;
    real_T MapObj11P2X;
    real_T MapObj11P2Y;
    real_T MapObj11Problty;
    real_T MapObj11Typ;
    real_T MapObjX1Offs;
} APA_ADC_02_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_APA_ADC_01_T_
#define _DEFINED_TYPEDEF_FOR_APA_ADC_01_T_

typedef struct {
    real_T APA_ADC_01_CRC;
    real_T APA_ADC_01_MsgCntr;
    real_T MapObj00Hei;
    real_T MapObj00HeiProblty;
    real_T MapObj00P1X;
    real_T MapObj00P1Y;
    real_T MapObj00P2X;
    real_T MapObj00P2Y;
    real_T MapObj00Problty;
    real_T MapObj00Typ;
    real_T MapObj10Hei;
    real_T MapObj10HeiProblty;
    real_T MapObj10P1X;
    real_T MapObj10P1Y;
    real_T MapObj10P2X;
    real_T MapObj10P2Y;
    real_T MapObj10Problty;
    real_T MapObj10Typ;
    real_T MapObjX0Offs;
} APA_ADC_01_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_APA_07_T_
#define _DEFINED_TYPEDEF_FOR_APA_07_T_

typedef struct {
    real_T ApaPocSlotParallelLeSizeX;
    real_T ApaPocSlotParallelLeSizeY;
    real_T ApaPocSlotParallelLeVehPsi;
    real_T ApaPocSlotParallelLeVehX;
    real_T ApaPocSlotParallelLeVehY;
    real_T ApaPocSlotParallelRiSizeX;
    real_T ApaPocSlotParallelRiSizeY;
    real_T ApaPocSlotParallelRiVehPsi;
    real_T ApaPocSlotParallelRiVehX;
    real_T ApaPocSlotParallelRiVehY;
    real_T ApaPscSlotCrossLeSizeX;
    real_T ApaPscSlotCrossLeSizeY;
    real_T ApaPscSlotCrossLeVehPsi;
    real_T ApaPscSlotCrossLeVehX;
    real_T ApaPscSlotCrossLeVehY;
    real_T ApaPscSlotCrossRiSizeX;
    real_T ApaPscSlotCrossRiSizeY;
    real_T ApaPscSlotCrossRiVehPsi;
    real_T ApaPscSlotCrossRiVehX;
    real_T ApaPscSlotCrossRiVehY;
    real_T ApaPscSlotParallelLeSizeX;
    real_T ApaPscSlotParallelLeSizeY;
    real_T ApaPscSlotParallelLeVehPsi;
    real_T ApaPscSlotParallelLeVehX;
    real_T ApaPscSlotParallelLeVehY;
    real_T ApaPscSlotParallelRiSizeX;
    real_T ApaPscSlotParallelRiSizeY;
    real_T ApaPscSlotParallelRiVehPsi;
    real_T ApaPscSlotParallelRiVehX;
    real_T ApaPscSlotParallelRiVehY;
    real_T ApaPscVehSlotTyp;
    real_T ApaXSlotYSizeX;
    real_T ApaXSlotYSizeY;
    real_T ApaXSlotYVehPsi;
    real_T ApaXSlotYVehX;
    real_T ApaXSlotYVehY;
} APA_07_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_APA_06_T_
#define _DEFINED_TYPEDEF_FOR_APA_06_T_

typedef struct {
    real_T APA_06_CRC;
    real_T APA_06_MsgCntr;
    real_T ReLeMidRegnDst;
    real_T ReLeRegnDst;
    real_T ReMidRegnDst;
    real_T ReRiMidRegnDst;
    real_T ReRiRegnDst;
    real_T ReSnsrFltSt;
    real_T ReSysSts;
} APA_06_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_APA_05_T_
#define _DEFINED_TYPEDEF_FOR_APA_05_T_

typedef struct {
    real_T APA_05_CRC;
    real_T APA_05_MsgCntr;
    real_T FrntLeMidRegnDst;
    real_T FrntLeRegnDst;
    real_T FrntMidRegnDst;
    real_T FrntRiMidRegnDst;
    real_T FrntRiRegnDst;
    real_T FrntSnsrFltSt;
    real_T FrntSysSts;
} APA_05_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_APA_04_T_
#define _DEFINED_TYPEDEF_FOR_APA_04_T_

typedef struct {
    real_T ApaPocSlotParallelLeObj1Alpha;
    real_T ApaPocSlotParallelLeObj1X;
    real_T ApaPocSlotParallelLeObj1Y;
    real_T ApaPocSlotParallelLeObj2Alpha;
    real_T ApaPocSlotParallelLeObj2X;
    real_T ApaPocSlotParallelLeObj2Y;
    real_T ApaPocSlotParallelRiObj1Alpha;
    real_T ApaPocSlotParallelRiObj1X;
    real_T ApaPocSlotParallelRiObj1Y;
    real_T ApaPocSlotParallelRiObj2Alpha;
    real_T ApaPocSlotParallelRiObj2X;
    real_T ApaPocSlotParallelRiObj2Y;
    real_T ApaPscEnvSlotTyp;
    real_T ApaPscSlotCrossLeObj1Alpha;
    real_T ApaPscSlotCrossLeObj1X;
    real_T ApaPscSlotCrossLeObj1Y;
    real_T ApaPscSlotCrossLeObj2Alpha;
    real_T ApaPscSlotCrossLeObj2X;
    real_T ApaPscSlotCrossLeObj2Y;
    real_T ApaPscSlotCrossRiObj1Alpha;
    real_T ApaPscSlotCrossRiObj1X;
    real_T ApaPscSlotCrossRiObj1Y;
    real_T ApaPscSlotCrossRiObj2Alpha;
    real_T ApaPscSlotCrossRiObj2X;
    real_T ApaPscSlotCrossRiObj2Y;
    real_T ApaPscSlotParallelLeObj1Alpha;
    real_T ApaPscSlotParallelLeObj1X;
    real_T ApaPscSlotParallelLeObj1Y;
    real_T ApaPscSlotParallelLeObj2Alpha;
    real_T ApaPscSlotParallelLeObj2X;
    real_T ApaPscSlotParallelLeObj2Y;
    real_T ApaPscSlotParallelRiObj1Alpha;
    real_T ApaPscSlotParallelRiObj1X;
    real_T ApaPscSlotParallelRiObj1Y;
    real_T ApaPscSlotParallelRiObj2Alpha;
    real_T ApaPscSlotParallelRiObj2X;
    real_T ApaPscSlotParallelRiObj2Y;
    real_T ApaXSlotYObj1Alpha;
    real_T ApaXSlotYObj1X;
    real_T ApaXSlotYObj1Y;
    real_T ApaXSlotYObj2Alpha;
    real_T ApaXSlotYObj2X;
    real_T ApaXSlotYObj2Y;
} APA_04_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_APA_03_T_
#define _DEFINED_TYPEDEF_FOR_APA_03_T_

typedef struct {
    real_T APA_03_CRC;
    real_T APA_03_MsgCntr;
    real_T ApaAbortReason;
    real_T ApaInstruction;
    real_T ApaPocSlotParallelLe;
    real_T ApaPocSlotParallelRi;
    real_T ApaPscSlotCrossLe;
    real_T ApaPscSlotCrossRi;
    real_T ApaPscSlotParallelLe;
    real_T ApaPscSlotParallelRi;
    real_T ApaStatus;
    real_T UpaSysDi;
    real_T UpaSysSrv;
    real_T UpaSysSts;
} APA_03_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_APA_02_T_
#define _DEFINED_TYPEDEF_FOR_APA_02_T_

typedef struct {
    real_T APA_02_CRC;
    real_T APA_02_MsgCntr;
    real_T ApaManeuverDst;
    real_T ApaMaxVelocity;
} APA_02_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_APA_01_T_
#define _DEFINED_TYPEDEF_FOR_APA_01_T_

typedef struct {
    real_T APASts;
    real_T APA_01_CRC;
    real_T APA_01_MsgCntr;
    real_T APA_EPSReqTyp;
    real_T AbsltPinionAgReq;
    real_T AbsltPinionAgReqValid;
} APA_01_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_ADAS_in_T_
#define _DEFINED_TYPEDEF_FOR_ADAS_in_T_

typedef struct {
    VCU_10_T VCU_10;
    CGW_STEERWHL_CMD_T CGW_STEERWHL_CMD;
    CGW_SNSR_T CGW_SNSR;
    CDC_HU_09_T CDC_HU_09;
    CDC_HU_08_T CDC_HU_08;
    CDC_HU_07_T CDC_HU_07;
    CDC_HU_03_T CDC_HU_03;
    BCM_R_01_T BCM_R_01;
    BCM_08_T BCM_08;
    BCM_06_T BCM_06;
    APA_ADC_10_T APA_ADC_10;
    APA_ADC_09_T APA_ADC_09;
    APA_ADC_08_T APA_ADC_08;
    APA_ADC_07_T APA_ADC_07;
    APA_ADC_06_T APA_ADC_06;
    APA_ADC_05_T APA_ADC_05;
    APA_ADC_04_T APA_ADC_04;
    APA_ADC_03_T APA_ADC_03;
    APA_ADC_02_T APA_ADC_02;
    APA_ADC_01_T APA_ADC_01;
    APA_07_T APA_07;
    APA_06_T APA_06;
    APA_05_T APA_05;
    APA_04_T APA_04;
    APA_03_T APA_03;
    APA_02_T APA_02;
    APA_01_T APA_01;
} ADAS_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj00_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj00_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj00_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj00_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj00_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj00_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj01_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj01_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj01_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj01_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj01_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj01_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj02_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj02_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj02_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj02_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj02_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj02_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj03_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj03_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj03_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj03_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj03_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj03_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj04_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj04_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj04_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj04_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj04_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj04_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj05_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj05_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj05_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj05_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj05_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj05_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj06_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj06_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj06_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj06_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj06_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj06_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj07_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj07_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj07_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj07_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj07_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj07_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj08_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj08_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj08_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj08_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj08_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj08_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj09_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj09_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj09_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj09_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj09_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj09_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj10_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj10_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj10_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj10_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj10_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj10_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj11_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj11_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj11_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj11_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj11_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj11_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj12_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj12_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj12_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj12_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj12_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj12_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj13_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj13_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj13_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj13_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj13_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj13_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj14_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj14_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj14_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj14_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj14_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj14_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj15_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj15_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj15_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj15_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj15_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj15_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj16_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj16_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj16_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj16_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj16_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj16_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj17_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj17_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj17_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj17_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj17_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj17_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj18_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj18_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj18_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj18_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj18_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj18_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj19_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj19_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj19_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj19_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj19_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj19_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj20_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj20_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj20_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj20_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj20_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj20_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj21_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj21_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj21_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj21_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj21_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj21_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj22_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj22_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj22_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj22_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj22_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj22_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj23_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj23_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj23_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj23_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj23_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj23_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj24_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj24_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj24_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj24_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj24_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj24_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj25_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj25_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj25_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj25_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj25_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj25_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj26_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj26_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj26_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj26_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj26_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj26_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj27_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj27_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj27_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj27_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj27_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj27_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj28_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj28_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj28_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj28_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj28_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj28_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj29_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj29_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj29_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj29_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj29_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj29_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj30_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj30_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj30_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj30_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj30_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj30_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj31_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj31_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FL_Obj31_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Obj31_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Obj31_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FL_Obj31_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Object_Ender_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Object_Ender_T_

typedef struct {
    real_T RAD_FL_MessEnderConsistBit;
    real_T RAD_FL_Object_Ender_CRC;
    real_T RAD_FL_TCCounter;
    real_T RAD_FL_timestamp;
} RAD_FL_Object_Ender_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Object_Starter_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Object_Starter_T_

typedef struct {
    real_T RAD_FL_MessStarterConsistBit;
    real_T RAD_FL_Veh_aEgo;
    real_T RAD_FL_Veh_psiDt;
    real_T RAD_FL_Veh_slipAngle;
    real_T RAD_FL_Veh_vEgo;
} RAD_FL_Object_Starter_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FL_Status_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FL_Status_T_

typedef struct {
    real_T RAD_FL_Stat_AbsorptionBlindness;
    real_T RAD_FL_Stat_DistortionBlindness;
    real_T RAD_FL_Stat_HWFail;
    real_T RAD_FL_Stat_H_Misalignment;
    real_T RAD_FL_Stat_ITCInfo;
    real_T RAD_FL_Stat_SGUFail;
    real_T RAD_FL_Status_CRC;
    real_T RAD_FL_Status_MsgCntr;
} RAD_FL_Status_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj00_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj00_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj00_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj00_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj00_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj00_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj01_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj01_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj01_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj01_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj01_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj01_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj02_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj02_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj02_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj02_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj02_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj02_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj03_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj03_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj03_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj03_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj03_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj03_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj04_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj04_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj04_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj04_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj04_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj04_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj05_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj05_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj05_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj05_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj05_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj05_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj06_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj06_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj06_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj06_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj06_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj06_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj07_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj07_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj07_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj07_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj07_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj07_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj08_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj08_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj08_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj08_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj08_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj08_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj09_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj09_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj09_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj09_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj09_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj09_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj10_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj10_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj10_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj10_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj10_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj10_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj11_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj11_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj11_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj11_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj11_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj11_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj12_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj12_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj12_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj12_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj12_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj12_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj13_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj13_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj13_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj13_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj13_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj13_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj14_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj14_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj14_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj14_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj14_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj14_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj15_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj15_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj15_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj15_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj15_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj15_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj16_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj16_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj16_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj16_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj16_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj16_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj17_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj17_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj17_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj17_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj17_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj17_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj18_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj18_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj18_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj18_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj18_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj18_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj19_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj19_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj19_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj19_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj19_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj19_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj20_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj20_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj20_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj20_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj20_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj20_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj21_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj21_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj21_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj21_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj21_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj21_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj22_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj22_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj22_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj22_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj22_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj22_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj23_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj23_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj23_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj23_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj23_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj23_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj24_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj24_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj24_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj24_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj24_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj24_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj25_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj25_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj25_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj25_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj25_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj25_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj26_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj26_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj26_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj26_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj26_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj26_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj27_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj27_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj27_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj27_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj27_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj27_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj28_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj28_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj28_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj28_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj28_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj28_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj29_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj29_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj29_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj29_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj29_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj29_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj30_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj30_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj30_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj30_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj30_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj30_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj31_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj31_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_FR_Obj31_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Obj31_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Obj31_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_FR_Obj31_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Object_Ender_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Object_Ender_T_

typedef struct {
    real_T RAD_FR_MessEnderConsistBit;
    real_T RAD_FR_Object_Ender_CRC;
    real_T RAD_FR_Object_timestamp;
    real_T RAD_FR_TCCounter;
} RAD_FR_Object_Ender_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Object_Starter_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Object_Starter_T_

typedef struct {
    real_T RAD_FR_MessStarterConsistBit;
    real_T RAD_FR_Veh_aEgo;
    real_T RAD_FR_Veh_psiDt;
    real_T RAD_FR_Veh_slipAngle;
    real_T RAD_FR_Veh_vEgo;
} RAD_FR_Object_Starter_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_FR_Status_T_
#define _DEFINED_TYPEDEF_FOR_RAD_FR_Status_T_

typedef struct {
    real_T RAD_FR_ITCInfo;
    real_T RAD_FR_Stat_AbsorptionBlindness;
    real_T RAD_FR_Stat_DistortionBlindness;
    real_T RAD_FR_Stat_HWFail;
    real_T RAD_FR_Stat_H_Misalignment;
    real_T RAD_FR_Stat_SGUFail;
    real_T RAD_FR_Status_CRC;
    real_T RAD_FR_Status_MsgCntr;
} RAD_FR_Status_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_MRRcorner_in_T_
#define _DEFINED_TYPEDEF_FOR_MRRcorner_in_T_

typedef struct {
    RAD_FL_Obj00_A_T RAD_FL_Obj00_A;
    RAD_FL_Obj00_B_T RAD_FL_Obj00_B;
    RAD_FL_Obj01_A_T RAD_FL_Obj01_A;
    RAD_FL_Obj01_B_T RAD_FL_Obj01_B;
    RAD_FL_Obj02_A_T RAD_FL_Obj02_A;
    RAD_FL_Obj02_B_T RAD_FL_Obj02_B;
    RAD_FL_Obj03_A_T RAD_FL_Obj03_A;
    RAD_FL_Obj03_B_T RAD_FL_Obj03_B;
    RAD_FL_Obj04_A_T RAD_FL_Obj04_A;
    RAD_FL_Obj04_B_T RAD_FL_Obj04_B;
    RAD_FL_Obj05_A_T RAD_FL_Obj05_A;
    RAD_FL_Obj05_B_T RAD_FL_Obj05_B;
    RAD_FL_Obj06_A_T RAD_FL_Obj06_A;
    RAD_FL_Obj06_B_T RAD_FL_Obj06_B;
    RAD_FL_Obj07_A_T RAD_FL_Obj07_A;
    RAD_FL_Obj07_B_T RAD_FL_Obj07_B;
    RAD_FL_Obj08_A_T RAD_FL_Obj08_A;
    RAD_FL_Obj08_B_T RAD_FL_Obj08_B;
    RAD_FL_Obj09_A_T RAD_FL_Obj09_A;
    RAD_FL_Obj09_B_T RAD_FL_Obj09_B;
    RAD_FL_Obj10_A_T RAD_FL_Obj10_A;
    RAD_FL_Obj10_B_T RAD_FL_Obj10_B;
    RAD_FL_Obj11_A_T RAD_FL_Obj11_A;
    RAD_FL_Obj11_B_T RAD_FL_Obj11_B;
    RAD_FL_Obj12_A_T RAD_FL_Obj12_A;
    RAD_FL_Obj12_B_T RAD_FL_Obj12_B;
    RAD_FL_Obj13_A_T RAD_FL_Obj13_A;
    RAD_FL_Obj13_B_T RAD_FL_Obj13_B;
    RAD_FL_Obj14_A_T RAD_FL_Obj14_A;
    RAD_FL_Obj14_B_T RAD_FL_Obj14_B;
    RAD_FL_Obj15_A_T RAD_FL_Obj15_A;
    RAD_FL_Obj15_B_T RAD_FL_Obj15_B;
    RAD_FL_Obj16_A_T RAD_FL_Obj16_A;
    RAD_FL_Obj16_B_T RAD_FL_Obj16_B;
    RAD_FL_Obj17_A_T RAD_FL_Obj17_A;
    RAD_FL_Obj17_B_T RAD_FL_Obj17_B;
    RAD_FL_Obj18_A_T RAD_FL_Obj18_A;
    RAD_FL_Obj18_B_T RAD_FL_Obj18_B;
    RAD_FL_Obj19_A_T RAD_FL_Obj19_A;
    RAD_FL_Obj19_B_T RAD_FL_Obj19_B;
    RAD_FL_Obj20_A_T RAD_FL_Obj20_A;
    RAD_FL_Obj20_B_T RAD_FL_Obj20_B;
    RAD_FL_Obj21_A_T RAD_FL_Obj21_A;
    RAD_FL_Obj21_B_T RAD_FL_Obj21_B;
    RAD_FL_Obj22_A_T RAD_FL_Obj22_A;
    RAD_FL_Obj22_B_T RAD_FL_Obj22_B;
    RAD_FL_Obj23_A_T RAD_FL_Obj23_A;
    RAD_FL_Obj23_B_T RAD_FL_Obj23_B;
    RAD_FL_Obj24_A_T RAD_FL_Obj24_A;
    RAD_FL_Obj24_B_T RAD_FL_Obj24_B;
    RAD_FL_Obj25_A_T RAD_FL_Obj25_A;
    RAD_FL_Obj25_B_T RAD_FL_Obj25_B;
    RAD_FL_Obj26_A_T RAD_FL_Obj26_A;
    RAD_FL_Obj26_B_T RAD_FL_Obj26_B;
    RAD_FL_Obj27_A_T RAD_FL_Obj27_A;
    RAD_FL_Obj27_B_T RAD_FL_Obj27_B;
    RAD_FL_Obj28_A_T RAD_FL_Obj28_A;
    RAD_FL_Obj28_B_T RAD_FL_Obj28_B;
    RAD_FL_Obj29_A_T RAD_FL_Obj29_A;
    RAD_FL_Obj29_B_T RAD_FL_Obj29_B;
    RAD_FL_Obj30_A_T RAD_FL_Obj30_A;
    RAD_FL_Obj30_B_T RAD_FL_Obj30_B;
    RAD_FL_Obj31_A_T RAD_FL_Obj31_A;
    RAD_FL_Obj31_B_T RAD_FL_Obj31_B;
    RAD_FL_Object_Ender_T RAD_FL_Object_Ender;
    RAD_FL_Object_Starter_T RAD_FL_Object_Starter;
    RAD_FL_Status_T RAD_FL_Status;
    RAD_FR_Obj00_A_T RAD_FR_Obj00_A;
    RAD_FR_Obj00_B_T RAD_FR_Obj00_B;
    RAD_FR_Obj01_A_T RAD_FR_Obj01_A;
    RAD_FR_Obj01_B_T RAD_FR_Obj01_B;
    RAD_FR_Obj02_A_T RAD_FR_Obj02_A;
    RAD_FR_Obj02_B_T RAD_FR_Obj02_B;
    RAD_FR_Obj03_A_T RAD_FR_Obj03_A;
    RAD_FR_Obj03_B_T RAD_FR_Obj03_B;
    RAD_FR_Obj04_A_T RAD_FR_Obj04_A;
    RAD_FR_Obj04_B_T RAD_FR_Obj04_B;
    RAD_FR_Obj05_A_T RAD_FR_Obj05_A;
    RAD_FR_Obj05_B_T RAD_FR_Obj05_B;
    RAD_FR_Obj06_A_T RAD_FR_Obj06_A;
    RAD_FR_Obj06_B_T RAD_FR_Obj06_B;
    RAD_FR_Obj07_A_T RAD_FR_Obj07_A;
    RAD_FR_Obj07_B_T RAD_FR_Obj07_B;
    RAD_FR_Obj08_A_T RAD_FR_Obj08_A;
    RAD_FR_Obj08_B_T RAD_FR_Obj08_B;
    RAD_FR_Obj09_A_T RAD_FR_Obj09_A;
    RAD_FR_Obj09_B_T RAD_FR_Obj09_B;
    RAD_FR_Obj10_A_T RAD_FR_Obj10_A;
    RAD_FR_Obj10_B_T RAD_FR_Obj10_B;
    RAD_FR_Obj11_A_T RAD_FR_Obj11_A;
    RAD_FR_Obj11_B_T RAD_FR_Obj11_B;
    RAD_FR_Obj12_A_T RAD_FR_Obj12_A;
    RAD_FR_Obj12_B_T RAD_FR_Obj12_B;
    RAD_FR_Obj13_A_T RAD_FR_Obj13_A;
    RAD_FR_Obj13_B_T RAD_FR_Obj13_B;
    RAD_FR_Obj14_A_T RAD_FR_Obj14_A;
    RAD_FR_Obj14_B_T RAD_FR_Obj14_B;
    RAD_FR_Obj15_A_T RAD_FR_Obj15_A;
    RAD_FR_Obj15_B_T RAD_FR_Obj15_B;
    RAD_FR_Obj16_A_T RAD_FR_Obj16_A;
    RAD_FR_Obj16_B_T RAD_FR_Obj16_B;
    RAD_FR_Obj17_A_T RAD_FR_Obj17_A;
    RAD_FR_Obj17_B_T RAD_FR_Obj17_B;
    RAD_FR_Obj18_A_T RAD_FR_Obj18_A;
    RAD_FR_Obj18_B_T RAD_FR_Obj18_B;
    RAD_FR_Obj19_A_T RAD_FR_Obj19_A;
    RAD_FR_Obj19_B_T RAD_FR_Obj19_B;
    RAD_FR_Obj20_A_T RAD_FR_Obj20_A;
    RAD_FR_Obj20_B_T RAD_FR_Obj20_B;
    RAD_FR_Obj21_A_T RAD_FR_Obj21_A;
    RAD_FR_Obj21_B_T RAD_FR_Obj21_B;
    RAD_FR_Obj22_A_T RAD_FR_Obj22_A;
    RAD_FR_Obj22_B_T RAD_FR_Obj22_B;
    RAD_FR_Obj23_A_T RAD_FR_Obj23_A;
    RAD_FR_Obj23_B_T RAD_FR_Obj23_B;
    RAD_FR_Obj24_A_T RAD_FR_Obj24_A;
    RAD_FR_Obj24_B_T RAD_FR_Obj24_B;
    RAD_FR_Obj25_A_T RAD_FR_Obj25_A;
    RAD_FR_Obj25_B_T RAD_FR_Obj25_B;
    RAD_FR_Obj26_A_T RAD_FR_Obj26_A;
    RAD_FR_Obj26_B_T RAD_FR_Obj26_B;
    RAD_FR_Obj27_A_T RAD_FR_Obj27_A;
    RAD_FR_Obj27_B_T RAD_FR_Obj27_B;
    RAD_FR_Obj28_A_T RAD_FR_Obj28_A;
    RAD_FR_Obj28_B_T RAD_FR_Obj28_B;
    RAD_FR_Obj29_A_T RAD_FR_Obj29_A;
    RAD_FR_Obj29_B_T RAD_FR_Obj29_B;
    RAD_FR_Obj30_A_T RAD_FR_Obj30_A;
    RAD_FR_Obj30_B_T RAD_FR_Obj30_B;
    RAD_FR_Obj31_A_T RAD_FR_Obj31_A;
    RAD_FR_Obj31_B_T RAD_FR_Obj31_B;
    RAD_FR_Object_Ender_T RAD_FR_Object_Ender;
    RAD_FR_Object_Starter_T RAD_FR_Object_Starter;
    RAD_FR_Status_T RAD_FR_Status;
} MRRcorner_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj00_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj00_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj00_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj00_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj00_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj00_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj01_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj01_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj01_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj01_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj01_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj01_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj02_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj02_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj02_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj02_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj02_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj02_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj03_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj03_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj03_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj03_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj03_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj03_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj04_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj04_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj04_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj04_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj04_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj04_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj05_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj05_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj05_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj05_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj05_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj05_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj06_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj06_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj06_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj06_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj06_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj06_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj07_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj07_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj07_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj07_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj07_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj07_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj08_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj08_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj08_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj08_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj08_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj08_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj09_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj09_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj09_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj09_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj09_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj09_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj10_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj10_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj10_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj10_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj10_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj10_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj11_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj11_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj11_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj11_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj11_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj11_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj12_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj12_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj12_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj12_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj12_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj12_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj13_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj13_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj13_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj13_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj13_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj13_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj14_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj14_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj14_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj14_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj14_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj14_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj15_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj15_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj15_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj15_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj15_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj15_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj16_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj16_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj16_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj16_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj16_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj16_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj17_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj17_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj17_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj17_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj17_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj17_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj18_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj18_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj18_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj18_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj18_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj18_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj19_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj19_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj19_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj19_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj19_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj19_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj20_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj20_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj20_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj20_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj20_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj20_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj21_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj21_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj21_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj21_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj21_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj21_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj22_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj22_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj22_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj22_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj22_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj22_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj23_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj23_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj23_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj23_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj23_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj23_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj24_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj24_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj24_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj24_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj24_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj24_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj25_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj25_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj25_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj25_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj25_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj25_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj26_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj26_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj26_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj26_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj26_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj26_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj27_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj27_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj27_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj27_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj27_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj27_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj28_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj28_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj28_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj28_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj28_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj28_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj29_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj29_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj29_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj29_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj29_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj29_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj30_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj30_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj30_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj30_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj30_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj30_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj31_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj31_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RL_Obj31_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Obj31_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Obj31_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RL_Obj31_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Object_Ender_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Object_Ender_T_

typedef struct {
    real_T RAD_RL_MessEnderConsistBit;
    real_T RAD_RL_Object_Ender_CRC;
    real_T RAD_RL_TCCounter;
    real_T RAD_RL_timestamp;
} RAD_RL_Object_Ender_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Object_Starter_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Object_Starter_T_

typedef struct {
    real_T RAD_RL_MessStarterConsistBit;
    real_T RAD_RL_Veh_aEgo;
    real_T RAD_RL_Veh_psiDt;
    real_T RAD_RL_Veh_slipAngle;
    real_T RAD_RL_Veh_vEgo;
} RAD_RL_Object_Starter_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RL_Status_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RL_Status_T_

typedef struct {
    real_T RAD_RL_Stat_AbsorptionBlindness;
    real_T RAD_RL_Stat_DistortionBlindness;
    real_T RAD_RL_Stat_HWFail;
    real_T RAD_RL_Stat_H_Misalignment;
    real_T RAD_RL_Stat_ITCInfo;
    real_T RAD_RL_Stat_SGUFail;
    real_T RAD_RL_Status_CRC;
    real_T RAD_RL_Status_MsgCntr;
} RAD_RL_Status_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj00_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj00_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj00_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj00_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj00_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj00_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj01_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj01_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj01_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj01_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj01_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj01_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj02_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj02_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj02_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj02_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj02_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj02_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj03_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj03_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj03_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj03_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj03_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj03_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj04_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj04_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj04_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj04_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj04_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj04_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj05_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj05_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj05_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj05_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj05_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj05_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj06_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj06_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj06_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj06_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj06_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj06_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj07_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj07_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj07_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj07_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj07_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj07_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj08_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj08_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj08_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj08_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj08_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj08_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj09_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj09_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj09_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj09_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj09_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj09_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj10_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj10_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj10_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj10_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj10_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj10_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj11_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj11_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj11_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj11_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj11_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj11_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj12_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj12_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj12_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj12_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj12_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj12_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj13_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj13_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj13_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj13_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj13_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj13_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj14_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj14_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj14_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj14_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj14_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj14_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj15_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj15_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj15_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj15_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj15_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj15_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj16_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj16_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj16_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj16_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj16_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj16_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj17_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj17_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj17_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj17_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj17_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj17_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj18_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj18_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj18_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj18_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj18_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj18_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj19_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj19_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj19_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj19_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj19_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj19_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj20_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj20_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj20_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj20_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj20_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj20_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj21_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj21_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj21_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj21_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj21_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj21_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj22_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj22_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj22_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj22_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj22_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj22_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj23_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj23_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj23_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj23_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj23_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj23_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj24_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj24_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj24_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj24_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj24_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj24_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj25_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj25_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj25_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj25_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj25_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj25_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj26_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj26_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj26_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj26_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj26_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj26_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj27_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj27_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj27_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj27_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj27_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj27_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj28_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj28_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj28_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj28_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj28_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj28_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj29_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj29_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj29_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj29_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj29_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj29_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj30_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj30_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj30_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj30_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj30_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj30_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj31_A_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj31_A_T_

typedef struct {
    real_T MessAconsistBit;
    real_T ax;
    real_T dx;
    real_T dy;
    real_T flagHist;
    real_T flagMeas;
    real_T flagValid;
    real_T vx;
    real_T wExist;
    real_T wNonObstacle;
    real_T wObstacle;
} RAD_RR_Obj31_A_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Obj31_B_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Obj31_B_T_

typedef struct {
    real_T MessBconsistBit;
    real_T axSigma;
    real_T stClass;
    real_T dLength;
    real_T dxRearEndLoss;
    real_T dxSigma;
    real_T dySigma;
    real_T dz;
    real_T movingState;
    real_T vxSigma;
    real_T vy;
    real_T wClass;
} RAD_RR_Obj31_B_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Object_Ender_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Object_Ender_T_

typedef struct {
    real_T RAD_RR_MessEnderConsistBit;
    real_T RAD_RR_Object_Ender_CRC;
    real_T RAD_RR_Object_timestamp;
    real_T RAD_RR_TCCounter;
} RAD_RR_Object_Ender_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Object_Starter_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Object_Starter_T_

typedef struct {
    real_T RAD_RR_MessStarterConsistBit;
    real_T RAD_RR_Veh_aEgo;
    real_T RAD_RR_Veh_psiDt;
    real_T RAD_RR_Veh_slipAngle;
    real_T RAD_RR_Veh_vEgo;
} RAD_RR_Object_Starter_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RAD_RR_Status_T_
#define _DEFINED_TYPEDEF_FOR_RAD_RR_Status_T_

typedef struct {
    real_T RAD_RR_ITCInfo;
    real_T RAD_RR_Stat_AbsorptionBlindness;
    real_T RAD_RR_Stat_DistortionBlindness;
    real_T RAD_RR_Stat_HWFail;
    real_T RAD_RR_Stat_H_Misalignment;
    real_T RAD_RR_Stat_SGUFail;
    real_T RAD_RR_Status_CRC;
    real_T RAD_RR_Status_MsgCntr;
} RAD_RR_Status_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_MRRrear_in_T_
#define _DEFINED_TYPEDEF_FOR_MRRrear_in_T_

typedef struct {
    RAD_RL_Obj00_A_T RAD_RL_Obj00_A;
    RAD_RL_Obj00_B_T RAD_RL_Obj00_B;
    RAD_RL_Obj01_A_T RAD_RL_Obj01_A;
    RAD_RL_Obj01_B_T RAD_RL_Obj01_B;
    RAD_RL_Obj02_A_T RAD_RL_Obj02_A;
    RAD_RL_Obj02_B_T RAD_RL_Obj02_B;
    RAD_RL_Obj03_A_T RAD_RL_Obj03_A;
    RAD_RL_Obj03_B_T RAD_RL_Obj03_B;
    RAD_RL_Obj04_A_T RAD_RL_Obj04_A;
    RAD_RL_Obj04_B_T RAD_RL_Obj04_B;
    RAD_RL_Obj05_A_T RAD_RL_Obj05_A;
    RAD_RL_Obj05_B_T RAD_RL_Obj05_B;
    RAD_RL_Obj06_A_T RAD_RL_Obj06_A;
    RAD_RL_Obj06_B_T RAD_RL_Obj06_B;
    RAD_RL_Obj07_A_T RAD_RL_Obj07_A;
    RAD_RL_Obj07_B_T RAD_RL_Obj07_B;
    RAD_RL_Obj08_A_T RAD_RL_Obj08_A;
    RAD_RL_Obj08_B_T RAD_RL_Obj08_B;
    RAD_RL_Obj09_A_T RAD_RL_Obj09_A;
    RAD_RL_Obj09_B_T RAD_RL_Obj09_B;
    RAD_RL_Obj10_A_T RAD_RL_Obj10_A;
    RAD_RL_Obj10_B_T RAD_RL_Obj10_B;
    RAD_RL_Obj11_A_T RAD_RL_Obj11_A;
    RAD_RL_Obj11_B_T RAD_RL_Obj11_B;
    RAD_RL_Obj12_A_T RAD_RL_Obj12_A;
    RAD_RL_Obj12_B_T RAD_RL_Obj12_B;
    RAD_RL_Obj13_A_T RAD_RL_Obj13_A;
    RAD_RL_Obj13_B_T RAD_RL_Obj13_B;
    RAD_RL_Obj14_A_T RAD_RL_Obj14_A;
    RAD_RL_Obj14_B_T RAD_RL_Obj14_B;
    RAD_RL_Obj15_A_T RAD_RL_Obj15_A;
    RAD_RL_Obj15_B_T RAD_RL_Obj15_B;
    RAD_RL_Obj16_A_T RAD_RL_Obj16_A;
    RAD_RL_Obj16_B_T RAD_RL_Obj16_B;
    RAD_RL_Obj17_A_T RAD_RL_Obj17_A;
    RAD_RL_Obj17_B_T RAD_RL_Obj17_B;
    RAD_RL_Obj18_A_T RAD_RL_Obj18_A;
    RAD_RL_Obj18_B_T RAD_RL_Obj18_B;
    RAD_RL_Obj19_A_T RAD_RL_Obj19_A;
    RAD_RL_Obj19_B_T RAD_RL_Obj19_B;
    RAD_RL_Obj20_A_T RAD_RL_Obj20_A;
    RAD_RL_Obj20_B_T RAD_RL_Obj20_B;
    RAD_RL_Obj21_A_T RAD_RL_Obj21_A;
    RAD_RL_Obj21_B_T RAD_RL_Obj21_B;
    RAD_RL_Obj22_A_T RAD_RL_Obj22_A;
    RAD_RL_Obj22_B_T RAD_RL_Obj22_B;
    RAD_RL_Obj23_A_T RAD_RL_Obj23_A;
    RAD_RL_Obj23_B_T RAD_RL_Obj23_B;
    RAD_RL_Obj24_A_T RAD_RL_Obj24_A;
    RAD_RL_Obj24_B_T RAD_RL_Obj24_B;
    RAD_RL_Obj25_A_T RAD_RL_Obj25_A;
    RAD_RL_Obj25_B_T RAD_RL_Obj25_B;
    RAD_RL_Obj26_A_T RAD_RL_Obj26_A;
    RAD_RL_Obj26_B_T RAD_RL_Obj26_B;
    RAD_RL_Obj27_A_T RAD_RL_Obj27_A;
    RAD_RL_Obj27_B_T RAD_RL_Obj27_B;
    RAD_RL_Obj28_A_T RAD_RL_Obj28_A;
    RAD_RL_Obj28_B_T RAD_RL_Obj28_B;
    RAD_RL_Obj29_A_T RAD_RL_Obj29_A;
    RAD_RL_Obj29_B_T RAD_RL_Obj29_B;
    RAD_RL_Obj30_A_T RAD_RL_Obj30_A;
    RAD_RL_Obj30_B_T RAD_RL_Obj30_B;
    RAD_RL_Obj31_A_T RAD_RL_Obj31_A;
    RAD_RL_Obj31_B_T RAD_RL_Obj31_B;
    RAD_RL_Object_Ender_T RAD_RL_Object_Ender;
    RAD_RL_Object_Starter_T RAD_RL_Object_Starter;
    RAD_RL_Status_T RAD_RL_Status;
    RAD_RR_Obj00_A_T RAD_RR_Obj00_A;
    RAD_RR_Obj00_B_T RAD_RR_Obj00_B;
    RAD_RR_Obj01_A_T RAD_RR_Obj01_A;
    RAD_RR_Obj01_B_T RAD_RR_Obj01_B;
    RAD_RR_Obj02_A_T RAD_RR_Obj02_A;
    RAD_RR_Obj02_B_T RAD_RR_Obj02_B;
    RAD_RR_Obj03_A_T RAD_RR_Obj03_A;
    RAD_RR_Obj03_B_T RAD_RR_Obj03_B;
    RAD_RR_Obj04_A_T RAD_RR_Obj04_A;
    RAD_RR_Obj04_B_T RAD_RR_Obj04_B;
    RAD_RR_Obj05_A_T RAD_RR_Obj05_A;
    RAD_RR_Obj05_B_T RAD_RR_Obj05_B;
    RAD_RR_Obj06_A_T RAD_RR_Obj06_A;
    RAD_RR_Obj06_B_T RAD_RR_Obj06_B;
    RAD_RR_Obj07_A_T RAD_RR_Obj07_A;
    RAD_RR_Obj07_B_T RAD_RR_Obj07_B;
    RAD_RR_Obj08_A_T RAD_RR_Obj08_A;
    RAD_RR_Obj08_B_T RAD_RR_Obj08_B;
    RAD_RR_Obj09_A_T RAD_RR_Obj09_A;
    RAD_RR_Obj09_B_T RAD_RR_Obj09_B;
    RAD_RR_Obj10_A_T RAD_RR_Obj10_A;
    RAD_RR_Obj10_B_T RAD_RR_Obj10_B;
    RAD_RR_Obj11_A_T RAD_RR_Obj11_A;
    RAD_RR_Obj11_B_T RAD_RR_Obj11_B;
    RAD_RR_Obj12_A_T RAD_RR_Obj12_A;
    RAD_RR_Obj12_B_T RAD_RR_Obj12_B;
    RAD_RR_Obj13_A_T RAD_RR_Obj13_A;
    RAD_RR_Obj13_B_T RAD_RR_Obj13_B;
    RAD_RR_Obj14_A_T RAD_RR_Obj14_A;
    RAD_RR_Obj14_B_T RAD_RR_Obj14_B;
    RAD_RR_Obj15_A_T RAD_RR_Obj15_A;
    RAD_RR_Obj15_B_T RAD_RR_Obj15_B;
    RAD_RR_Obj16_A_T RAD_RR_Obj16_A;
    RAD_RR_Obj16_B_T RAD_RR_Obj16_B;
    RAD_RR_Obj17_A_T RAD_RR_Obj17_A;
    RAD_RR_Obj17_B_T RAD_RR_Obj17_B;
    RAD_RR_Obj18_A_T RAD_RR_Obj18_A;
    RAD_RR_Obj18_B_T RAD_RR_Obj18_B;
    RAD_RR_Obj19_A_T RAD_RR_Obj19_A;
    RAD_RR_Obj19_B_T RAD_RR_Obj19_B;
    RAD_RR_Obj20_A_T RAD_RR_Obj20_A;
    RAD_RR_Obj20_B_T RAD_RR_Obj20_B;
    RAD_RR_Obj21_A_T RAD_RR_Obj21_A;
    RAD_RR_Obj21_B_T RAD_RR_Obj21_B;
    RAD_RR_Obj22_A_T RAD_RR_Obj22_A;
    RAD_RR_Obj22_B_T RAD_RR_Obj22_B;
    RAD_RR_Obj23_A_T RAD_RR_Obj23_A;
    RAD_RR_Obj23_B_T RAD_RR_Obj23_B;
    RAD_RR_Obj24_A_T RAD_RR_Obj24_A;
    RAD_RR_Obj24_B_T RAD_RR_Obj24_B;
    RAD_RR_Obj25_A_T RAD_RR_Obj25_A;
    RAD_RR_Obj25_B_T RAD_RR_Obj25_B;
    RAD_RR_Obj26_A_T RAD_RR_Obj26_A;
    RAD_RR_Obj26_B_T RAD_RR_Obj26_B;
    RAD_RR_Obj27_A_T RAD_RR_Obj27_A;
    RAD_RR_Obj27_B_T RAD_RR_Obj27_B;
    RAD_RR_Obj28_A_T RAD_RR_Obj28_A;
    RAD_RR_Obj28_B_T RAD_RR_Obj28_B;
    RAD_RR_Obj29_A_T RAD_RR_Obj29_A;
    RAD_RR_Obj29_B_T RAD_RR_Obj29_B;
    RAD_RR_Obj30_A_T RAD_RR_Obj30_A;
    RAD_RR_Obj30_B_T RAD_RR_Obj30_B;
    RAD_RR_Obj31_A_T RAD_RR_Obj31_A;
    RAD_RR_Obj31_B_T RAD_RR_Obj31_B;
    RAD_RR_Object_Ender_T RAD_RR_Object_Ender;
    RAD_RR_Object_Starter_T RAD_RR_Object_Starter;
    RAD_RR_Status_T RAD_RR_Status;
} MRRrear_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_FeatCfg_in_T_
#define _DEFINED_TYPEDEF_FOR_FeatCfg_in_T_

typedef struct {
    boolean_T FC_flgACCStopGo;
    boolean_T FC_flgAEBVisionOnly;
    boolean_T FC_flgAEBPedestrian;
    boolean_T FC_flgAEBAdvanced;
    boolean_T FC_flgISA;
    boolean_T FC_flgHWA;
    boolean_T FC_flgTJA;
    boolean_T FC_flgFCTA;
    boolean_T FC_flgReserved1;
    boolean_T FC_flgLDW;
    boolean_T FC_flgLKA;
    boolean_T FC_flgLKS;
    boolean_T FC_flgAHBC;
    boolean_T FC_flgTSR;
    boolean_T FC_flgSAPA;
    boolean_T FC_flgReserved2;
} FeatCfg_in_T;

#endif

#ifndef _DEFINED_TYPEDEF_FOR_RDI_outputs_T_
#define _DEFINED_TYPEDEF_FOR_RDI_outputs_T_

typedef struct {
    Chassis_in_T Chassis_in;
    ESR_in_T ESR_in;
    MRRevo_in_T MRRevo_in;
    EPM_in_T EPM_in;
    PD_in_T PD_in;
    TmpRaw_in_T TmpRaw_in;
    ADAS_in_T ADAS_in;
    MRRcorner_in_T MRRcorner_in;
    MRRrear_in_T MRRrear_in;
    FeatCfg_in_T FeatCfg_in;
    FIM_in_T FIM_in;
} RDI_outputs_T;

#endif

// Forward declaration for rtModel
typedef struct tag_RTM_SIN_T RT_MODEL_SIN_T;

#endif                                 // RTW_HEADER_SIN_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
