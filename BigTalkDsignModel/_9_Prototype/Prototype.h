#ifndef PROTOTYPE_H  
#define PROTOTYPE_H  
  
#include <iostream>  
#include <string>  
  
//���������ࣺWorkExperience��  
class WorkExperience  
{  
private:  
    std::string workDate;  
    std::string company;  
public:  
    WorkExperience(){}  
    ~WorkExperience(){}  
    //����¡���õĹ��캯��  
    WorkExperience(WorkExperience* work)  
    {  
        this->workDate=work->workDate;  
        this->company=work->company;  
    }  
    std::string getWorkDate()  
    {  
        return workDate;  
    }  
    void setWorkDate(std::string workDate)  
    {  
        this->workDate=workDate;  
    }  
    std::string getCompany()  
    {  
        return company;  
    }  
    void setCompany(std::string company)  
    {  
        this->company=company;  
    }  
  
    //��¡  
    WorkExperience*  Clone()  
    {  
        //���ù���¡���õĹ��캯��WorkExperience��WorkExperience��  
        return new WorkExperience(this);  
    }  
};  
  
//ԭ���࣬����һ����¡����Ľӿڡ�  
class Prototype  
{  
protected:  
    std::string name;  
    std::string sex;  
    std::string age;  
    std::string timeArea;  
    std::string company;  
public:  
    virtual void SetPersonalInfo(std::string sex,std::string age)=0;  
    virtual void Display()=0;  
    virtual Prototype* Clone()=0;  
  
};  
  
//����ԭ���࣬��ConcretePrototype�࣬������Ϊ����Resume�࣬ʵ��һ����¡����Ĳ�����  
class Resume:public Prototype  
{  
private:  
    WorkExperience* work;  
public:  
    Resume(std::string name)  
    {  
        this->name=name;  
        work=new WorkExperience();  
    }  
    ~Resume()  
    {  
        if(work!=NULL)  
            delete work;  
    }  
    //����¡���õĹ��캯��  
    Resume(WorkExperience* work)  
    {  
        this->work=work->Clone();  
    }  
    void SetPersonalInfo(std::string sex,std::string age)  
    {  
        this->sex=sex;  
        this->age=age;  
    }  
    void SetWorkExperience(std::string workDate,std::string company)  
    {  
        work->setWorkDate(workDate);  
        work->setCompany(company);  
    }  
    void Display()  
    {  
        std::cout<<name<<"  "<<sex<<"  "<<age<<std::endl;  
        std::cout<<"work  experience "<<work->getWorkDate()<<"  "<<work->getCompany()<<std::endl;  
    }  
  
    //��¡  
    Resume* Clone()  
    {  
        //���� ����¡�������õĹ��캯��Resume(work)  
        Resume *cloneResume=new Resume(work);  
        cloneResume->name=this->name;  
        cloneResume->age=this->age;  
        cloneResume->sex=this->sex;  
        return cloneResume;  
    }  
};  
  
  
#endif 

