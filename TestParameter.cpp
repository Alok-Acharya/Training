#include "OperatingTempreture.h"
#include  "PartDimension.h"
#include  "OperationDuration.h"
#include  <gtest/gtest.h>
 
TEST(OperatingTempreture , input_valid) { 
    OperatingTempreture  tempreture;
    ASSERT_EQ(true, tempreture.validateOperatingTempreture(30.2));
}
 
TEST(OperatingTempreture , input_equal) { 
    OperatingTempreture  tempreture;
    ASSERT_EQ(true, tempreture.validateOperatingTempreture(35.0));
}

TEST(OperatingTempreture , input_invalid) { 
    OperatingTempreture tempreture;
    ASSERT_EQ(false, tempreture.validateOperatingTempreture(35.9));
}
 
 
TEST(PartDimension, input_valid) { 
     PartDimension variaton;
    ASSERT_EQ(true, variaton.validatePartDimensionVariation(0.02));
}

 
TEST(PartDimension, input_equal) { 
     PartDimension variaton;
    ASSERT_EQ(true, variaton.validatePartDimensionVariation(0.05));
}

 
TEST(PartDimension, input_) { 
     PartDimension variaton;
    ASSERT_EQ(false, variaton.validatePartDimensionVariation(0.5));
}

TEST(OperationDuration, input_valid) { 
    OperationDuration duration;
    ASSERT_EQ(true, duration.checkContineousOperationDuration(0.02));
}

TEST(OperationDuration, input_equal) { 
     OperationDuration duration;
    ASSERT_EQ(true, duration.checkContineousOperationDuration(6.0));
}

TEST(OperationDuration, input_invalid) { 
     OperationDuration duration;
    ASSERT_EQ(false, duration.checkContineousOperationDuration(7));
}
 

 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
