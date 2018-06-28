/*
 * dbcparser.h
 *
 *  Created on: 2016-9-16
 *      Author: pengsiwei
 */

#ifndef DBCPARSER_H_
#define DBCPARSER_H_

#include "can_type.h"

#ifndef uint8
typedef signed char         sint8;          /*        -128 .. +127            */
typedef unsigned char       uint8;          /*           0 .. 255             */
typedef signed short        sint16;         /*      -32768 .. +32767          */
typedef unsigned short      uint16;         /*           0 .. 65535           */
typedef signed long         sint32;         /* -2147483648 .. +2147483647     */
typedef unsigned long       uint32;         /*           0 .. 4294967295      */
typedef unsigned long long	uint64;
typedef signed long long	sint64;
typedef float               float32;
typedef double              float64;
#endif

#ifndef ON
#define ON 1
#endif

#ifndef OFF
#define OFF 0
#endif

#define DP_SIGNALTYPE_BOOL		((uint8)0)
#define DP_SIGNALTYPE_UINT8		((uint8)1)
#define DP_SIGNALTYPE_UINT16	((uint8)2)
#define DP_SIGNALTYPE_UINT32	((uint8)3)
#define DP_SIGNALTYPE_SINT8		((uint8)4)
#define DP_SIGNALTYPE_SINT16	((uint8)5)
#define DP_SIGNALTYPE_SINT32	((uint8)6)
#define DP_SIGNALTYPE_FLOAT		((uint8)7)
#define DP_SIGNALTYPE_IEEEFLOAT	((uint8)8)
#define DP_SIGNALTYPE_IEEEDOUBLE	((uint8)9)

#define DP_MSGDIR_RX			((uint8)0)
#define DP_MSGDIR_TX			((uint8)1)

#define DP_BYTEORDER_MOTOROLA	((uint8)0)
#define DP_BYTEORDER_INTEL		((uint8)1)

#define DP_SIGNTYPE_UNSIGNED	((uint8)0)
#define DP_SIGNTYPE_SIGNED		((uint8)1)

typedef unsigned long long AddrType;

#define DP_RXMAINFUNCTION_PEIROD	((uint8)5)
#define DP_TXMAINFUNCTION_PERIOD	((uint8)10)

#define DP_MSGKIND_NORMAL 0
#define DP_MSGKIND_GROUP 1

#define DP_PERIODICMACRO 0x01

typedef struct
{
	AddrType	ad_Addr;	/* 信号地址 */
	uint8	u8_Type;		/* 数据类型 */
	uint16	u8_StartBit;
	uint8	u8_DataLen;
	uint8	u8_ByteOrder;
	float	f32_Factor;		/* Factor */
	float	f32_Offset;		/* Offset */
	float	f32_Min;		/* 物理值最小值 */
	float	f32_Max;		/* 物理值最大值 */
	uint8	u8_SignType;	/* 是否是有符号类型 */
}DbcParserSignalTblType;

typedef struct
{
	uint32 u32_CanId;									/* MsgCanId */
	uint8  u8_Dir;										/* 方向：接受还是发送 */
	uint8  u8_SendType;									/* 发送类型 */
	uint16 u16_Period;									/* 周期 */
	//volatile const DbcParserSignalTblType * pt_SignalTbl;				/* 信号表地址 */
	AddrType pt_SignalTbl;				/* 信号表地址 */
	uint16 u16_TblSize;									/* 信号多少 */
	uint8  u8_Channel;									/* 通道 */
	uint8 * pt_Buffer;									/* 使用缓存 */
	uint8 * pt_RxFlag;									/* 接受置位Flag，仅接受方向有效 */
	uint32 * pt_AgeCounter;								/* 计时器 */
	uint16 * pt_TimerCounter;
	uint16 u16_MsgLen;
	uint8 u8_MsgParseType;								/* 0=普通，1=分GroupId*/
}DbcParserMsgTblType;

typedef enum
{
	INIT_CAN,
	INIT_SPI
} DbcParserInitDeviceType;

#ifdef __cplusplus
extern "C"{
#endif


#ifdef __cplusplus
}
#endif

#endif /* ECAL_COM_DBCPARSER_H_ */
