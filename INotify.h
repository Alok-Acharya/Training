#ifndef _INOTIFY_H_
#define _INOTIFY_H_

#include<iostream>
using namespace std;

class INotify
{
   public:
	INotify(){}
	virtual ~INotify(){};
	virtual void Notification() = 0;

};

#endif
