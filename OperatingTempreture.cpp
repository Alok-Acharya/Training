
#include "OperatingTempreture.h"

OperatingTempreture::OperatingTempreture()
{
	enviornmentfailure = new EnviornmentFailure();
	validatetempreture = new IValidator();
}

OperatingTempreture::~OperatingTempreture()
{
	delete enviornmentfailure;
	delete validatetempreture;
}


bool OperatingTempreture::validateOperatingTempreture(float tempreture)
{
	
	    if(validatetempreture->IsDataOK(tempreture, Operating_Tempreture_Threshold))
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
