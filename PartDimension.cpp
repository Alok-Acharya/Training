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
		 
void PartDimension::validatePartDimensionVariation(float dimensionVariation)
{
	
	if(validatePartDimension->IsDataOK(dimensionVariation, Part_Dimension_Variation_Threshold))
	{	
	    	cout<<"Data OK "<<endl;
	}
	else
	{
	  	cout<<"Machine_NOT_OK " <<endl;
		  machinefailure->Notification();
	 }
}
