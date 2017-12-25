#pragma once  
  
class B;  
class A  
{  
public:  
    A();  
    A(class B* pB);  
    ~A();  
  
public:  
    void displayA();  
    void invokeClassBInClassA();  
private:  
    class B *mB;  
};  

