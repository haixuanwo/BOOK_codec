

#ifndef FINERY_H  
#define FINERY_H  
  
#include <iostream>  
#include "Person.h"  
  
//Decorator��  
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
  
//������һϵ��ConcreteDecorator��  
class TShirts:public Finery  
{  
public:  
    void Show()  
    {  
        std::cout<<"TShirts  ";  
        Finery::Show();  
    }  
  
};  
  
//ConcreteDecorator��  
class BigTrouser:public Finery  
{  
public:  
    void Show()  
    {  
        std::cout<<"BigTrouser  ";  
        Finery::Show();  
    }  
  
};  
  
//ConcreteDecorator��  
class Sneakers:public Finery  
{  
public:  
    void Show()  
    {  
        std::cout<<"Sneakers  ";  
        Finery::Show();  
    }  
  
};  
  
//ConcreteDecorator��  
class Suit:public Finery  
{  
public:  
    void Show()  
    {  
        std::cout<<"Suit  ";  
        Finery::Show();  
    }  
  
};  
  
//ConcreteDecorator��  
class Tie:public Finery  
{  
public:  
    void Show()  
    {  
        std::cout<<"Tie ";  
        Finery::Show();  
    }  
  
};  
  
//ConcreteDecorator��  
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


