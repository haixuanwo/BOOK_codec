#ifndef ADAPTER_H  
#define ADAPTER_H  
  
#include <string>  
#include <iostream>  
  
//Target,此处为运动员  
class Player  
{  
protected:  
    std::string name;  
public:  
    Player(std::string name)  
    {  
        this->name=name;  
    }  
    virtual void Attack()=0;  
    virtual void Defense()=0;  
};  
  
//Adaptee，此处为外籍中锋，它的接口和Target的接口不一样，需要翻译来帮忙转换  
class ForeignCenter  
{  
private:  
    std::string name;  
public:  
    void SetName(std::string name)  
    {  
        this->name=name;  
    }  
    std::string GetName()  
    {  
        return name;  
    }  
    void ForeignAttack()  
    {  
        std::cout<<"ForeignCenter  "<<name<<"  attack"<<std::endl;  
    }  
  
    void ForeignDefense()  
    {  
        std::cout<<"ForeignCenter  "<<name<<"  defense"<<std::endl;  
    }  
};  
  
//Adapter,此处为翻译  
class Translator:public Player  
{  
private:  
    ForeignCenter* wjzf;  
public:  
    Translator(std::string name):Player(name)  
    {  
        wjzf=new ForeignCenter;  
        wjzf->SetName(name);  
    }  
    ~Translator()  
    {  
        delete wjzf;  
    }  
    void Attack()  
    {  
        wjzf->ForeignAttack();  
    }  
  
    void Defense()  
    {  
        wjzf->ForeignDefense();  
    }  
};  
  
  
//下面是普通的  接口和Target接口一样的 3个子类，必须要翻译  
//前锋  
class Forwards:public Player  
{  
public:  
    Forwards(std::string name):Player(name){}  
  
    void Attack()  
    {  
        std::cout<<"Forwards  "<<name<<"  Attack"<<std::endl;  
    }  
  
    void Defense()  
    {  
        std::cout<<"Forwards  "<<name<<"  Defense"<<std::endl;  
    }  
};  
  
//中锋  
class Center:public Player  
{  
public:  
    Center(std::string name):Player(name){}  
  
    void Attack()  
    {  
        std::cout<<"Center  "<<name<<"  Attack"<<std::endl;  
    }  
  
    void Defense()  
    {  
        std::cout<<"Center  "<<name<<"  Defense"<<std::endl;  
    }  
};  
  
//后卫  
class Guards:public Player  
{  
public:  
    Guards(std::string name):Player(name){}  
  
    void Attack()  
    {  
        std::cout<<"Guards  "<<name<<"  Attack"<<std::endl;  
    }  
  
    void Defense()  
    {  
        std::cout<<"Guards  "<<name<<"  Defense"<<std::endl;  
    }  
};  
  
  
  
  
#endif  
