#pragma once
#include "Worker.h"
class WorkerM :
	public Worker
{
public:
	WorkerM();
	WorkerM(double x);
	WorkerM(string x);
	WorkerM(double x, string y);

	void Show();
	int Balance();
	friend istream& operator >> (istream& in, WorkerM& m);
};
