#include <iostream>  
#include "A.h"    
#include "B.h"  
using namespace std;  
  
  
  
int main()  
{  
    cout << "----------main starts---------------" << endl;  
    class B* pB = new B();  
    class A* pA = new A(pB);  

    cout<<"start display\n"<<endl;

	cout<<"\nstart A display"<<endl;
    pA->displayA();  
    pA->invokeClassBInClassA();  
  
    cout<<"\nstart B display"<<endl;  
    pB->displayB();  
    pB->invokeClassAInClassB();  
  
    cout << "----------main  ends----------------" << endl;  
    return 0;  
}  

