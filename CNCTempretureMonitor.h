#ifndef _CNC_TEMPRETURE_MONITOR_H_
#define _CNC_TEMPRETURE_MONITOR_H_
#define Operating_Tempreture_Threshold 35 //in degree

#include<iostream>
#include "IValidator.h"
#include "EnviornmentFailureNotification.h"
using namespace std;



class CNCTempretureMonitor
{
    public:
	CNCTempretureMonitor();
	CNCTempretureMonitor(const CNCTempretureMonitor&);
        virtual ~CNCTempretureMonitor();
	void handleOperatingTempretureUpdate(float);
	bool validateOperatingTempreture(float);
    private:
       INotify *enviornmentfailure;
};
#endif
