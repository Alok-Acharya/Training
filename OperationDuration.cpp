
#include "OperationDuration.h"

OperationDuration::OperationDuration()
{
	machinefailure = new MachineFailure();
}


OperationDuration::~OperationDuration()
{
	delete machinefailure;
}

void OperationDuration::handleOperationDurationUpdate(float duration)
{
      checkContineousOperationDuration(duration);
}

bool OperationDuration::checkContineousOperationDuration(float duration)
{
	IValidator validateDuration;
	if(validateDuration.ValidateData( duration, Operation_Duration_Threshold))
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
