#include "CNCSelfTestStatusMonitor.h"
CNCSelfTestStatusMonitor::CNCSelfTestStatusMonitor(CNCSelfTestValidator* validator, CNCMachineHealth* health)
{
	_validator = validator;
	_cnchealth = health;
}


CNCSelfTestStatusMonitor::~CNCSelfTestStatusMonitor()
{

}

void SelftestStatusUpdate(unsigned int code)
{	
	_statuscode = code;
	if((_validator->validate(code)))
	{
		_cnchealth->updateCNCHealth(Machine_Failure);
	}
	else
	{
		_cnchealth->updateCNCHealth(NO_Failure);
	}
}



CNC_StatusCode SelftestStatusUpdate::GetStatusCode()
{
	return _statuscode;
}
