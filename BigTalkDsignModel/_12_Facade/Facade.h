#ifndef FACADE_H  
#define FACADE_H  
  
#include <iostream>  
#include <string>  
  
//SubSystem Class��ʵ����ϵͳ�Ĺ��ܣ�����Facade����ָ�ɵ�����ע��������û��Facade�κ���Ϣ����û�ж�Facade��������á�  
//�������ĸ���ϵͳ����  
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
  
//Facade Class������֪࣬������Щ��ϵͳ�࣬���������󣬽��ͻ������������ʵ�����ϵͳ����  
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

