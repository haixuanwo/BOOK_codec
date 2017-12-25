#ifndef CHAINOFRESPONSIBILITY_H  
#define CHAINOFRESPONSIBILITY_H  
  
#include <string>  
#include <iostream>  
  
//������  
class Request  
{  
private:  
    //��������͡����ݡ�����  
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
  
//Handler�࣬�˴�ΪManager��  
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
  
    //���ü�����  
    void SetSuperior(Manager* superior)  
    {  
        this->superior=superior;  
    }  
    //��������ĳ��󷽷�  
    virtual void RequestApplication(Request* request){};  
};  
  
//ConcreteHandler1���˴�Ϊ����CommonManager  
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
        //�Լ������ˣ�ת�Ƶ���һλ���д���  
        else  
        {  
            if(superior!=NULL)  
            {  
                superior->RequestApplication(request);  
            }  
        }  
    }  
};  
  
//ConcreteHandler2���˴�Ϊ�ܼ࣬Majordomo  
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
        //�Լ������ˣ�ת�Ƶ���һλ���д���  
        else  
        {  
            if(superior!=NULL)  
            {  
                superior->RequestApplication(request);  
            }  
        }  
    }  
};  
  
//ConcreteHandler3:�˴�Ϊ�ܾ���GeneralManager  
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
