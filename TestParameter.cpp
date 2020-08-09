#include "OperatingTempreture.h"
#include  "PartDimension.h"
#include  "OperationDuration.h"
#include  <gtest/gtest.h>
 
TEST(OperatingTempreture , input) { 
    OperatingTempreture  tempreture;
    ASSERT_EQ(true, tempreture.validateOperatingTempreture(30.2));
}
 
/*TEST(OperatingTempreture , input) { 
    OperatingTempreture  tempreture;
    ASSERT_EQ(true, tempreture.validateOperatingTempreture(35.0));
}

TEST(OperatingTempreture , input) { 
    OperatingTempreture tempreture;
    ASSERT_EQ(false, tempreture.validateOperatingTempreture(35.9));
}
 
 
TEST(PartDimension, input) { 
     PartDimension variaton;
    ASSERT_EQ(true, variaton.validatePartDimensionVariation(0.02));
}

 
TEST(PartDimension, input) { 
     PartDimension variaton;
    ASSERT_EQ(true, variaton.validatePartDimensionVariation(0.05));
}*/

 
TEST(PartDimension, input) { 
     PartDimension variaton;
    ASSERT_EQ(false, variaton.validatePartDimensionVariation(0.5));
}

TEST(OperationDuration, input) { 
    OperationDuration duration;
    ASSERT_EQ(true, duration.checkContineousOperationDuration(0.02));
}

TEST(OperationDuration, input) { 
     OperationDuration duration;
    ASSERT_EQ(true, variaton.checkContineousOperationDuration(6.0));
}

/*TEST(OperationDuration, input) { 
     OperationDuration duration;
    ASSERT_EQ(false, variaton.checkContineousOperationDuration(7));
}*/
 

 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
