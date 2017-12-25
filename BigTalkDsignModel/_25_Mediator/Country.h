#ifndef _COUNTRY  
#define _COUNTRY  
  
#include <string>  
#include "UN.h"  
#include <iostream>  
  
using namespace std;  
  
//Colleague  
class Country  
{  
protected:  
    UnitedNations* mediator;  
public:  
    /*Country(UnitedNations* m) 
    { 
        this->mediator=m; 
    }*/  
    virtual void Declare(string message)=0;  
    virtual void GetMessage(string message)=0;  
};  
  
//ConcreteColleague  
class USA:public Country  
{  
public:  
    USA(UnitedNations* m)  
    {  
        this->mediator=m;  
    }  
    void Declare(string message);  
    void GetMessage(string message);  
};  
  
//ConcreteColleague  
class Iraq:public Country  
{  
public:  
    Iraq(UnitedNations* m)  
    {  
        this->mediator=m;  
    }  
    void Declare(string message);  
    void GetMessage(string message);  
};  
  
#endif  
