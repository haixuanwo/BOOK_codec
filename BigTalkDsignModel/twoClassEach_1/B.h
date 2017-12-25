#pragma once  
#include "A.h"  
  
class B  
{  
public:  
    B();  
    ~B();  
  
public:  
    void displayB();  
    void invokeClassAInClassB();  
private:  
    class A * mA;  
};  

