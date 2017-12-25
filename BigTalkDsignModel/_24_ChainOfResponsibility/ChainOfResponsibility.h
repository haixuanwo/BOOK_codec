#ifndef CHAINOFRESPONSIBILITY_H  
#define CHAINOFRESPONSIBILITY_H  
  
#include <string>  
#include <iostream>  
  
//请求类  
class Request  
{  
private:  
    //请求的类型、内容、数量  
    std::string requestType;  
    std::string requestContent;  
    int number;  
public:  
    void SetType(std::string type)  
    {  
        this->requestType=type;  
    }  
    std::string GetType()  
    {  
        return requestType;  
    }  
    void SetContent(std::string content)  
    {  
        this->requestContent=content;  
    }  
    std::string GetContent()  
    {  
        return requestContent;  
    }  
    void SetNumber(int number)  
    {  
        this->number=number;  
    }  
    int GetNumber()  
    {  
        return this->number;  
    }  
};  
  
//Handler类，此处为Manager类  
class Manager  
{  
protected:  
    std::string name;  
    Manager* superior;  
public:  
    Manager(){}  
    Manager(std::string name)  
    {  
        this->name=name;  
        superior=NULL;  
    }  
    ~Manager()  
    {  
                if(superior!=NULL)  
                 delete superior;  
    }  
  
    //设置继任者  
    void SetSuperior(Manager* superior)  
    {  
        this->superior=superior;  
    }  
    //处理请求的抽象方法  
    virtual void RequestApplication(Request* request){};  
};  
  
//ConcreteHandler1：此处为经理，CommonManager  
class CommonManager:public Manager  
{  
public:  
    CommonManager(std::string name):Manager(name){}  
    void RequestApplication(Request* request)  
    {  
        if(request->GetType()=="leave"&&request->GetNumber()<=2)  
        {  
            std::cout<<name<<":"<<request->GetContent()<<"  amount:"<<request->GetNumber()<<" be permited"<<std::endl;  
        }  
        //自己处理不了，转移到下一位进行处理。  
        else  
        {  
            if(superior!=NULL)  
            {  
                superior->RequestApplication(request);  
            }  
        }  
    }  
};  
  
//ConcreteHandler2：此处为总监，Majordomo  
class Majordomo:public Manager  
{  
public:  
    Majordomo(std::string name):Manager(name){}  
    void RequestApplication(Request* request)  
    {  
        if(request->GetType()=="leave"&&request->GetNumber()<=5)  
        {  
            std::cout<<name<<":"<<request->GetContent()<<"  amount:"<<request->GetNumber()<<" be permited"<<std::endl;  
        }  
        //自己处理不了，转移到下一位进行处理。  
        else  
        {  
            if(superior!=NULL)  
            {  
                superior->RequestApplication(request);  
            }  
        }  
    }  
};  
  
//ConcreteHandler3:此处为总经理，GeneralManager  
class GeneralManager:public Manager  
{  
public:  
    GeneralManager(std::string name):Manager(name){}  
    void RequestApplication(Request* request)  
    {  
        if(request->GetType()=="leave")  
        {  
            std::cout<<name<<":"<<request->GetContent()<<"  amount:"<<request->GetNumber()<<"  be permited"<<std::endl;  
        }  
        else if(request->GetType()=="raises"&&request->GetNumber()<=500)  
        {  
            std::cout<<name<<":"<<request->GetContent()<<"  amount:"<<request->GetNumber()<<"  be permited"<<std::endl;  
        }  
        else if(request->GetType()=="raises"&&request->GetNumber()>500)  
        {  
            std::cout<<name<<":"<<request->GetContent()<<"  amount:"<<request->GetNumber()<<"  talk about later"<<std::endl;  
        }  
    }  
};  
  
#endif  
