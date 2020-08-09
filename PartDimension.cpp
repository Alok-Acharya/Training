#include "PartDimension.h"

PartDimension::PartDimension()
{
  machinefailure = new MachineFailure();
 	validatePartDimension = new IValidator();
}

PartDimension::~PartDimension()
{
	delete machinefailure;
	delete validatePartDimension;
}
		 
bool PartDimension::validatePartDimensionVariation(float dimensionVariation)
{	
	if(validatePartDimension->IsDataOK(dimensionVariation, Part_Dimension_Variation_Threshold))
	{	
	    	return true;
	}
	else
	{
	  	cout<<"Machine_NOT_OK " <<endl;
		 machinefailure->Notification();
		return false;
	 }
}
