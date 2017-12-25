/*
�������� 

������ģʽ��Iterator�����ṩһ�ַ���˳�����һ���ۺ϶����и���Ԫ�أ����ֲ���¶�ö�����ڲ���ʾ��


����˵��

ʲôʱ���ã�

��1��������Ҫ����һ���ۼ����󣬶��Ҳ�����Щ����ʱʲô����Ҫ������ʱ�����Ӧ�ÿ����õ�����ģʽ��

��2������Ҫ�Ծۼ��ж��ֱ���ʱ�����Կ����õ�����ģʽ��

��3��Ϊ������ͬ�ľۼ��ṹ�ṩ�翪ʼ����һ�����Ƿ��������ǰ��һ���ͳһ�Ľӿڡ�

������ģʽ�ĺô���

������ģʽ���Ƿ����˼��϶���ı�����Ϊ�������һ���������������������ȿ��Բ���¶���ϵ��ڲ��ṹ���ֿ����ⲿ����͸���ط��ʼ����ڲ������ݡ�

*/
#include "Iterator.h"  
#include "Aggregate.h"  
#include <iostream>  
#include <cstdlib>  
  
//Client�ͻ���  
int main()  
{  
    //�����������ۼ�����  
    ConcreteAggregate* a=new ConcreteAggregate();  
      
    //�������ĳ˿�  
    a->GetVector()->push_back("big bird");  
    a->GetVector()->push_back("small cai");  
    a->GetVector()->push_back("baggage");  
    a->GetVector()->push_back("foreigner");  
    a->GetVector()->push_back("bus interal work");  
    a->GetVector()->push_back("thief");  
  
    //��ƱԱ�������ȿ������ϳ�������Щ�ˣ��������˵���������  
    //�������ֻ�ȡ�������ķ���������  
    //Iterator* i=new ConcreteIterator(a);  
      
    //������ǰ����ĵ�����  
    Iterator* it1=a->CreateIterator();  
      
    //��֪ÿһλ�˿���Ʊ  
    std::cout<<"forward iterator:"<<std::endl<<std::endl;  
    while(!it1->IsDone())  
    {  
        std::cout<<it1->CurrentItem()<<"  please buy ticket"<<std::endl;  
        it1->Next();  
    }  
    std::cout<<std::endl;  
  
    //�����Ӻ���ǰ�ĵ�����  
    Iterator* it2=a->CreateIteratorDesc();  
  
    //��֪ÿһλ�˿���Ʊ  
    std::cout<<"reverser iterator:"<<std::endl<<std::endl;  
    while(!it2->IsDone())  
    {  
        std::cout<<it2->CurrentItem()<<"  please buy ticket"<<std::endl;  
        it2->Next();  
    }  
    std::cout<<std::endl<<std::endl;  
  
    delete a,it1,it2;  
  
}  

