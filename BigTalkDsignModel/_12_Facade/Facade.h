#ifndef FACADE_H  
#define FACADE_H  
  
#include <iostream>  
#include <string>  
  
//SubSystem Class，实现子系统的功能，处理Facade对象指派的任务。注意子类中没有Facade任何信息，即没有对Facade对象的引用。  
//下面是四个子系统的类  
class SubSystemOne  
{  
public:  
    void MethodOne()  
    {  
        std::cout<<"subsystem one"<<std::endl;  
    }  
};  
  
class SubSystemTwo  
{  
public:  
    void MethodTwo()  
    {  
        std::cout<<"subsystem two"<<std::endl;  
    }  
};  
  
class SubSystemThree  
{  
public:  
    void MethodThree()  
    {  
        std::cout<<"subsystem three"<<std::endl;  
    }  
};  
  
class SubSystemFour  
{  
public:  
    void MethodFour()  
    {  
        std::cout<<"subsystem four"<<std::endl;  
    }  
};  
  
//Facade Class，外观类，知道有哪些子系统类，负责处理请求，将客户的请求代理给适当的子系统对象。  
class Facade  
{  
private:  
    SubSystemOne* one;  
    SubSystemTwo* two;  
    SubSystemThree* three;  
    SubSystemFour* four;  
  
public:  
    Facade()  
    {  
        one=new SubSystemOne();  
        two=new SubSystemTwo();  
        three=new SubSystemThree();  
        four=new SubSystemFour();  
    }  
    ~Facade()  
    {  
        delete one;  
        delete two;  
        delete three;  
        delete four;  
    }  
  
    void MethodA()  
    {  
        std::cout<<"Methoed A ------"<<std::endl;  
        one->MethodOne();  
        two->MethodTwo();  
        four->MethodFour();  
        std::cout<<std::endl;  
    }  
  
    void MethodB()  
    {  
        std::cout<<"Methoed B ------"<<std::endl;  
        two->MethodTwo();  
        three->MethodThree();  
        std::cout<<std::endl;  
    }  
};  
  
#endif  

