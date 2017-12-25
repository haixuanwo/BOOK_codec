#ifndef TESTPAPER_H  
#define TESTPAPER_H  
  
#include <iostream>  
#include <string>  
  
//AbstractClass��ʵ����һ��ģ�壬�������㷨�ĹǼܣ���ɹǼܵľ��岽�����������ʵ��  
class TestPaper  
{  
public:  
    void TestQuestion1()  
    {  
        std::cout<<"����õ����������˹������������콣�������������������ǡ���a.��ĥ���� b.����� c.���ٺϽ�� d.̼����ά"<<std::endl;  
        std::cout<<"�𰸣�"<<Answer1()<<std::endl;  
    }  
    void TestQuestion2()  
    {  
        std::cout<<"�������Ӣ��½��˫�������黨����ɡ���a.ʹ����ֲ�ﲻ�ٺ��� b.ʹһ����ϡ������� c.�ƻ����Ǹ�����Ȧ����̬ƽ�� d.��ɸõ���ɳĮ��"<<std::endl;  
        std::cout<<"�𰸣�"<<Answer2()<<std::endl;  
    }  
    void TestQuestion3()  
    {  
        std::cout<<"�������ʹ��ɽʦͽ���ҹ�����Ż�²�ֹ��������Ǵ�򣬻�����ǿ�ʲôҩ����a.��˾ƥ�� b.ţ�ƽⶾƬ c.������ d.�����Ǻȴ���ţ��"<<std::endl;  
        std::cout<<"�𰸣�"<<Answer3()<<std::endl;  
    }  
protected:  
    virtual std::string Answer1()  
    {  
        return "";  
    }  
    virtual std::string Answer2()  
    {  
        return "";  
    }  
    virtual std::string Answer3()  
    {  
        return "";  
    }  
};  
      
//ConcreteClass��ʵ�־��岽��  
class TestPaperA:public TestPaper  
{  
protected:  
    virtual std::string Answer1()  
    {  
        return "b";  
    }  
    virtual std::string Answer2()  
    {  
        return "c";  
    }  
    virtual std::string Answer3()  
    {  
        return "a";  
    }  
};  
  
//ConcreteClass��ʵ�־��岽��  
class TestPaperB:public TestPaper  
{  
protected:  
    virtual std::string Answer1()  
    {  
        return "c";  
    }  
    virtual std::string Answer2()  
    {  
        return "a";  
    }  
    virtual std::string Answer3()  
    {  
        return "a";  
    }  
};  
  
#endif  

