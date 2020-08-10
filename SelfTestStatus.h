#ifndef _SELF_TEST_STATUS_H_
#define _SELF_TEST_STATUS_H_

#include<iostream>
#include "MachineFailureNotification.h"

enum StatusCode
{
   No_Data,
   Controller_Board_Not_OK,
   Configuration_Data_Corrupted,
   ALL_OK = 0xFF	
};

using namespace std;
 
class SelfTestStatus
{
    public:
	SelfTestStatus();
	SelfTestStatus(const SelfTestStatus& );
        virtual ~SelfTestStatus();
	bool ValidateStatusCode(float);
    private:
	INotify *machinefailure;

};
#endif
