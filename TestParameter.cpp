#include "OperatingTempreture.h"
#include  "PartDimension.h"
#include  "OperationDuration.h"
#include  <gtest/gtest.h>
 
TEST(OperatingTempreture , tempreture) { 
    OperatingTempreture  tempreture;
    ASSERT_EQ(true, tempreture.validateOperatingTempreture(30.2));
}
 
TEST(OperatingTempreture , tempreture) { 
    OperatingTempreture  tempreture;
    ASSERT_EQ(true, tempreture.validateOperatingTempreture(35.0));
}

TEST(OperatingTempreture , variation) { 
    OperatingTempreture tempreture;
    ASSERT_EQ(false, tempreture.validateOperatingTempreture(35.9));
}
 
 
TEST(PartDimension, variarion) { 
     PartDimension variaton;
    ASSERT_EQ(true, variaton.validatePartDimensionVariation(0.02));
}

 
TEST(PartDimension, variarion) { 
     PartDimension variaton;
    ASSERT_EQ(true, variaton.validatePartDimensionVariation(0.05));
}

 
TEST(PartDimension, variarion) { 
     PartDimension variaton;
    ASSERT_EQ(false, variaton.validatePartDimensionVariation(0.5));
}

TEST(OperationDuration, duration) { 
    OperationDuration duration;
    ASSERT_EQ(true, duration.checkContineousOperationDuration(0.02));
}

TEST(OperationDuration, duration) { 
     OperationDuration duration;
    ASSERT_EQ(true, variaton.checkContineousOperationDuration(6.0));
}

TEST(OperationDuration, duration) { 
     OperationDuration duration;
    ASSERT_EQ(false, variaton.checkContineousOperationDuration(7));
}
 

 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
