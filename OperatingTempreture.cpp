
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


void OperatingTempreture::validateOperatingTempreture(float tempreture)
{
	
	    if(validatetempreture->IsDataOK(tempreture, Operating_Tempreture_Threshold))
	    {	
	    	cout<<"Data OK "<<endl;
	    }
	    else
	    {
		cout<<"Enviornment_Not_OK " <<endl;
		enviornmentfailure->Notification();
	    }
}
