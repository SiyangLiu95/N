#include <iostream>
#include <gtest/gtest.h>
#include "global_variables/dbc_cfg.h"

using namespace std;


TEST(varTest, TestNum1)
{
EXPECT_EQ(1, 1);
}

int main(int argc, char **argv)
{
testing::InitGoogleTest(&argc, argv);
return RUN_ALL_TESTS();
}