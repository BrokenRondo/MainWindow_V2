#pragma once
#ifndef UPLOADTHREAD_H_
#define UPLOADTHREAD_H_
#include "osapi/osapi.h"
#include <iostream>
#include <string>
#include "jsoncpp/json.h"
#include <fstream>
using namespace std;
class UploadThread :public OS_Thread
{
public:
	UploadThread(string datat);
	~UploadThread() {};
private:
	virtual int Routine();
	string data;
};

#endif // !UPLOADTHREAD_H_
