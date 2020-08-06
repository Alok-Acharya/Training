#include "paramchecker.h"
using namespace std;
#include <iostream>
#include <vector>
using namespace std;
class paramChecker
{
	private:
		float lower_limit;
		float upper_limit;
	public:
		paramChecker(){lower_limit = 0; upper_limit = 0;}
		virtual ~paramChecker(){}
		void setparamlimits(float lowerlimit , float upperlimit)
		{
			lower_limit = lowerlimit;
			upper_limit = upperlimit;
		}
		bool IsParamOK(float param)
		{
			return(!(param < lower_limit || param > upper_limit));
		}		
};

class Bpm : public paramChecker
{
   public:
   Bpm()
   {
     setparamlimits(70,150);
   }
   virtual ~Bpm(){}
};

class Spo2 : public paramChecker
{
   public:
   Spo2()
   {
     setparamlimits(80,100);
   }
   virtual ~Spo2(){}
};

class RespRate : public paramChecker
{
   public:
   RespRate()
   {
     setparamlimits(30,60);
   }
   virtual ~RespRate(){}
};


class Vital
{
	std::vector<paramChecker*> params;
	public:
	Vital()
	{
		paramChecker *bpm = new Bpm();
		paramChecker *spo2 = new Spo2();
		paramChecker *resp = new RespRate();
		params.push_back(bpm);
		params.push_back(spo2);
		params.push_back(resp);
	}
	bool IsVitalsOutOfRange(std::vector<float> vitals)
	{
		std::vector<paramChecker*>::iterator Itr = params.begin();
		std::vector<float>::iterator ItrVital = vitals.begin();
	        bool IsVitalsOutOfRange = false;
		for (; Itr != params.end() ; ++Itr, ++ItrVital)
		{
			if(!(*Itr)->IsParamOK(*ItrVital))
			{
				IsVitalsOutOfRange = true;
				break;
			}
		}
		return IsVitalsOutOfRange;
	}
	virtual ~Vital(){}
};


bool vitalsAreOk(std::vector< float >parm) {
   Vital VitalsOK;
   return !(VitalsOK.IsVitalsOutOfRange(parm)); 
}
