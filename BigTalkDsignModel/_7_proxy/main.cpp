/*
二、概念

代理模式：为其他对象提供一种代理以控制对这个对象的访问。



三、应用场景

（1）远程代理，也就是为一个对象在不同的地址空间提供局部代表。这样可以隐藏一个对象存在于不同地址空间的事实。

（2）虚拟代理，是根据需要创建开销很大的对象。通过他来存放实例化需要很长时间的真实对象。例如：图片加载的时候。

（3）安全代理，用来控制真是对象访问时的权限。

（4）智能指引，是指当调用真实的对象的时候，代理处理另外一些事。

根本原理：代理模式其实就是在访问对象的时候引入了一定程度的间接性，因为这种间接性，可以附加多种用途。

*/


#include "Proxy.h"  
#include <iostream>  
#include <stdlib.h>  
  
//Client，客户端  
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

