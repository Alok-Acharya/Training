#include "SelfTestStatus.h"
SelfTestStatus::SelfTestStatus()
{
    machinefailure = new MachineFailure();
}

SelfTestStatus::SelfTestStatus(const SelfTestStatus& obj)
{
    machinefailure = new MachineFailure();
}


SelfTestStatus::~SelfTestStatus()
{
   delete machinefailure;
}

void SelfTestStatus::handleSelfTestStatusCodeUpdate(float statuscode)
{
   ValidateStatusCode(statuscode);
}

bool SelfTestStatus::ValidateStatusCode(float statuscode)
{
    if(statuscode == ALL_OK)
    {
	cout<<"ALL OK" <<endl;
	return true;
    }
    else 
    {	
	machinefailure->Notification();
	return false;	
    }
}
