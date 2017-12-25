#include "A.h"  
#include "B.h"  
#include <iostream>  
using namespace std;  
  
  
A::A()  
{  
}  
  
A::A(B * pB)  
{  
    mB = pB;  
}  
  
  
A::~A()  
{  
}  
  
  
void A::displayA()  
{  
    cout << "this is A" << endl;  
}  
  
  
void A::invokeClassBInClassA()  
{  
    cout << "class A invoke class B starts>>" << endl;  
    mB->displayB();  
} 

