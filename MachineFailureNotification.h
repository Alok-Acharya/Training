#ifndef _MACHINE_FAILURE_
#define _MACHINE_FAILURE_

#include"INotify.h"

class MachineFailure:public INotify
{
	public:
		MachineFailure(){}
		virtual ~MachineFailure(){}	
		virtual void Notification()
		{
			cout<<" Machine is Not OK! Please check "<<endl;
		}
};

#endif
