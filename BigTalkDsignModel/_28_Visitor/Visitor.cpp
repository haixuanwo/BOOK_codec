#include "Visitor.h"  
#include <iostream>  
#include <string>  
#include <typeinfo>

  
void Success::GetManConclusion(Person* concreteElementA)  
{  
    std::cout<<typeid(*concreteElementA).name()<<" "<<typeid(*this).name()<<" "<<"hour,there are a great woman"<<std::endl;  
}  
  
void Success::GetWomanConclusion(Person* concreteElementA)  
{  
    std::cout<<typeid(*concreteElementA).name()<<" "<<typeid(*this).name()<<" "<<"hour,there are unsuccessful man"<<std::endl;  
}  
  
void Failing::GetManConclusion(Person* concreteElementA)  
{  
    std::cout<<typeid(*concreteElementA).name()<<" "<<typeid(*this).name()<<" "<<"hour,just drink ,don't put off"<<std::endl;  
}  
  
void Failing::GetWomanConclusion(Person* concreteElementA)  
{  
    std::cout<<typeid(*concreteElementA).name()<<" "<<typeid(*this).name()<<" "<<"hour, tear like rain, no one put off"<<std::endl;  
}  
  
void Amativeness::GetManConclusion(Person* concreteElementA)  
{  
    std::cout<<typeid(*concreteElementA).name()<<" "<<typeid(*this).name()<<" "<<"hour, Don't know , say know"<<std::endl;  
}  
  
void Amativeness::GetWomanConclusion(Person* concreteElementA)  
{  
    std::cout<<typeid(*concreteElementA).name()<<" "<<typeid(*this).name()<<" "<<"hour, Know , say don't know"<<std::endl;  
}  

