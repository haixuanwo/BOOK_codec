#ifndef COMMAND_H  
#define COMMAND_H  
  
#include <iostream>  
#include <string>  
#include <vector>  
#include <ctime>
#include <typeinfo>

  
//Receiver���˴�Ϊ�����⴮��  
class Barbecuer  
{  
public:  
    void BakeMutton()  
    {  
        std::cout<<"roast mutton"<<std::endl;  
    }  
    void BakeChickenWing()  
    {  
        std::cout<<"roast chicken wing"<<std::endl;  
    }  
};  
  
//Command�࣬��������  
class Command  
{  
protected:  
    Barbecuer* receiver;  
public:  
    Command(Barbecuer* receiver)  
    {  
        this->receiver=receiver;  
    }  
    virtual void ExcuteCommand()=0;  
};  
  
//ConcreteCommand�࣬��������  
class BakeMuttonCommand:public Command  
{  
public:  
    BakeMuttonCommand(Barbecuer* receiver):Command(receiver){}  
    void ExcuteCommand()  
    {  
        receiver->BakeMutton();  
    }  
};  
  
//ConcreteCommand�࣬��������  
class BakeChickenWingCommand:public Command  
{  
public:  
    BakeChickenWingCommand(Barbecuer* receiver):Command(receiver){}  
    void ExcuteCommand()  
    {  
        receiver->BakeChickenWing();  
    }  
};  
  
//Invoker���˴�ΪWaiter����Ա  
class Waiter  
{  
private:  
    std::vector<Command*> *orders;  
public:  
    Waiter()  
    {  
        orders=new std::vector<Command*>;  
    }  
    ~Waiter()  
    {  
        delete orders;  
    }  
      
    //���ö���  
    void SetOrder(Command* command)  
    {  
        //�ж���������Ͳ��ֱ�����ͬ�Ĵ���  
        if(typeid(*command)==typeid(BakeChickenWingCommand))  
        {  
            std::cout<<"log: waiter: have no chicken wing, you can get some other"<<std::endl;  
        }  
        else if(typeid(*command)==typeid(BakeMuttonCommand))  
        {  
            orders->push_back(command);  
              
            time_t now=time(0);  
            std::cout<<"log: add indent: command mode roast mutton "<<"time:"<<asctime(gmtime(&now));  
        }  
        else  
        {  
            std::cout<<"log: now have not the service"<<std::endl;
        }  
    }  
  
    //֪ͨȫ��ִ��  
    void Notify()  
    {  
        std::vector<Command*>::iterator it;  
        for(it=orders->begin();it!=orders->end();it++)  
        {  
            (*it)->ExcuteCommand();  
        }  
    }  
};  
  
  
  
  
#endif 
