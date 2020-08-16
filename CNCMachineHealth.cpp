#include "CNCMachineHealth.h"

CNCMachineHealth::CNCMachineHealth():_cncCondition(NO_Failure)
{
}

CNCMachineHealth::~CNCMachineHealth()
{
	
}

void CNCMachineHealth::updateCNCHealth(CNC_Health health)
{
	_cncCondition = health;
}

CNC_Health CNCMachineHealth::GetCNCHealth()
{
	return _cncCondition;
}
