/*
��������

����ģʽ��Ϊ���������ṩһ�ִ����Կ��ƶ��������ķ��ʡ�



����Ӧ�ó���

��1��Զ�̴���Ҳ����Ϊһ�������ڲ�ͬ�ĵ�ַ�ռ��ṩ�ֲ�����������������һ����������ڲ�ͬ��ַ�ռ����ʵ��

��2����������Ǹ�����Ҫ���������ܴ�Ķ���ͨ���������ʵ������Ҫ�ܳ�ʱ�����ʵ�������磺ͼƬ���ص�ʱ��

��3����ȫ���������������Ƕ������ʱ��Ȩ�ޡ�

��4������ָ������ָ��������ʵ�Ķ����ʱ�򣬴���������һЩ�¡�

����ԭ������ģʽ��ʵ�����ڷ��ʶ����ʱ��������һ���̶ȵļ���ԣ���Ϊ���ּ���ԣ����Ը��Ӷ�����;��

*/


#include "Proxy.h"  
#include <iostream>  
#include <stdlib.h>  
  
//Client���ͻ���  
int main()  
{  
    SchoolGirl* jiaojiao=new SchoolGirl();  
    jiaojiao->setName("jiaojiao");  
  
    Proxy* daili=new Proxy(jiaojiao);  
  
    daili->GiveDolls();  
    daili->GiveFlowers();  
    daili->GiveChocolate();  
  
    delete jiaojiao;  
        jiaojiao=NULL;  
    delete daili;  
        daili=NULL;  
}  

