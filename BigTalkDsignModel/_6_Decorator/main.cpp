/*

二、概念

装饰模式：动态地给一个对象添加一些额外的职责，就增加功能来说，装饰模式比生成子类更为灵活。



三、说明

角色：

（1）Component是定义一个对象，可以给这些对象动态地添加职责。

（2）ConcreteComponent是定义了一个具体的对象，也可以给这个对象增加一些职责。

（3）Decorator，装饰抽象类，继承了Component，从外类来扩展Component类的功能，但是对于Component来说，是无需知道Decorator的存在的。

（4）至于ConcreteDecorator就是具体的装饰对象，起到给Component添加职责的作用。

什么时候用：

（1）需要在内部组装完成再显示出来的情况。

（2）类似于建造者模式，但是建造者模式的要求见到的过程必须是稳定的，而装饰模式的建造过程是不稳定的。

（3）我们需要把所需的功能按正确的顺序串联起来进行控制。

优点：

（1）把类的装饰功能从类中搬移去除，这样可以简化原有的类。

（2）有效地把类的核心职责和装饰功能区分开来，而且可以去除相关类中重复的装饰逻辑。

和建造者模式的区别？

建造者模式要求建造的过程必须是稳定的，而装饰模式的建造过程是不稳定的，可以有各种各样的组合方式。


*/


#include "Finery.h"  
#include <string>  
#include <iostream>  
  
//客户端  
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

