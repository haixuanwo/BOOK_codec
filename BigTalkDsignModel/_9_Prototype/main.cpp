/*
��������

ԭ��ģʽ��Prototype������ԭ��ʾ��ָ��������������࣬����ͨ��������Щԭ�ʹ����µĶ���



����˵��

��1��ԭ��ģʽʵ���Ͼ��Ǵ�һ�������ٴ�������һ���ɶ��ƵĶ��󣬶��Ҳ���Ҫ֪���κδ�����ϸ�ڡ�

��2��һ���ڳ�ʼ������Ϣ�������仯������£���¡����õİ취����������˶��󴴽���ϸ�ڣ��ж������Ǵ�����ߡ���Ϊ�������Clone��ÿ��new������Ҫִ��һ�ι��캯����������캯����ִ��ʱ��ܳ�����ô��ε�ִ�������ʼ��������ʵ����̫��Ч�ˡ�

��3��ǳ���ƺ���ƣ�

ǳ���ƣ������ƵĶ�������б�����������ԭ���Ķ�����ͬ��ֵ�������ж�������������ö���Ȼָ��ԭ���Ķ���

��ƣ������ö���ı���ָ���ƹ����¶��󣬶�����ԭ�еı����õĶ���

Clone��ʱ��ʹ����ơ�

*/
#include "Prototype.h"  
#include <iostream>  
#include <stdlib.h>  
  
int main()  
{  
    Resume* a=new Resume("big bird");  
    a->SetPersonalInfo("male","29");  
    a->SetWorkExperience("1998-2000","XX company");  
  
    Resume* b=a->Clone();  
    b->SetWorkExperience("1998-2006","YY company");  
  
    Resume* c=b->Clone();  
    c->SetPersonalInfo("male","24");  
    c->SetWorkExperience("1998-2003","ZZ company");  
  
    a->Display();  
    b->Display();  
    c->Display();  
  
    delete a;  
    delete b;  
    delete c;  
    a=b=c=NULL;  
     
}  

