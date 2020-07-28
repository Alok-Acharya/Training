#include "paramchecker.h"
#include <gtest/gtest.h>
 
TEST(VitalsTest, BPM) { 
    std::vector<float>vitals;
    vitals.push_back(100);
    vitals.push_back(100);
    vitals.push_back(50);
    ASSERT_EQ(true, vitalsAreOk(vitals));
}
 
TEST(VitalsTest, SPO2) {
    std::vector<float>vitals;
    vitals.push_back(100);
    vitals.push_back(90);
    vitals.push_back(50);
    ASSERT_EQ(false, vitalsAreOk(vitals));
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
