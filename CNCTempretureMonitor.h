#ifndef _CNC_TEMPRETURE_MONITOR_H_
#define _CNC_TEMPRETURE_MONITOR_H_

#include<iostream>
#include "IValidator.h"
#include "EnviornmentFailureNotification.h"
#include "CNCMachineHealth.h"

using namespace std;

class CNCTempretureMonitor 
{
    public:
	CNCTempretureMonitor(IValidator* , INotify* , CNCMachineHealth*);
    virtual ~CNCTempretureMonitor();
	void  OperatingTempretureUpdate(float);
	float GetOperatingTempretureUpdate();
    private:
	 float _tempreture;
	 IValidator* _validate;
         INotify* _notify;
	 CNCMachineHealth* _cnchealth;
	 

};
#endif
