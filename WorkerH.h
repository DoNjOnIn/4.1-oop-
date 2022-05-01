#pragma once
#include "Worker.h"
class WorkerH :
    public Worker
{
public:
	WorkerH();
	int Balance();
	WorkerH(double x);
	WorkerH(string x);
	WorkerH(double x, string y);

	void Show();
};

