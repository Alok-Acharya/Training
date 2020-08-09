#ifndef _PART_DIMENSION_H_
#define _PART_DIMENSION_H_


#include<iostream>
#include"IValidator.h"
#include "MachineFailureNotification.h"
using namespace std;

#define Part_Dimension_Variation_Threshold 0.05 //in mm

class PartDimension
{
    public:
	PartDimension();
       virtual ~PartDimension();
	bool validatePartDimensionVariation(float);
    private:
       INotify *machinefailure;
	   IValidator *validatePartDimension;

};
#endif
