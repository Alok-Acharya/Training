
bool paramChecker(float param , float lowerlimit , float higherlimit)
{
   if(param < lowerlimit || param > higherlimit)
   {
      return false;
   }
   return true;
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
  bool bpm = paramChecker(bpm,70,150);
  bool spo2 = paramchecker(spo2,80,100);
  bool resprate = paramchecker(respRate,30,60);
  if(bpm && spo2 && resprate){
      return true;
  }
  return false; 
}
