#ifndef _A  
#define _A  
//<strong>#include "B.h"//A��ͷ�ļ�������B��ͷ�ļ�</strong>  
//extern class B;  
#include "B.h"

class A  
{  
private:  
    int a;  
    B objectb;//A��ͷ�ļ�������B��ͷ�ļ����ڵ���B��ʱ��Ϳ��Բ���ָ��  
  
public:  
    A();  
    int geta();  
    void handle();  
};  
  
#endif

