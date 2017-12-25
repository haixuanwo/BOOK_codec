#ifndef FLYWEIGHT_H  
#define FLYWEIGHT_H  
  
#include <iostream>  
#include <string>  
#include <map>  
  
//�û���  
class User  
{  
private:  
    std::string name;  
public:  
    User(std::string name)  
    {  
        this->name=name;  
    }  
    std::string GetName()  
    {  
        return this->name;  
    }  
};  
  
//Flyweight�࣬�˴�Ϊ������վ��  
class WebSite  
{  
public:  
    virtual void Use(User user)=0;  
};  
  
//ConcreteFlyweight�࣬�˴�Ϊ������վ��  
class ConcreteWebSite:public WebSite  
{  
private:  
    std::string name;  
public:  
    ConcreteWebSite(std::string name)  
    {  
        this->name=name;  
    }  
    void Use(User user)  
    {  
        std::cout<<"website classify:"<<name<<"  user:"+user.GetName()<<std::endl;  
    }  
};  
  
//FlyweightFactory�࣬�˴�Ϊ��վ������  
class WebSiteFactory  
{  
private:  
    std::map<std::string,WebSite*> flyweights;  
public:  
    WebSiteFactory(){}  
    ~WebSiteFactory()  
    {  
        std::map<std::string,WebSite*>::iterator it;  
          
        for(it=flyweights.begin();it!=flyweights.end();it++)  
            delete it->second;  
    }  
    WebSite* GetWebSiteCategory(std::string key)  
    {  
        std::map<std::string,WebSite*>::iterator it;  
          
        for(it=flyweights.begin();it!=flyweights.end();it++)  
            if(it->first==key)  
                return it->second;  
  
        WebSite* website=new ConcreteWebSite(key);  
        flyweights.insert(std::pair<std::string,WebSite*>(key,website));  
        return website;  
    }  
    int GetWebSiteCount()  
    {  
        return flyweights.size();  
    }  
};  
  
#endif 

