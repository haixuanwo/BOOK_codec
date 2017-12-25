/*
单例模式：保证一个类仅有一个实例，并提供一个访问他的全局访问点。[DP]

通常我们可以让一个全局变量使得一个对象被访问，但它不能防止你实例化多个对象。一个最好的办法就是，让类自身负责保护它的唯一实例。这个类可以保证没有其他实例可以被创建，并且他可以提供一个访问该实例的方法。



三、注意：

使用单例模式，只能保证一个线程内对象不会被多次创建，而不不能保证多线程的情况。因此，需要考虑多线程的话，就要用锁。

*/

#include <iostream>  
#include "Singleton.h"  
  
//静态成员在类体外定义  
Singleton* Singleton::instance = NULL;  
pthread_mutex_t Singleton::mutex;


int main()  
{  
    //初始化临界区  
    pthread_mutex_init(Singleton::getLock(),NULL);  
  
    Singleton* singleton1=Singleton::GetInstance();  
    Singleton* singleton2=Singleton::GetInstance();  
  
    //删除临界区  
    pthread_mutex_destroy(Singleton::getLock());  
  
    if(singleton1==singleton2)  
        std::cout<<"It's a same object"<<std::endl;    
}  

