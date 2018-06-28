#include "dbcparser.h"

double Reserved_1_41_CAN2;
double Application_Message_Version_41_CAN2;
double Main_State_41_CAN2;
double Sub_State_41_CAN2;
double EyeQ_Process_Index_41_CAN2;
double EyeQ_Timestamp_41_CAN2;
double EyeQ_Current_Timestamp_41_CAN2;
double Application_Diagnostics_part_1_41_CAN2;
double Application_Diagnostics_part_2_41_CAN2;
double Fatal_Error_41_CAN2;
double Reserved_2_41_CAN2;
double Minor_Error_41_CAN2;
double EyeQTemperature1_41_CAN2;
double EyeQTemperature2_41_CAN2;
double Temperture_DDR_41_CAN2;
double Reserved_4_41_CAN2;
double CFG_status_41_CAN2;
double spiHealthStatus_41_CAN2;
double spiErrors_41_CAN2;
double Reserved_5_41_CAN2;
double Valid_cameras_information_41_CAN2;
double Camera1_temperature_41_CAN2;
double Camera2_temperature_41_CAN2;
double Camera3_temperature_41_CAN2;
double Camera4_temperature_41_CAN2;
double Camera5_temperature_41_CAN2;
double Camera6_temperature_41_CAN2;
double Camera7_temperature_41_CAN2;
double Camera8_temperature_41_CAN2;
double Camera1_VideoErrorRange_41_CAN2;
double Camera2_VideoErrorRange_41_CAN2;
double Camera3_VideoErrorRange_41_CAN2;
double Camera4_VideoErrorRange_41_CAN2;
double Camera5_VideoErrorRange_41_CAN2;
double Camera6_VideoErrorRange_41_CAN2;
double Camera7_VideoErrorRange_41_CAN2;
double Camera8_VideoErrorRange_41_CAN2;
double Camera1_VideoErrorFlags_pt1_41_CAN2;
double Camera2_VideoErrorFlags_pt1_41_CAN2;
double Camera3_VideoErrorFlags_pt1_41_CAN2;
double Camera4_VideoErrorFlags_pt1_41_CAN2;
double Camera5_VideoErrorFlags_pt1_41_CAN2;
double Camera6_VideoErrorFlags_pt1_41_CAN2;
double Camera7_VideoErrorFlags_pt1_41_CAN2;
double Camera8_VideoErrorFlags_pt1_41_CAN2;
double Camera1_VideoErrorFlags_pt2_41_CAN2;
double Camera2_VideoErrorFlags_pt2_41_CAN2;
double Camera3_VideoErrorFlags_pt2_41_CAN2;
double Camera4_VideoErrorFlags_pt2_41_CAN2;
double Camera5_VideoErrorFlags_pt2_41_CAN2;
double Camera6_VideoErrorFlags_pt2_41_CAN2;
double Camera7_VideoErrorFlags_pt2_41_CAN2;
double Camera8_VideoErrorFlags_pt2_41_CAN2;
uint8 EyeQ4_Application_Message_0x41_41_Buffer_CAN2[116];
uint8 EyeQ4_Application_Message_0x41_41_RxFlag_CAN2;
uint32 EyeQ4_Application_Message_0x41_41_AgeCounter_CAN2;
uint16 EyeQ4_Application_Message_0x41_41_TimeCounter_CAN2;

