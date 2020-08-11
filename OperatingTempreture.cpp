
#include "OperatingTempreture.h"

OperatingTempreture::OperatingTempreture()
{
	enviornmentfailure = new EnviornmentFailure();
}

OperatingTempreture::OperatingTempreture(const OperatingTempreture& obj)
{
     enviornmentfailure = new EnviornmentFailure();
}

OperatingTempreture::~OperatingTempreture()
{
	delete enviornmentfailure;
}


bool OperatingTempreture::validateOperatingTempreture(float tempreture)
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
