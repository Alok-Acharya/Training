#ifndef _ENVIORNMENT_FAILURE_
#define _ENVIORNMENT_FAILURE_

#include"INotify.h"

class EnviornmentFailure:public INotify
{
	public:
		EnviornmentFailure(){}
		virtual ~EnviornmentFailure(){}	
		virtual void Notification()
		{
			cout<<" Enviornment is Not OK! Please check the tempreture "<<endl;
		}
};

#endif
