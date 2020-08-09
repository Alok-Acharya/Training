
#include "OperationDuration.h"

OperationDuration::OperationDuration()
{
	machinefailure = new MachineFailure();
	validateDuration = new IValidator();
}


OperationDuration::~OperationDuration()
{
	delete machinefailure;
	delete validateDuration;
}


bool OperationDuration::checkContineousOperationDuration(float duration)
{
	
	 if(validateDuration->IsDataOK( duration, Operation_Duration_Threshold))
	 {	
	    	return true;
	 }
	 else
	 {
		 cout<<"Machine_NOT_OK " <<endl;
		 machinefailure->Notification();
		 return false;
	 }
}
