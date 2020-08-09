#ifndef _OPERATION_DURATION_H_
#define _OPERATION_DURATION_H_

#define Operation_Duration_Threshold 6 //in minutes
#include<iostream>
#include "MachineFailureNotification.h"
#include "IValidator.h"

using namespace std;

class OperationDuration
{
    public:
	OperationDuration();
        virtual ~OperationDuration();
	bool checkContineousOperationDuration(float);
    private:
	 INotify* machinefailure;
	 IValidator* validateDuration;

};
#endif
