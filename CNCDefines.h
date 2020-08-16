#ifndef _CNC_DEFINES_H_
#define _CNC_DEFINES_H_

#define Operating_Tempreture_Threshold 35 //in degree
#define Operation_Duration_Threshold 6 //in hours
#define Part_Dimension_Variation_Threshold 0.05 //in mm

enum CNC_StatusCode
{
   No_Data,
   Controller_Board_Not_OK,
   Configuration_Data_Corrupted,
   ALL_OK = 0xFF	
};


enum CNC_Data
{
	Operating_Tempreture,
	Part_Dimension_Variation,
	DurationOF_ContineousOperation,
	Self_Test_Status
};

enum CNC_Health
{
   Machine_Failure,
   Enviornment_Failure,
   DIGNOSIS_Failure,
   NO_Failure
};


#endif
