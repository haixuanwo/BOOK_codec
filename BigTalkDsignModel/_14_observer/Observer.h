#ifndef OBSERVER_H  
#define OBSERVER_H  
  
#include <list>  
#include <iostream>  
#include <string>  
#include "Subject.h"  
  
//Observer,����۲���  
class Observer  
{  
protected:  
    std::string name;  
    Subject* sub;  
public:  
    Observer();  
    Observer(std::string name,Subject* sub);  
    virtual void Update();  
    bool operator==(const Observer&)const;  
};  
  
//ConcreteObserver,����۲��ߣ���Ʊ�۲���  
class StockObserver:public Observer  
{  
public:  
    StockObserver();  
    StockObserver(std::string name,Subject* sub);  
    void Update();  
};  
  
  
//ConcreteObserver������۲��ߣ�NBA�۲���  
class NBAObserver:public Observer  
{  
public:  
    NBAObserver();  
    NBAObserver(std::string name,Subject* sub);  
    void Update();  
};  
  
#endif  

