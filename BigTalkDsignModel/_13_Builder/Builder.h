#ifndef BUILDER_H  
#define BUILDER_H  
  
#include <string>  
#include <vector>  
#include <iostream>  
  
  
//Product Class����Ʒ�࣬�ж��������ɡ�  
class Product  
{  
private:      
    std::vector<std::string> parts;  
public:  
    //��Ӳ�Ʒ����  
    void Add(std::string part)  
    {  
        parts.push_back(part);  
    }  
    //�о����еĲ�Ʒ����  
    void Show()  
    {  
        std::cout<<"product  create ------"<<std::endl;  
        std::vector<std::string>::iterator it;  
        for(it=parts.begin();it!=parts.end();it++)  
        {  
            std::cout<<*it<<std::endl;  
        }  
    }  
};  
  
//Builder����������  
class Builder  
{  
public:  
    virtual void BuildPartA()=0;  
    virtual void BuildPartB()=0;  
    virtual Product* GetResult()=0;  
};  
  
//ConcreteBuilder1,���彨������  
class ConcreteBuilder1:public Builder  
{  
private:  
    Product* product;  
public:  
    ConcreteBuilder1()  
    {  
        product=new Product();  
    }  
    ~ConcreteBuilder1()  
    {  
        delete product;  
    }  
    void BuildPartA()  
    {  
        product->Add("part A");  
    }  
    void BuildPartB()  
    {  
        product->Add("part B");  
    }  
    Product* GetResult()  
    {  
        return product;  
    }  
};  
  
//ConcreteBuilder2,���彨������  
class ConcreteBuilder2:public Builder  
{  
private:  
    Product* product;  
public:  
    ConcreteBuilder2()  
    {  
        product=new Product();  
    }  
    ~ConcreteBuilder2()  
    {  
        delete product;  
    }  
    void BuildPartA()  
    {  
        product->Add("part X");  
    }  
    void BuildPartB()  
    {  
        product->Add("part Y");  
    }  
    Product* GetResult()  
    {  
        return product;  
    }  
};  
  
//Director Class��ָ�����ࡣ  
class Director  
{  
public:  
    void Construct(Builder* builder)  
    {  
        builder->BuildPartA();  
        builder->BuildPartB();  
    }  
};  
  
  
  
  
#endif  


