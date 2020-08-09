
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


void OperationDuration::checkContineousOperationDuration(float duration)
{
	
	 if(validateDuration->IsDataOK( duration, Operation_Duration_Threshold))
	 {	
	    	cout<<"Data OK "<<endl;
	 }
	 else
	 {
		  cout<<"Machine_NOT_OK " <<endl;
		  machinefailure->Notification();
	 }
}
