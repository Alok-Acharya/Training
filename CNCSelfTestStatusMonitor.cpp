#include "CNCSelfTestStatusMonitor.h"
CNCSelfTestStatusMonitor::CNCSelfTestStatusMonitor(CNCSelfTestValidator* validator, CNCMachineHealth* health)
{
	_validator = validator;
	_cnchealth = health;
	_statuscode = 0xFF;
}


CNCSelfTestStatusMonitor::~CNCSelfTestStatusMonitor()
{

}

void CNCSelfTestStatusMonitor::SelftestStatusUpdate(unsigned int code)
{	
	_statuscode = code;
	if(!(_validator->validate(code)))
	{
		_cnchealth->updateCNCHealth(DIGNOSIS_Failure);
	}
	else
	{
		_cnchealth->updateCNCHealth(NO_Failure);
	}
}



unsigned int  CNCSelfTestStatusMonitor::GetStatusCode()
{
	return _statuscode;
}
