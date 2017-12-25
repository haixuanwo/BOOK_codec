#include <iostream>  
//<strong>#include "A.h"</strong>  
#include "A.h"


using namespace std;  
  
A::A()  
{  
    this->a=100;  
}  
  
int A::geta()  
{  
    return a;  
}  
  
void A::handle()  
{  
    cout<<"in A , objectb.b="<<objectb.getb()<<endl;  
}  

