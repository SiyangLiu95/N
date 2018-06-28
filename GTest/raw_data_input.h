#ifndef RAW_DATA_INPUT__H_
#define RAW_DATA_INPUT__H_

extern void RDI_ADAS_CAN(void);
extern void RDI_Chassis_CAN(void);
extern void RDI_PD_CAN(void);
extern void RDI_TempInput(void);
extern void RDI_EPM_CAN(void);
extern void RDI_ESR_CAN(void);
extern void RDI_RADFC_CAN(void);
extern void RDI_RADFLR_CAN(void);
extern void RDI_RADRLR_CAN(void);

extern void RDI_FIM_(void);
extern void RDI_FCM_(void);


#endif