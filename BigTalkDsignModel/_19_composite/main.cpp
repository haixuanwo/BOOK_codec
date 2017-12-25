/*
��������

���ģʽ��Composite������������ϳ����νṹ�Ա�ʾ������-���塱�Ĳ�νṹ�����ģʽʹ���û��Ե����������϶����ʹ�þ���һ���ԡ�


����˵��

��ɫ��

��1��Component��Ϊ����еĶ��������ӿڣ����ʵ�����£�ʵ�������๲�нӿڵ�Ĭ����Ϊ������һ���ӿ����ڷ��ʺ͹���Component ���Ӳ�����

��2��Leaf��������а�Ŷ��Ҷ�ڵ����Ҷ�ڵ�û���ӽڵ㡣

��3��Composite��������֦�ڵ���Ϊ�������洢�Ӳ�������Component�ӿ���ʵ�����Ӳ����йصĲ�������������Add��ɾ��Remove��

ʲôʱ��ʹ�����ģʽ

���㷢�������������ֲ����������εĽṹʱ���Լ���ϣ���û����Ժ�����϶����뵥������Ĳ�ͬ��ͳһ��ʹ����Ͻṹ�е����ж���ʱ����Ӧ�ÿ��������ģʽ�ˡ�

ʹ�����ģʽ�ĺô���

��1�����ģʽ�����˰�����������Leaf������϶���Composite�������νṹ������������Ա���ϳɸ����ӵ���϶��󣬶������϶����ֿ��Ա���ϣ��������ϵصع���ȥ���ͻ������У��κ��õ���������ĵط�������ʹ����϶����ˡ�

��2���û����ù��ĵ����Ǵ���һ��Ҷ�ӽڵ㻹�Ǵ���һ����������Ҳ�Ͳ���Ϊ������϶�дһЩ�ж�����ˡ�

��3�������֮�����ģʽ�ÿͻ�����һ�µ�ʹ����Ͻṹ�͵�������

*/
#include "Composite.h"  
#include <iostream>  
#include <string>  
#include <cstdlib>  
  
//Client���ͻ���  
int main()  
{  
    Company* root=new ConcreteCompany("beijing headquarters");  
    root->Add(new HRDepartment("headquarters manpower"));  
    root->Add(new FinanceDepartment("headquarters finance"));  
  
    Company* comp=new ConcreteCompany("shanghai huadong branch office");  
    comp->Add(new HRDepartment("huadong manpower"));  
    comp->Add(new FinanceDepartment("huadong finance"));  
  
    root->Add(comp);  
  
    Company* comp1=new ConcreteCompany("nanjing office");  
    comp1->Add(new HRDepartment("nanjing office manpower"));  
    comp1->Add(new FinanceDepartment("nanjing office finance"));  
  
    comp->Add(comp1);  
  
    Company* comp2=new ConcreteCompany("hanzhou office");  
    comp2->Add(new HRDepartment("hanzhou office manpower"));  
    comp2->Add(new FinanceDepartment("hanzhou office finance"));  
  
    comp->Add(comp2);  
  
    std::cout<<"structure chart"<<std::endl<<std::endl;  
    root->Display(1);  
  
    std::cout<<std::endl<<"responsibility"<<std::endl<<std::endl;  
    root->LineOfDuty();  
  
    delete root;    
}  

