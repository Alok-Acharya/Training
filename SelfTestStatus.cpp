#include "SelfTestStatus.h"

bool SelfTestStatus::ValidateStatusCode(float statuscode)
{
    if(statuscode == 0xFF)
    {
		cout<<"ALL OK" <<endl;
		return true;
    }
    else 
    {	
		return false;	
    }
}
