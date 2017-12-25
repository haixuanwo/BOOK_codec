#ifndef PERSON_H  
#define PERSON_H  
  
#include <string>  
#include <iostream>  
//ConcreteComponent¼´Component  
class Person  
{  
private:  
    std::string name;  
public:  
    Person(){};  
    Person(std::string name)  
    {  
        this->name=name;  
    }  
    virtual void Show()  
    {  
        std::cout<<"dress:"<<name<<std::endl;  
    }  
};  
  
#endif  

