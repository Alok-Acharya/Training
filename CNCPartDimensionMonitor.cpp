#include "CNCPartDimensionMonitor.h"

CNCPartDimensionMonitor::CNCPartDimensionMonitor(IValidator* validate, INotify* notify , CNCMachineHealth* health)
{
	_validate = validate;
	_notify = notify;
	_cnchealth = health;
	_dimVariation = 0.0;
}

CNCPartDimensionMonitor::~CNCPartDimensionMonitor()
{

}

void CNCPartDimensionMonitor::PartDimensionVariationUpdate(float variation)
{
	_dimVariation = variation;
    if(!(_validate->ValidateData(_tempreture,Operating_Tempreture_Threshold)))
	{
		_notify->Notification();
		_cnchealth->updateCNCHealth(Machine_Failure);
	}
	else
	{
		_cnchealth->updateCNCHealth(NO_Failure);
	}
}

float CNCPartDimensionMonitor::GetPartDimensionVariation()
{
	return _dimVariation;

}
