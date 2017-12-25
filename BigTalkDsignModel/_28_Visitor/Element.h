#ifndef ELEMENT_H  
#define ELEMENT_H  
  
class Action;  
  
class Person  
{  
public:  
    virtual void Accept(Action* visitor){};  
};  
  
class Man:public Person  
{  
    void Accept(Action* visitor);  
};  
  
class Woman:public Person  
{  
    void Accept(Action* visitor);  
};  
  
#endif
