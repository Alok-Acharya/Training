#include "CNCTempretureMonitor.h"

CNCTempretureMonitor::CNCTempretureMonitor(IValidator* validate, INotify* notify , CNCMachineHealth* health):
_validate(validate),_notify(notify),_cnchealth(health)
{	
	_tempreture = 0.0;
};

CNCTempretureMonitor::~CNCTempretureMonitor()
{

}

void CNCTempretureMonitor::OperatingTempretureUpdate(float operatingtempreture)
{
	    _tempreture = operatingtempreture;
		if(!(_validate->ValidateData(_tempreture,Operating_Tempreture_Threshold)))
		{
			_notify->Notification();
			_cnchealth->updateCNCHealth(Enviornment_Failure);
		}
		else
		{
			_cnchealth->updateCNCHealth(NO_Failure);
		}
}

float CNCTempretureMonitor::GetOperatingTempretureUpdate()
{
	return _tempreture;	
}
