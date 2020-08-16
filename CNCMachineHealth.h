#ifndef _CNC_MACHINE_HEALTH_H_
#define _CNC_MACHINE_HEALTH_H_

#include<iostream>
#include "CNCDefines.h"

using namespace std;

class CNCMachineHealth 
{
    public:
	CNCMachineHealth();
    	virtual ~CNCMachineHealth();
	void  updateCNCHealth(CNC_Health _health);
	CNC_Health GetCNCHealth()
    private:
	 CNC_Health _cncCondition;

};
#endif
