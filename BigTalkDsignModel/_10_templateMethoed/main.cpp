/*
��������

ģ�巽��ģʽ������һ�������е��㷨�ĹǼܣ�����һЩ�����ӳٵ������С�ģ�巽��ʹ��������Բ��ı�һ���㷨�Ľṹ�����ض�����㷨��ĳЩ�ض����衣



����˵��

��ɫ��

��1��AbstractClass���ǳ����࣬��ʵҲ����һ������ģ�壬���岢ʵ����һ��ģ�巽�������ģ�巽��һ����һ�����巽������������һ�������߼��Ŀ�ܣ����߼�����ɲ�������Ӧ�ĳ�������У��Ƴٵ�����ʵ�֡������߼�Ҳ�п��ܵ���һЩ���巽����

��2��ConcreteClass��ʵ�ָ����������һ���������󷽷���ÿһ��AbstractClass��������������ConcreteClass��֮��Ӧ����ÿһ��ConcreteClass�����Ը�����Щ���󷽷���Ҳ���Ƕ����߼�����ɲ��裩�Ĳ�ͬʵ�֣��Ӷ�ʹ�ö����߼���ʵ�ָ�����ͬ��

�ܽ᣺������ĺͿɱ����Ϊ�ڷ���������ʵ���л����һ���ʱ�򣬲������Ϊ�ͻ����������ظ����֡�����ͨ��ģ�巽��ģʽ������Щ��Ϊ���Ƶ���һ�ĵط�������������������ظ��Ĳ�����Ϊ�ľ�����

       ע�⣺�ڡ������ģʽ���������У�AbstractClassΪTestPaper�࣬ConcreteClassΪTestPaperA��TestPaperB����������UMLͼ�е�TemplateMethod����ΪTestQuestion1������primitiveOperation1Ϊ����Answer1������primitiveOperation1Ϊ����Answer2�����ȵȡ�

*/

#include "TestPaper.h"  
#include <iostream>  
#include <cstdlib>  
  
//Client���ͻ���  
int main()  
{  
    std::cout<<"the A student copyed test:"<<std::endl;  
    TestPaper* studentA=new TestPaperA();  
    studentA->TestQuestion1();  
    studentA->TestQuestion2();  
    studentA->TestQuestion3();  
    std::cout<<std::endl;  
  
    std::cout<<"the B student copyed test:"<<std::endl;  
    TestPaper* studentB=new TestPaperB();  
    studentB->TestQuestion1();  
    studentB->TestQuestion2();  
    studentB->TestQuestion3();  
    std::cout<<std::endl;  
  
    delete studentA;  
    delete studentB;  
    
} 