volatile const DbcParserSignalTblType TBL_DP_CAN2_41_SIGNALLIST[] =
{
	{(AddrType)&Reserved_1_41_CAN2, DP_SIGNALTYPE_FLOAT, 7, 8, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 0.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Application_Message_Version_41_CAN2, DP_SIGNALTYPE_FLOAT, 15, 8, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 2.0, 2.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Main_State_41_CAN2, DP_SIGNALTYPE_FLOAT, 23, 8, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 255.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Sub_State_41_CAN2, DP_SIGNALTYPE_FLOAT, 31, 8, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 255.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&EyeQ_Process_Index_41_CAN2, DP_SIGNALTYPE_FLOAT, 39, 32, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 4294967295.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&EyeQ_Timestamp_41_CAN2, DP_SIGNALTYPE_FLOAT, 71, 32, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 4294967295.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&EyeQ_Current_Timestamp_41_CAN2, DP_SIGNALTYPE_FLOAT, 103, 32, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 4294967295.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Application_Diagnostics_part_1_41_CAN2, DP_SIGNALTYPE_FLOAT, 135, 16, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 65535.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Application_Diagnostics_part_2_41_CAN2, DP_SIGNALTYPE_FLOAT, 151, 16, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 65535.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Fatal_Error_41_CAN2, DP_SIGNALTYPE_FLOAT, 167, 8, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 129.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Reserved_2_41_CAN2, DP_SIGNALTYPE_FLOAT, 175, 8, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 0.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Minor_Error_41_CAN2, DP_SIGNALTYPE_FLOAT, 183, 16, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 5014.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&EyeQTemperature1_41_CAN2, DP_SIGNALTYPE_FLOAT, 199, 16, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, -128.0, 127.0, DP_SIGNTYPE_SIGNED},
	{(AddrType)&EyeQTemperature2_41_CAN2, DP_SIGNALTYPE_FLOAT, 215, 16, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, -128.0, 127.0, DP_SIGNTYPE_SIGNED},
	{(AddrType)&Temperture_DDR_41_CAN2, DP_SIGNALTYPE_FLOAT, 231, 8, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, -1.0, 7.0, DP_SIGNTYPE_SIGNED},
	{(AddrType)&Reserved_4_41_CAN2, DP_SIGNALTYPE_FLOAT, 239, 8, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 0.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&CFG_status_41_CAN2, DP_SIGNALTYPE_FLOAT, 247, 16, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 65535.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&spiHealthStatus_41_CAN2, DP_SIGNALTYPE_FLOAT, 263, 8, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 255.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&spiErrors_41_CAN2, DP_SIGNALTYPE_FLOAT, 271, 8, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 255.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Reserved_5_41_CAN2, DP_SIGNALTYPE_FLOAT, 279, 8, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 0.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Valid_cameras_information_41_CAN2, DP_SIGNALTYPE_FLOAT, 287, 8, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 7.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Camera1_temperature_41_CAN2, DP_SIGNALTYPE_FLOAT, 295, 8, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, -128.0, 127.0, DP_SIGNTYPE_SIGNED},
	{(AddrType)&Camera2_temperature_41_CAN2, DP_SIGNALTYPE_FLOAT, 303, 8, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, -128.0, 127.0, DP_SIGNTYPE_SIGNED},
	{(AddrType)&Camera3_temperature_41_CAN2, DP_SIGNALTYPE_FLOAT, 311, 8, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, -128.0, 127.0, DP_SIGNTYPE_SIGNED},
	{(AddrType)&Camera4_temperature_41_CAN2, DP_SIGNALTYPE_FLOAT, 319, 8, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, -128.0, 127.0, DP_SIGNTYPE_SIGNED},
	{(AddrType)&Camera5_temperature_41_CAN2, DP_SIGNALTYPE_FLOAT, 327, 8, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, -128.0, 127.0, DP_SIGNTYPE_SIGNED},
	{(AddrType)&Camera6_temperature_41_CAN2, DP_SIGNALTYPE_FLOAT, 335, 8, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, -128.0, 127.0, DP_SIGNTYPE_SIGNED},
	{(AddrType)&Camera7_temperature_41_CAN2, DP_SIGNALTYPE_FLOAT, 343, 8, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, -128.0, 127.0, DP_SIGNTYPE_SIGNED},
	{(AddrType)&Camera8_temperature_41_CAN2, DP_SIGNALTYPE_FLOAT, 351, 8, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, -128.0, 127.0, DP_SIGNTYPE_SIGNED},
	{(AddrType)&Camera1_VideoErrorRange_41_CAN2, DP_SIGNALTYPE_FLOAT, 359, 8, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 255.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Camera2_VideoErrorRange_41_CAN2, DP_SIGNALTYPE_FLOAT, 367, 8, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 255.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Camera3_VideoErrorRange_41_CAN2, DP_SIGNALTYPE_FLOAT, 375, 8, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 255.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Camera4_VideoErrorRange_41_CAN2, DP_SIGNALTYPE_FLOAT, 383, 8, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 255.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Camera5_VideoErrorRange_41_CAN2, DP_SIGNALTYPE_FLOAT, 391, 8, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 255.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Camera6_VideoErrorRange_41_CAN2, DP_SIGNALTYPE_FLOAT, 399, 8, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 255.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Camera7_VideoErrorRange_41_CAN2, DP_SIGNALTYPE_FLOAT, 407, 8, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 255.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Camera8_VideoErrorRange_41_CAN2, DP_SIGNALTYPE_FLOAT, 415, 8, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 255.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Camera1_VideoErrorFlags_pt1_41_CAN2, DP_SIGNALTYPE_FLOAT, 423, 32, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 4294967295.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Camera2_VideoErrorFlags_pt1_41_CAN2, DP_SIGNALTYPE_FLOAT, 455, 32, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 4294967295.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Camera3_VideoErrorFlags_pt1_41_CAN2, DP_SIGNALTYPE_FLOAT, 487, 32, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 4294967295.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Camera4_VideoErrorFlags_pt1_41_CAN2, DP_SIGNALTYPE_FLOAT, 519, 32, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 4294967295.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Camera5_VideoErrorFlags_pt1_41_CAN2, DP_SIGNALTYPE_FLOAT, 551, 32, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 4294967295.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Camera6_VideoErrorFlags_pt1_41_CAN2, DP_SIGNALTYPE_FLOAT, 583, 32, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 4294967295.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Camera7_VideoErrorFlags_pt1_41_CAN2, DP_SIGNALTYPE_FLOAT, 615, 32, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 4294967295.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Camera8_VideoErrorFlags_pt1_41_CAN2, DP_SIGNALTYPE_FLOAT, 647, 32, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 4294967295.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Camera1_VideoErrorFlags_pt2_41_CAN2, DP_SIGNALTYPE_FLOAT, 679, 32, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 4294967295.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Camera2_VideoErrorFlags_pt2_41_CAN2, DP_SIGNALTYPE_FLOAT, 711, 32, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 4294967295.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Camera3_VideoErrorFlags_pt2_41_CAN2, DP_SIGNALTYPE_FLOAT, 743, 32, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 4294967295.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Camera4_VideoErrorFlags_pt2_41_CAN2, DP_SIGNALTYPE_FLOAT, 775, 32, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 4294967295.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Camera5_VideoErrorFlags_pt2_41_CAN2, DP_SIGNALTYPE_FLOAT, 807, 32, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 4294967295.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Camera6_VideoErrorFlags_pt2_41_CAN2, DP_SIGNALTYPE_FLOAT, 839, 32, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 4294967295.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Camera7_VideoErrorFlags_pt2_41_CAN2, DP_SIGNALTYPE_FLOAT, 871, 32, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 4294967295.0, DP_SIGNTYPE_UNSIGNED},
	{(AddrType)&Camera8_VideoErrorFlags_pt2_41_CAN2, DP_SIGNALTYPE_FLOAT, 903, 32, DP_BYTEORDER_MOTOROLA, 1.0, 0.0, 0.0, 4294967295.0, DP_SIGNTYPE_UNSIGNED},
};
volatile const uint16 u8s_dp_CAN2_41_SignalTblSize = (uint16)(sizeof(TBL_DP_CAN2_41_SIGNALLIST) / sizeof(DbcParserSignalTblType));

DbcParserMsgTblType TBL_DP_DBCMSGLIST_EyeQ4_Application_Message[] =
{
	{0x41, DP_MSGDIR_RX, DP_PERIODICMACRO, 0, (AddrType)TBL_DP_CAN2_41_SIGNALLIST, u8s_dp_CAN2_41_SignalTblSize, 2, EyeQ4_Application_Message_0x41_41_Buffer_CAN2, &EyeQ4_Application_Message_0x41_41_RxFlag_CAN2, &EyeQ4_Application_Message_0x41_41_AgeCounter_CAN2, &EyeQ4_Application_Message_0x41_41_TimeCounter_CAN2, 116, DP_MSGKIND_NORMAL},
};
uint16 u16s_dp_MsgTblSize_EyeQ4_Application_Message = (uint16)(sizeof(TBL_DP_DBCMSGLIST_EyeQ4_Application_Message) / sizeof(DbcParserMsgTblType ));