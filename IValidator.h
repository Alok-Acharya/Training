#ifndef _IVALIDATOR_H
#define _IVALIDATOR_H
class IValidator
{
  public:
	IValidator(){};
	virtual ~IValidator(){};
	bool IsDataOK(float data , float threshold)
	{
		return (!(data > threshold));
	}
};

#endif
