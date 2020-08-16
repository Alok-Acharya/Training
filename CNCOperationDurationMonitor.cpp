
#include "CNCOperationDurationMonitor.h"

CNCOperationDurationMonitor::CNCOperationDurationMonitor(IValidator* validate, INotify* notify , CNCMachineHealth* health)
{
	_validate = validate;
	_notify = notify;
	_cnchealth = health;
	_durationinminute = 0;

}


CNCOperationDurationMonitor::~CNCOperationDurationMonitor()
{

}

void CNCOperationDurationMonitor::OperationDurationUpdate(float duration)
{
	_durationinminute = duration;
	if(!(_validate->ValidateData(_durationinminute,Operation_Duration_Threshold)))
	{
		_notify->Notification();
		_cnchealth->updateCNCHealth(Machine_Failure);
	}
	else
	{
		_cnchealth->updateCNCHealth(NO_Failure);
	}
}

float CNCOperationDurationMonitor::GetOperationDuraion()
{
	return _durationinminute;
}

