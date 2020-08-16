#ifndef _DIGNOSIS_FAILURE_NOTIFICATION_
#define _DIGNOSIS_FAILURE_NOTIFICATION_

#include"INotify.h"

class DignosisFailure:public INotify
{
	public:
		DignosisFailure(){}
		virtual ~DignosisFailure(){}	
		virtual void Notification()
		{
			cout<<" SELF_TEST_DIGNOSIS_FAIL "<<endl;
		}
};

#endif
