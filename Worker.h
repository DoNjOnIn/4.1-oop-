#pragma once
#include <string>
using namespace std;
class Worker
{
private:
	string name;
	double wage;
	int hours;
public:
	Worker();
	Worker(double x);
	Worker(string x);
	Worker(double x, string y);

    void Payment();

    virtual void Show();
    virtual int Balance();
	void addH(int x) { hours += x; };
	void setH(int x) { hours = x; };
	int getH() { return hours; };
	void setN(string x) { name = x; };
	string getN() { return name; };
	void setW(double x) { wage = x; };
	double getW() { return wage; };
};

