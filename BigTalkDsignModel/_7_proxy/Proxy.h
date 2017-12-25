#include <iostream>  
#include <string>  
  
//SchoolGirl��  
class SchoolGirl  
{  
private:  
    std::string name;  
public:  
    void setName(std::string name)  
    {  
        this->name=name;  
    }  
    std::string getName()  
    {  
        return name;  
    }  
};  
  
//Subject�࣬������RealSubject��Proxy�Ĺ��ýӿڣ������Ϳ������κ�ʹ��RealSubject�ĵط�ʹ��Proxy  
class IGiveGift  
{  
public:  
    virtual void GiveDolls()=0;  
    virtual void GiveFlowers()=0;  
    virtual void GiveChocolate()=0;  
};  
  
//RealSubject�࣬������Proxy���������ʵʵ��  
class Pursuit:public IGiveGift  
{  
private:  
    SchoolGirl* mm;  
public:  
    Pursuit(SchoolGirl* mm)  
    {  
        this->mm=mm;  
    }  
    void GiveDolls()  
    {  
        std::cout<<mm->getName()<<"  dolly girl"<<std::endl;  
    }  
    void GiveFlowers()  
    {  
        std::cout<<mm->getName()<<"  flower"<<std::endl;  
    }  
    void GiveChocolate()  
    {  
        std::cout<<mm->getName()<<"  chocolate"<<std::endl;  
    }  
};  
  
//Proxy�࣬����һ�������ǵĴ�����Է���ʵ�壬���ṩһ����Subject�Ľӿ���ͬ�Ľӿڣ���������Ϳ����������ʵ��  
class Proxy:public IGiveGift  
{  
private:  
    Pursuit* gg;  
public:  
    Proxy(SchoolGirl* mm)  
    {  
        gg=new Pursuit(mm);  
    }  
    void GiveDolls()  
    {  
        gg->GiveDolls();  
    }  
    void GiveFlowers()  
    {  
        gg->GiveFlowers();  
    }  
    void GiveChocolate()  
    {  
        gg->GiveChocolate();  
    }  
};  

