#ifndef _UN  
#define _UN  
#include <string>  
class Country;  
using namespace std;  
  
//Mediator  
class UnitedNations  
{  
public:  
    virtual void setColleague1(Country* c)=0;  
    virtual void setColleague2(Country* c)=0;  
    virtual void Declare(string message, Country* colleague)=0;  
};  
  
//ConcreteMediator  
class UnitedNationsSecurityCouncil:public UnitedNations  
{  
private:  
    Country* colleague1;  
    Country* colleague2;  
  
public:  
    void setColleague1(Country* c);  
    void setColleague2(Country* c);  
    void Declare(string message, Country* colleague);  
};  
  
#endif  
