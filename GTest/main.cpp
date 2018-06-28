#include <iostream>
#include <gtest/gtest.h>
#include "global_variables/dbc_cfg.h"
#include "data_types.h"
#include "signal_process_module_processed.h"


using namespace std;

ADAS_in_T ADAS_in;
Chassis_in_T Chassis_in;
PD_in_T PD_in;
TmpRaw_in_T TmpRaw_in;
EPM_in_T EPM_in;
ESR_in_T ESR_in;
MRRevo_in_T MRRevo_in;
MRRcorner_in_T MRRcorner_in;
MRRrear_in_T MRRrear_in;
SIN_outputs_T SIN_out;



TEST(varTest, TrivialTest)
{
EXPECT_EQ(1, 1);
}

// TEST(varTest, Test1)
// {
// EXPECT_EQ(SIN_out.Sens_out.IMU_in.IMU_Acc.IMU_aVehLatAcc, LatA_3D_CAN0);
// }

// TEST(varTest, Test2)
// {
// EXPECT_EQ(SIN_out.Sens_out.IMU_in.IMU_Acc.IMU_aVehLongAcc, LgtA_3E_CAN0);
// }

// TEST(varTest, Test3)
// {
// EXPECT_EQ(SIN_out.Sens_out.IMU_in.IMU_AngularRate.IMU_dphiYawRate, YawRate_3D_CAN0);
// }

// TEST(varTest, Test4)
// {
// EXPECT_EQ(SIN_out.Sens_out.USS_in.USS_Front.USS_lDstFR, (unsigned char)FrntLeMidRegnDst_28A_CAN4);
// }

TEST(varTest, Test5)
{
    for (int i = 0; i < 100; i++ ){
        double FrntRiMidRegnDst_28A_CAN4 = i;
        SIN_Arbiter_();
        EXPECT_EQ(i, SIN_out.Sens_out.USS_in.USS_Front.USS_lDstFL);

    }
}

int main(int argc, char **argv)
{
testing::InitGoogleTest(&argc, argv);
return RUN_ALL_TESTS();
}