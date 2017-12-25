#ifndef MEMENTO_H  
#define MEMENTO_H  
  
#include <iostream>  
#include <string>  
  
//Memento�࣬����¼���˴�Ϊ��ɫ״̬�洢��RoleStateMemento class  
class RoleStateMemento  
{  
private:  
    //������  
    int vit;  
    //������  
    int atk;  
    //������  
    int def;  
public:  
    RoleStateMemento(int vit,int atk,int def)  
    {  
        this->vit=vit;  
        this->atk=atk;  
        this->def=def;  
    }  
    int GetVitality()  
    {  
        return vit;  
    }  
    void SetVitality(int vit)  
    {  
        this->vit=vit;  
    }  
    int GetAttack()  
    {  
        return atk;  
    }  
    void SetAttack(int atk)  
    {  
        this->atk=atk;  
    }  
    int GetDefense()  
    {  
        return def;  
    }  
    void SetDefense(int def)  
    {  
        this->def=def;  
    }  
};  
  
//Originator�������ˣ��˴�Ϊ��Ϸ��ɫ��GameRole class  
class GameRole  
{  
private:  
    //������  
    int vit;  
    //������  
    int atk;  
    //������  
    int def;  
public:  
    int GetVitality()  
    {  
        return vit;  
    }  
    void SetVitality(int vit)  
    {  
        this->vit=vit;  
    }  
    int GetAttack()  
    {  
        return atk;  
    }  
    void SetAttack(int atk)  
    {  
        this->atk=atk;  
    }  
    int GetDefense()  
    {  
        return def;  
    }  
    void SetDefense(int def)  
    {  
        this->def=def;  
    }  
  
    void GetInitState()  
    {  
        this->vit=100;  
        this->atk=100;  
        this->def=100;  
    }  
    void Fight()  
    {  
        this->vit=0;  
        this->atk=0;  
        this->def=0;  
    }  
    void StateDisplay()  
    {  
        std::cout<<"the role state:"<<std::endl;  
        std::cout<<"vitality:"<<this->vit<<std::endl;  
        std::cout<<"attack:"<<this->atk<<std::endl;  
        std::cout<<"defense:"<<this->def<<std::endl<<std::endl;  
    }  
    //�������ɫ״̬������������Ϸ��ɫ������״ֵ̬ͨ��ʵ��������ɫ״̬�洢�䡱����  
    RoleStateMemento* SaveState()  
    {  
        return new RoleStateMemento(vit,atk,def);  
    }  
    //���ָ���ɫ״̬���������ɽ��ⲿ�ġ���ɫ״̬�洢�䡱�е�״ֵ̬�ָ�����Ϸ��ɫ  
    void RocoveryState(RoleStateMemento memento)  
    {  
        this->vit=memento.GetVitality();  
        this->atk=memento.GetAttack();  
        this->def=memento.GetDefense();  
    }  
};  
  
//Caretaker�������ߣ��˴�Ϊ��Ϸ��ɫ�����࣬RoleStateCaretaker class  
class RoleStateCaretaker  
{  
private:  
    RoleStateMemento* memento;  
public:  
    RoleStateCaretaker()  
    {  
        memento=NULL;  
    }  
    ~RoleStateCaretaker()  
    {  
        if(memento!=NULL)  
        {  
            delete memento;  
            memento=NULL;  
        }  
    }  
    RoleStateMemento* GetMemento()  
    {  
        return memento;  
    }  
    void SetMemento(RoleStateMemento* memento)  
    {  
        this->memento=memento;  
    }  
};  
  
#endif  
