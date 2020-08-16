#ifndef _OPERATION_DURATION_MONITOR_H_
#define _OPERATION_DURATION_MONITOR_H_


#include<iostream>
#include "IValidator.h"
#include "CNCMachineHealth.h"
#include "MachineFailureNotification.h"


using namespace std;

class CNCOperationDurationMonitor
{
    public:
	CNCOperationDurationMonitor(IValidator* , INotify* , CNCMachineHealth*);
    virtual ~CNCOperationDurationMonitor();
	void OperationDurationUpdate(float);
	float GetOperationDuraion();
    private:
	 float _durationinminute;
	 IValidator* _validate;
     INotify* _notify;
	 CNCMachineHealth* _cnchealth;
};
#endif
