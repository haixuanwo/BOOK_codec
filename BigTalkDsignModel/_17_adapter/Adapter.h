#ifndef ADAPTER_H  
#define ADAPTER_H  
  
#include <string>  
#include <iostream>  
  
//Target,�˴�Ϊ�˶�Ա  
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
  
//Adaptee���˴�Ϊ�⼮�з棬���Ľӿں�Target�Ľӿڲ�һ������Ҫ��������æת��  
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
  
//Adapter,�˴�Ϊ����  
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
  
  
//��������ͨ��  �ӿں�Target�ӿ�һ���� 3�����࣬����Ҫ����  
//ǰ��  
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
  
//�з�  
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
  
//����  
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
