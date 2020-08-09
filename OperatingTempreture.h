#ifndef _OPERATINGH_TEMPRETURE_H_
#define _OPERATINGH_TEMPRETURE_H_

#define Operating_Tempreture_Threshold 35 //in degree

#include<iostream>
#include "IValidator.h"
#include "EnviornmentFailureNotification.h"
using namespace std;



class OperatingTempreture:public IValidator
{
    public:
	OperatingTempreture();
    virtual ~OperatingTempreture();
	bool validateOperatingTempreture(float);
    private:
       INotify *enviornmentfailure;
	   IValidator *validatetempreture;

};
#endif
