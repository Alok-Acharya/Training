#ifndef _SELF_TEST_STATUS_H_
#define _SELF_TEST_STATUS_H_

#include<iostream>

using namespace std;

class SelfTestStatus
{
    public:
	SelfTestStatus(){}
    virtual ~SelfTestStatus(){}
	bool ValidateStatusCode(float);

};
#endif
