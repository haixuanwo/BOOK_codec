

#ifndef FINERY_H  
#define FINERY_H  
  
#include <iostream>  
#include "Person.h"  
  
//Decorator类  
class Finery:public Person  
{  
protected:  
    Person* component;  
public:  
    void Decorator(Person* component)  
    {  
        this->component=component;  
    }  
    void Show()  
    {  
        if(component!=NULL)  
            component->Show();  
    }  
};  
  
//下面是一系列ConcreteDecorator类  
class TShirts:public Finery  
{  
public:  
    void Show()  
    {  
        std::cout<<"TShirts  ";  
        Finery::Show();  
    }  
  
};  
  
//ConcreteDecorator类  
class BigTrouser:public Finery  
{  
public:  
    void Show()  
    {  
        std::cout<<"BigTrouser  ";  
        Finery::Show();  
    }  
  
};  
  
//ConcreteDecorator类  
class Sneakers:public Finery  
{  
public:  
    void Show()  
    {  
        std::cout<<"Sneakers  ";  
        Finery::Show();  
    }  
  
};  
  
//ConcreteDecorator类  
class Suit:public Finery  
{  
public:  
    void Show()  
    {  
        std::cout<<"Suit  ";  
        Finery::Show();  
    }  
  
};  
  
//ConcreteDecorator类  
class Tie:public Finery  
{  
public:  
    void Show()  
    {  
        std::cout<<"Tie ";  
        Finery::Show();  
    }  
  
};  
  
//ConcreteDecorator类  
class LeatherShoes:public Finery  
{  
public:  
    void Show()  
    {  
        std::cout<<"LeatherShoes  ";  
        Finery::Show();  
    }  
       
};  
  
  
#endif  


