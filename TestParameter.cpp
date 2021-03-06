
#include "CNCTempretureMonitor.h"
#include "CNCPartDimensionMonitor.h"
#include "CNCOperationDurationMonitor.h"
#include "CNCSelfTestStatusMonitor.h"
#include "CNCSelfTestValidator.h"
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
    MachineFailure _notify;
    CNCPartDimensionMonitor *CNCPart = new CNCPartDimensionMonitor(&_validate,&_notify , &_health);
    CNCPart->PartDimensionVariationUpdate(0.02);
    ASSERT_EQ(CNC_Health::NO_Failure, _health.GetCNCHealth());
}

 
TEST(PartDimension, input_equal) { 
    IValidator _validate;
    MachineFailure _notify;
    CNCPartDimensionMonitor *CNCPart = new CNCPartDimensionMonitor(&_validate,&_notify , &_health);
    CNCPart->PartDimensionVariationUpdate(0.05);
   ASSERT_EQ(CNC_Health::NO_Failure, _health.GetCNCHealth());
}

 
TEST(PartDimension, input_invalid) { 
    IValidator _validate;
    MachineFailure _notify;
    CNCPartDimensionMonitor *CNCPart = new CNCPartDimensionMonitor(&_validate,&_notify , &_health);
    CNCPart->PartDimensionVariationUpdate(0.5);
    ASSERT_EQ(CNC_Health::Machine_Failure, _health.GetCNCHealth());
}

TEST(OperationDuration, input_valid) { 
    IValidator _validate;
    MachineFailure _notify;
    CNCOperationDurationMonitor *CNCduration = new CNCOperationDurationMonitor(&_validate,&_notify , &_health);
    CNCduration->OperationDurationUpdate(200);
    ASSERT_EQ(CNC_Health::NO_Failure, _health.GetCNCHealth());
}

TEST(OperationDuration, input_equal) { 
    IValidator _validate;
    MachineFailure _notify;
    CNCOperationDurationMonitor *CNCduration = new CNCOperationDurationMonitor(&_validate,&_notify , &_health);
    CNCduration->OperationDurationUpdate(360);
   ASSERT_EQ(CNC_Health::NO_Failure, _health.GetCNCHealth());
}

TEST(OperationDuration, input_invalid) { 
    IValidator _validate;
    MachineFailure _notify;
    CNCOperationDurationMonitor *CNCduration = new CNCOperationDurationMonitor(&_validate,&_notify , &_health);
      CNCduration->OperationDurationUpdate(390);
    ASSERT_EQ(CNC_Health::Machine_Failure, _health.GetCNCHealth());
}

TEST(SelfTestStatus, input_valid) { 
    DignosisFailure _notify;
    CNCSelfTestValidator *selfTestValidator = new CNCSelfTestValidator(&_notify);
    CNCSelfTestStatusMonitor *CNCSelfStatus = new CNCSelfTestStatusMonitor(selfTestValidator,&_health);
    CNCSelfStatus->SelftestStatusUpdate(0xff);
    ASSERT_EQ(CNC_Health::NO_Failure, _health.GetCNCHealth());
}
 
TEST(SelfTestStatus, input_invalid) { 
    DignosisFailure _notify;
    CNCSelfTestValidator *selfTestValidator = new CNCSelfTestValidator(&_notify);
    CNCSelfTestStatusMonitor *CNCSelfStatus = new CNCSelfTestStatusMonitor(selfTestValidator,&_health);
    CNCSelfStatus->SelftestStatusUpdate(0x02);
    ASSERT_EQ(CNC_Health::DIGNOSIS_Failure, _health.GetCNCHealth());
}


 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
