#include <iostream>  
//<strong>#include "B.h"
#include "B.h"
#include "A.h"//ע��3����B.cpp���浼��A��ͷ�ļ�</strong>  
  
using namespace std;  
  
B::B()  
{  
    this->b=200;  
}  
  
int B::getb()  
{  
    return b;  
}  
  
void B::handle()  
{  
    objecta=new A();  
    cout<<"in B , objecta->a="<<objecta->geta()<<endl;  
}  

