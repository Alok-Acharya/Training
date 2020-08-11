#include "PartDimension.h"

PartDimension::PartDimension()
{
      machinefailure = new MachineFailure();
}

PartDimension::~PartDimension()
{
      delete machinefailure;
}
void PartDimension::handlePartDimensionVariationUpdate(float dimensionvariation)
{
    validatePartDimensionVariation(dimensionvariation);
}

bool PartDimension::validatePartDimensionVariation(float dimensionVariation)
{	IValidator validatePartDimension;
	if(validatePartDimension.IsDataOK(dimensionVariation, Part_Dimension_Variation_Threshold))
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
