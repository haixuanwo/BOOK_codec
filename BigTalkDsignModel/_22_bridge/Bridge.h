#ifndef BRIDGE_H  
#define BRIDGE_H  
  
#include <iostream>  
#include <string>  
  
//Implementor���˴�Ϊ�ֻ����������  
class HandsetSoft  
{  
public:  
    virtual void Run()=0;  
};  
  
//ConcreteImplementorA���˴�Ϊ�ֻ���Ϸ  
class HandsetGame:public HandsetSoft  
{  
    void Run()  
    {  
        std::cout<<"run phone game"<<std::endl;  
    }  
};  
  
//ConcreteImplementorB���˴�Ϊ�ֻ�ͨѶ¼  
class HandsetAddressList:public HandsetSoft  
{  
    void Run()  
    {  
        std::cout<<"run phone contact list"<<std::endl;  
    }  
};  
  
//Abstraction���˴�Ϊ�ֻ�Ʒ�Ƴ�����  
class HandsetBrand  
{  
protected:  
    HandsetSoft* soft;  
public:  
    void SetHandsetSoft(HandsetSoft* soft)  
    {  
        this->soft=soft;  
    }  
    virtual void Run()=0;  
};  
  
//RefineAbstraction���˴�Ϊ�ֻ�ƷN  
class HandsetBrandN:public HandsetBrand  
{  
public:  
    void Run()  
    {  
        soft->Run();  
    }  
};  
  
//RefineAbstraction���˴�Ϊ�ֻ�ƷM  
class HandsetBrandM:public HandsetBrand  
{  
public:  
    void Run()  
    {  
        soft->Run();  
    }  
};  
  
  
#endif 
