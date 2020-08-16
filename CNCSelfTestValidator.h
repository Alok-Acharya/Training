#ifndef _CNC_SELFTEST_VALIDATOR_
#define _CNC_SELFTEST_VALIDATOR_

#include<iostream>
#include "CNCDefines.h"
#include "DignosisFailureNotification.h"

using namespace std;
 
class CNCSelfTestValidator
{
    public:
	explicit CNCSelfTestValidator(INotify*);
    virtual ~CNCSelfTestValidator();
	bool validate(unsigned int);
	private:
	 INotify* _notify;
};
#endif
