#ifndef _A  
#define _A  
//<strong>#include "B.h"//A的头文件导入了B的头文件</strong>  
//extern class B;  
#include "B.h"

class A  
{  
private:  
    int a;  
    B objectb;//A的头文件导入了B的头文件，在调用B的时候就可以不用指针  
  
public:  
    A();  
    int geta();  
    void handle();  
};  
  
#endif

