#ifndef _B  
#define _B  
  
//<strong>//#include "A.h"//B��ͷ�ļ�û�е���A��ͷ�ļ�����Ҫ�������ط���Ҫע�⣡  
//extern class A;//ע��1����Ҫ��extern����A</strong>  
class A;
class B  
{  
private:  
    int b;  
    A* objecta;//ע��2������A��ʱ����Ҫ��ָ��  
public:  
    B();  
    int getb();  
    void handle();  
};  
  
#endif

