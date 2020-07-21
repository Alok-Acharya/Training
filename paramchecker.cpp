bool checkbpm(float)
{
  if(bpm < 70 || bpm > 150) {
    return false;
  }
  return true;
}
bool checkspo2(float)
{
  if(spo2 < 80) {
    return false;
  }
  return true;
}
bool checkrespRate(float)
{
  if(respRate < 30 || respRate > 60) {
    return false;
  }
  return true;
}
bool vitalsAreOk(float bpm, float spo2, float respRate) {
  if(checkbpm(bpm)&&checkspo2(sop2)&&checkrespRate(respRate)){
  return true;
  }
  return false;
}
