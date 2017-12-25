#include "B.h"  
#include <iostream>  
using namespace std;  
  
  
B::B()  
{  
    mA = new A();  
}  
  
  
B::~B()  
{  
}  
  
void B::displayB()  
{  
    cout << "this is the B" << endl;  
}  
  
void B::invokeClassAInClassB()  
{  
    cout << "class B invoke class A starts >>" << endl;  
    mA->displayA();  
}  

