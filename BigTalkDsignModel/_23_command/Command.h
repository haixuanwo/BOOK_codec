#ifndef COMMAND_H  
#define COMMAND_H  
  
#include <iostream>  
#include <string>  
#include <vector>  
#include <ctime>
#include <typeinfo>

  
//Receiver：此处为烤羊肉串者  
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
  
//Command类，抽象命令  
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
  
//ConcreteCommand类，具体命令  
class BakeMuttonCommand:public Command  
{  
public:  
    BakeMuttonCommand(Barbecuer* receiver):Command(receiver){}  
    void ExcuteCommand()  
    {  
        receiver->BakeMutton();  
    }  
};  
  
//ConcreteCommand类，具体命令  
class BakeChickenWingCommand:public Command  
{  
public:  
    BakeChickenWingCommand(Barbecuer* receiver):Command(receiver){}  
    void ExcuteCommand()  
    {  
        receiver->BakeChickenWing();  
    }  
};  
  
//Invoker：此处为Waiter服务员  
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
      
    //设置订单  
    void SetOrder(Command* command)  
    {  
        //判断命令的类型并分别做不同的处理  
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
  
    //通知全部执行  
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
