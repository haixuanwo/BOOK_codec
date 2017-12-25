/*
��������

���󷽷�ģʽ��Abstract Factory�����ṩһ������һϵ����ػ�����������Ľӿڣ�������ָ�����Ǿ�����ࡣ


���������Ľ�ɫ

��1�����󹤳�

��2�����幤�����������幤��1�;��幤��2�����幤��1�������������ƷA1�;����ƷB1�����幤��2�������������ƷA2�;����ƷB2��

��3�������Ʒ�����������ƷA�ͳ����ƷB��

��4�������Ʒ�����������ƷA����Ӧ�ľ����ƷA1��A2���Լ������ƷB����Ӧ�ľ����ƷB1��B2.

˵�����ڡ������ģʽ���У�������1��2�ֱ����Sqlserver���ݿ��Access���ݿ⡣������A��B�ֱ�������ݿ��е�User���Department��



�ġ�����

��1�����󹤳�ģʽ�ǶԹ�������ģʽ�ĸĽ������ڴ����Ʒ��ֻ��һ����������������ģʽ�£���Ʒֻ��User��һ�࣬�����󹤳�ģʽ�£���Ʒ����User��Department���ࣩ��

��2�������������Ӧ������ʹ�ó��󹤳�ģʽ��

 һ��ϵͳ��Ӧ�������ڲ�Ʒ��ʵ����α���������Ϻͱ���ϸ�ڣ������������̬�Ĺ���ģʽ������Ҫ�ġ�
���ϵͳ�ж���һ���Ĳ�Ʒ�壬��ϵͳֻ��������ĳһ��Ʒ�塣
ͬ����ͬһ����Ʒ��Ĳ�Ʒ����һ��ʹ�õģ���һԼ��������ϵͳ����������ֳ�����
ϵͳ�ṩһ����Ʒ��Ŀ⣬���еĲ�Ʒ��ͬ���Ľӿڳ��֣��Ӷ�ʹ�ͻ��˲�������ʵ�֡�
��3�������

�������У���Ʒ�����������1��2��Ҳ����Sqlserver���ݿ��Access���ݿ⡣ÿ����Ʒ�������ְ��������Ʒ��A��B��Ҳ����User���Department����ÿ����Ʒ���еĲ�ƷҪһ��ʹ�ã�����˵��Ʒ��1�е������ƷA��BҪһ��ʹ�ã�Ҳ����˵��SqlServer���ݿ���SqlServerUser���SqlServerDepartment��Ҫһ��ʹ�ã�Access���ݿ�ͬ��

*/
#include <iostream>  
#include <cstdlib>  
  
using namespace std;  
  
  
//���ݿ���User  
class User  
{  
private:  
    int id;  
    string name;  
public:  
    int getID()  
    {  
        return id;  
    }  
    string getName()  
    {  
        return name;  
    }  
    void setID(int ID)  
    {  
        this->id=ID;  
    }  
    void setName(string NAME)  
    {  
        this->name=NAME;  
    }  
};  
  
  
//���ݿ���Department  
class Department  
{  
private:  
    int id;  
    string name;  
public:  
    int getID()  
    {  
        return id;  
    }  
    string getName()  
    {  
        return name;  
    }  
    void setID(int ID)  
    {  
        this->id=ID;  
    }  
    void setName(string NAME)  
    {  
        this->name=NAME;  
    }  
};  
  
  
  
//�����ƷA��IUser  
class IUser  
{  
public:  
    virtual void Insert(User user)=0;  
    virtual User* GetUser(int id)=0;  
};  
//�����ƷA1��SqlserverUser  
class SqlserverUser:public IUser  
{  
public:  
    void Insert(User user)  
    {  
        cout<<"SQL Server User table add one record"<<endl;  
    }  
    User* GetUser(int id)  
    {  
        cout<<"SQL Server ID User table one record"<<endl;  
        return NULL;  
    }  
};  
//�����ƷA2��AccessUser  
class AccessUser:public IUser  
{  
public:  
    void Insert(User user)  
    {  
        cout<<"Access User table add one record"<<endl;  
    }  
    User* GetUser(int id)  
    {  
        cout<<"Access ID User table one record"<<endl;  
        return NULL;  
    }  
};  
  
  
//�����ƷB��IDepartment  
class IDepartment  
{  
public:  
    virtual void Insert(Department department)=0;  
    virtual Department* GetDepartment(int id)=0;  
};  
//�����ƷB1��SqlserverDepartment  
class SqlserverDepartment:public IDepartment  
{  
public:  
    void Insert(Department department)  
    {  
        cout<<"SQL Server department table add one record"<<endl;  
    }  
    Department* GetDepartment(int id)  
    {  
        cout<<"SQL Server ID department table one record"<<endl;  
        return NULL;  
    }  
};  
//�����ƷB2��AccessDepartment  
class AccessDepartment:public IDepartment  
{  
public:  
    void Insert(Department department)  
    {  
        cout<<"Access department table add one record"<<endl;  
    }  
    Department* GetDepartment(int id)  
    {  
        cout<<"Access ID department table one record"<<endl;  
        return NULL;  
    }  
};
  
  
  
//���󹤳���IFactory  
class IFactory  
{  
public:  
    virtual IUser* CreateUser()=0;  
    virtual IDepartment* CreateDepartment()=0;  
};  
//���幤��1��SqlServerFactory  
class SqlserverFactory:public IFactory  
{  
public:  
    IUser* CreateUser()  
    {  
        return new SqlserverUser;  
    }  
  
    IDepartment* CreateDepartment()  
    {  
        return new SqlserverDepartment;  
    }  
};  
//���幤��2��AccessFactory  
class AccessFactory:public IFactory  
{  
public:  
    IUser* CreateUser()  
    {  
        return new AccessUser;  
    }  
  
    IDepartment* CreateDepartment()  
    {  
        return new AccessDepartment;  
    }  
};  
  
  
  
//�ͻ���  
int  main()  
{  
    User user;  
    Department department;  
  
    //ConcreteFactory1  
    IFactory* factory=NULL;  
    factory=new SqlserverFactory;  
      
    //ProductA1  
    IUser* iu=NULL;  
    iu=factory->CreateUser();  
    iu->Insert(user);  
    iu->GetUser(1);  
  
    //ProductB1  
    IDepartment* id=NULL;  
    id=factory->CreateDepartment();  
    id->Insert(department);  
    id->GetDepartment(1);  
  
    if(factory!=NULL)  
    {  
        delete factory;  
        factory=NULL;  
    }  
    if(iu!=NULL)  
    {  
        delete iu;  
        iu=NULL;  
    }  
    if(id!=NULL)  
    {  
        delete id;  
        id=NULL;  
    }  
   
}  

