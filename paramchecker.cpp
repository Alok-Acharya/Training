
bool paramChecker(float param , float lowerlimit , float higherlimit)
{
   return(!(param < lowerlimit || param > higherlimit));
}


bool vitalsAreOk(float bpm, float spo2, float respRate) {
   bool bpmOK = paramChecker(bpm,70,150);
   bool spo2OK = paramChecker(spo2,80,100);
   bool resprateOK = paramChecker(respRate,30,60);
  
   if(bpmOK && spo2OK && resprateOK){
      return true;
   }
   return false; 
}
