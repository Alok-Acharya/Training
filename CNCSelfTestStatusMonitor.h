#ifndef _CNC_SELFTEST_STATUS_MONITOR_
#define _CNC_SELFTEST_STATUS_MONITOR_

#include<iostream>
#include "CNCMachineHealth.h"
#include "CNCSelfTestValidator.h"

using namespace std;
 
class CNCSelfTestStatusMonitor
{
    public:
	CNCSelfTestStatusMonitor(CNCSelfTestValidator* , CNCMachineHealth* );
    virtual ~CNCSelfTestStatusMonitor();
	void SelftestStatusUpdate(unsigned int );
	unsigned int GetStatusCode();
    private:
	unsigned int _statuscode;
	CNCSelfTestValidator *_validator;
	CNCMachineHealth* _cnchealth;
};
#endif
