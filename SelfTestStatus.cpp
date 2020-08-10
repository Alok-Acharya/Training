#include "SelfTestStatus.h"
SelfTestStatus::SelfTestStatus()
{
    machinefailure = new MachineFailure();
}

SelfTestStatus::~SelfTestStatus()
{
   delete machinefailure;
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
