#ifndef _PART_DIMENSION_MONITOR_H_
#define _PART_DIMENSION_MONITOR_H_


#include<iostream>
#include "IValidator.h"
#include "CNCMachineHealth.h"
#include "MachineFailureNotification.h"


using namespace std;

class CNCPartDimensionMonitor
{
    public:
	CNCPartDimensionMonitor(IValidator* , INotify* , CNCMachineHealth*);
        virtual ~CNCPartDimensionMonitor();
	void PartDimensionVariationUpdate(float);
	float GetPartDimensionVariation();
    private:
	 float _dimVariation;
	 IValidator* _validate;
         INotify* _notify;
	 CNCMachineHealth* _cnchealth;
};
#endif
