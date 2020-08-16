
#include "OperatingTempreture.h"

CNCTempretureMonitor::CNCTempretureMonitor()
{
	enviornmentfailure = new EnviornmentFailure();
}

CNCTempretureMonitor::CNCTempretureMonitor(const CNCTempretureMonitor& obj)
{
     enviornmentfailure = new EnviornmentFailure();
}

CNCTempretureMonitor::~CNCTempretureMonitor()
{
	delete enviornmentfailure;
}

void CNCTempretureMonitor::handleOperatingTempretureUpdate(float tempreture)
{
	validateOperatingTempreture(tempreture);
}

bool CNCTempretureMonitor::validateOperatingTempreture(float tempreture)
{
	    IValidator validatetempreture;
	    if(validatetempreture.IsDataOK(tempreture, Operating_Tempreture_Threshold))
	    {	
	    	return true;
	    }
	    else
	    {
		cout<<"Enviornment_Not_OK " <<endl;
		enviornmentfailure->Notification();
		 return false;
	    }
}
