
#include "CNCTempretureMonitor.h"
#include "CNCPartDimensionMonitor.h"
#include  <gtest/gtest.h>
 
CNCMachineHealth _health;
TEST(OperatingTempreture , input_valid) { 
    IValidator _validate;
    EnviornmentFailure _notify;
    CNCTempretureMonitor *CNCTemp = new CNCTempretureMonitor(&_validate,&_notify , &_health);
    CNCTemp->OperatingTempretureUpdate(30.2);
    ASSERT_EQ(CNC_Health::NO_Failure, _health.GetCNCHealth());
}
 
TEST(OperatingTempreture , input_equal) { 
    IValidator _validate;
    EnviornmentFailure _notify;
    CNCTempretureMonitor *CNCTemp = new CNCTempretureMonitor(&_validate,&_notify , &_health);
    CNCTemp->OperatingTempretureUpdate(35.0);
    ASSERT_EQ(CNC_Health::NO_Failure, _health.GetCNCHealth());
}

TEST(OperatingTempreture , input_invalid) { 
    IValidator _validate;
    EnviornmentFailure _notify;
    CNCTempretureMonitor *CNCTemp = new CNCTempretureMonitor(&_validate,&_notify , &_health);
    CNCTemp->OperatingTempretureUpdate(35.9);
    ASSERT_EQ(CNC_Health::Enviornment_Failure, _health.GetCNCHealth());
}
 
 
TEST(PartDimension, input_valid) { 
    IValidator _validate;
    MachineFailureNotification _notify;
    CNCPartDimensionMonitor *CNCPart = new CNCPartDimensionMonitor(&_validate,&_notify , &_health);
    CNCPart->PartDimensionVariationUpdate(0.02);
    ASSERT_EQ(CNC_Health::NO_Failure, _health.GetCNCHealth());
}

 
TEST(PartDimension, input_equal) { 
    IValidator _validate;
    MachineFailureNotification _notify;
    CNCPartDimensionMonitor *CNCPart = new CNCPartDimensionMonitor(&_validate,&_notify , &_health);
    CNCPart->PartDimensionVariationUpdate(0.05);
   ASSERT_EQ(CNC_Health::NO_Failure, _health.GetCNCHealth());
}

 
TEST(PartDimension, input_invalid) { 
    IValidator _validate;
    MachineFailureNotification _notify;
    CNCPartDimensionMonitor *CNCPart = new CNCPartDimensionMonitor(&_validate,&_notify , &_health);
    CNCPart->PartDimensionVariationUpdate(0.5);
    ASSERT_EQ(CNC_Health::Machine_Failure, _health.GetCNCHealth());
}

/*TEST(OperationDuration, input_valid) { 
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

TEST(SelfTestStatus, input_valid) { 
     SelfTestStatus selfteststatus;
    ASSERT_EQ(true, selfteststatus.ValidateStatusCode(0xFF));
}
 
TEST(SelfTestStatus, input_invalid) { 
     SelfTestStatus selfteststatus;
    ASSERT_EQ(false, selfteststatus.ValidateStatusCode(0x02));
}*/

 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
