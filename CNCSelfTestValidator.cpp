#include "CNCSelfTestValidator.h"


CNCSelfTestValidator::CNCSelfTestValidator(INotify* notify):_notify(notify)
{
	
}
CNCSelfTestValidator::~CNCSelfTestValidator()
{
	
	
}

bool CNCSelfTestValidator::validate(unsigned int code)
{
	if(ALL_OK == code)
	{
		cout << "Machine ALL OK";
		return true;
	}
	else
	{
		_notify->Notification();
		return false;
	}
	
}
