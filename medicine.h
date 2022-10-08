#ifndef medicine_medicine_h
#define medicine_medicine_h
#include <iostream>
#include <string>
using namespace std;

class medicine
{
private:
    int type;
    string name;
    string mfg;
    string exp;
    int price;
public:
    medicine();
    void ADD();
};


#endif
