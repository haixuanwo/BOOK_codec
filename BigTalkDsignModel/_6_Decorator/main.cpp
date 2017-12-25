/*

��������

װ��ģʽ����̬�ظ�һ���������һЩ�����ְ�𣬾����ӹ�����˵��װ��ģʽ�����������Ϊ��



����˵��

��ɫ��

��1��Component�Ƕ���һ�����󣬿��Ը���Щ����̬�����ְ��

��2��ConcreteComponent�Ƕ�����һ������Ķ���Ҳ���Ը������������һЩְ��

��3��Decorator��װ�γ����࣬�̳���Component������������չComponent��Ĺ��ܣ����Ƕ���Component��˵��������֪��Decorator�Ĵ��ڵġ�

��4������ConcreteDecorator���Ǿ����װ�ζ����𵽸�Component���ְ������á�

ʲôʱ���ã�

��1����Ҫ���ڲ���װ�������ʾ�����������

��2�������ڽ�����ģʽ�����ǽ�����ģʽ��Ҫ������Ĺ��̱������ȶ��ģ���װ��ģʽ�Ľ�������ǲ��ȶ��ġ�

��3��������Ҫ������Ĺ��ܰ���ȷ��˳�����������п��ơ�

�ŵ㣺

��1�������װ�ι��ܴ����а���ȥ�����������Լ�ԭ�е��ࡣ

��2����Ч�ذ���ĺ���ְ���װ�ι������ֿ��������ҿ���ȥ����������ظ���װ���߼���

�ͽ�����ģʽ������

������ģʽҪ����Ĺ��̱������ȶ��ģ���װ��ģʽ�Ľ�������ǲ��ȶ��ģ������и��ָ�������Ϸ�ʽ��


*/


#include "Finery.h"  
#include <string>  
#include <iostream>  
  
//�ͻ���  
int main()  
{  
    Person* xc=NULL;  
    xc=new Person("small cai");  
  
    std::cout<<"the first dress:"<<std::endl;  
      
    Sneakers* pqx=NULL;  
    pqx=new Sneakers();  
    BigTrouser* kk=NULL;  
    kk=new BigTrouser();  
    TShirts* dtx=NULL;  
    dtx=new TShirts();  
  
    pqx->Decorator(xc);  
    kk->Decorator(pqx);  
    dtx->Decorator(kk);  
  
    dtx->Show();  
  
    std::cout<<"the second dress:"<<std::endl;  
  
    LeatherShoes* px=NULL;  
    px=new LeatherShoes();  
    Tie* ld=NULL;  
    ld=new Tie();  
    Suit* xz=NULL;  
    xz=new Suit();  
  
    px->Decorator(xc);  
    ld->Decorator(px);  
    xz->Decorator(ld);  
  
    xz->Show();  
  
    if(xc!=NULL)  
    {  
        delete xc;  
        xc=NULL;  
    }  
    if(pqx!=NULL)  
    {  
        delete pqx;  
        pqx=NULL;  
    }  
    if(kk!=NULL)  
    {  
        delete kk;  
        kk=NULL;  
    }  
    if(dtx!=NULL)  
    {  
        delete dtx;  
        dtx=NULL;  
    }  
    if(px!=NULL)  
    {  
        delete px;  
        px=NULL;  
    }  
    if(ld!=NULL)  
    {  
        delete ld;  
        ld=NULL;  
    }  
    if(xz!=NULL)  
    {  
        delete xz;  
        xz=NULL;  
    }  
  
    //system("pause");  
} 

