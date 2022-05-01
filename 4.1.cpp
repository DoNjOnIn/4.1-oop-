// 4.1.cpp 
#include "WorkerH.h"
#include "WorkerM.h"
#include <iostream>
using namespace std;

int main()
{
    string name;
    name = "Man";
    Worker a(40.0, name);
    WorkerH c(50.0, name);
    WorkerM b(80, name);
    WorkerM* p = new WorkerM();
    Worker* d = p;
    d->addH(20);
    d->Payment();
    cout << "Type: " << typeid(*d).name() << endl;
    c.setH(90);
    c.Payment();
    a.Payment();
}

