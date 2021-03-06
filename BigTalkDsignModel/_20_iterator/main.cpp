/*
二、概念 

迭代器模式（Iterator）：提供一种方法顺序访问一个聚合对象中各个元素，而又不暴露该对象的内部表示。


三、说明

什么时候用？

（1）当你需要访问一个聚集对象，而且不管这些对象时什么都需要遍历的时候，你就应该考虑用迭代器模式。

（2）你需要对聚集有多种遍历时，可以考虑用迭代器模式。

（3）为遍历不同的聚集结构提供如开始、下一个、是否结束、当前哪一项等统一的接口。

迭代器模式的好处？

迭代器模式就是分离了集合对象的遍历行为，抽象出一个迭代器类来负责，这样既可以不暴露集合的内部结构，又可让外部代码透明地访问集合内部的数据。

*/
#include "Iterator.h"  
#include "Aggregate.h"  
#include <iostream>  
#include <cstdlib>  
  
//Client客户端  
int main()  
{  
    //公交车，即聚集对象  
    ConcreteAggregate* a=new ConcreteAggregate();  
      
    //新上来的乘客  
    a->GetVector()->push_back("big bird");  
    a->GetVector()->push_back("small cai");  
    a->GetVector()->push_back("baggage");  
    a->GetVector()->push_back("foreigner");  
    a->GetVector()->push_back("bus interal work");  
    a->GetVector()->push_back("thief");  
  
    //售票员出场，先看好了上车的是哪些人，即声明了迭代器对象。  
    //下面两种获取迭代器的方法都可以  
    //Iterator* i=new ConcreteIterator(a);  
      
    //产生从前往后的迭代器  
    Iterator* it1=a->CreateIterator();  
      
    //告知每一位乘客买票  
    std::cout<<"forward iterator:"<<std::endl<<std::endl;  
    while(!it1->IsDone())  
    {  
        std::cout<<it1->CurrentItem()<<"  please buy ticket"<<std::endl;  
        it1->Next();  
    }  
    std::cout<<std::endl;  
  
    //产生从后往前的迭代器  
    Iterator* it2=a->CreateIteratorDesc();  
  
    //告知每一位乘客买票  
    std::cout<<"reverser iterator:"<<std::endl<<std::endl;  
    while(!it2->IsDone())  
    {  
        std::cout<<it2->CurrentItem()<<"  please buy ticket"<<std::endl;  
        it2->Next();  
    }  
    std::cout<<std::endl<<std::endl;  
  
    delete a,it1,it2;  
  
}  

