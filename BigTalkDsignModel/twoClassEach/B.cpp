#include <iostream>  
//<strong>#include "B.h"
#include "B.h"
#include "A.h"//注意3：在B.cpp里面导入A的头文件</strong>  
  
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

