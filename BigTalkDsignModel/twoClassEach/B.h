#ifndef _B  
#define _B  
  
//<strong>//#include "A.h"//B的头文件没有导入A的头文件，需要有三个地方需要注意！  
//extern class A;//注意1：需要用extern声明A</strong>  
class A;
class B  
{  
private:  
    int b;  
    A* objecta;//注意2：调用A的时候需要用指针  
public:  
    B();  
    int getb();  
    void handle();  
};  
  
#endif

