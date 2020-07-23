#include "paramchecker.h"
usine namespace std;
float param;
float lowerlimit;
float upperlimit;
class paramChecker
{
	public:
	paramChecker(){}
	virtual ~paramChecker(){}
	bool IsParamOK()
	{
		return(!(param < lowerlimit || param > upperlimit));
	}		
};

class Bpm : public paramChecker
{
   public:
   Bpm(float bpm)
   {
	 param = bpm;
	 lowerlimit = 70;
	 upperlimit = 150;
   }
   virtual ~Bpm(){}
};

class Spo2 : public paramChecker
{
   public:
   Spo2(float spo2)
   {
	 param = spo2;
	 lowerlimit = 80;
	 upperlimit = 100;
   }
   virtual ~Spo2(){}
};

class RespRate : public paramChecker
{
   public:
   RespRate(float resprate)
   {
	 param = resprate;
	 lowerlimit = 30;
	 upperlimit = 60;
   }
	virtual ~RespRate(){}
};


bool vitalsAreOk(vector<float>parm) {
   paramChecker *obj1 = new Bpm(parm[0]);
   bool bpmOk = obj1->IsParamOK();
   paramChecker *obj2 = new Spo2(parm[1]);
   bool spo2OK = obj2->IsParamOK();
   paramChecker *obj3 = new RespRate(parm[2]);
   bool resprateOK = obj3->IsParamOK();
   return (bpmOk && spo2OK && resprateOK); 
}
