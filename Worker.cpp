#include "Worker.h"
#include <iostream>
Worker::Worker()
{
	setN("");
	setW(80);
	setH(8);
}

Worker::Worker(double x,string y)
{
	setN(y);
	setW(x);
	setH(8);
}

void Worker::Payment()
{
	cout << "Worker payment" << endl;
	Show();
	cout << Balance() << endl;
	setH(0);
}

void Worker::Show()
{
	cout << "Current salary(8 hours per day 5 days per week) with wage "<<getW() << endl;
}

int Worker::Balance()
{
	return hours * 5 * 4 * wage;
}

Worker::Worker(double x)
{
	setN("");
	setW(x);
	setH(8);
}

Worker::Worker(string x)
{
	setN(x);
	setW(80);
	setH(8);
}