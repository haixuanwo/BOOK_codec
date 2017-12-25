/*
��������

��������ģʽ��Factory Method��������һ�����ڴ�������Ľӿڣ����������ʵ������һ���ࡣ����������һ�����ʵ�����ӳٵ������ࡣ


���������Ľ�ɫ

��1�����󹤳�

��2�����幤��

��3�������Ʒ

��4�������Ʒ


�ġ�����

��1����������ģʽ�ǶԼ򵥹���ģʽ����΢�ĸĽ�����������ģʽ�������Ƕ���һ��������Ʒ����Ĺ����ӿڣ���ʵ�ʹ����Ƴٵ������С�
��2����򵥹���ģʽ��ȣ������Ʒ�Ĺ����಻�� ֻ��һ��������ÿ�־����Ʒ�඼��Ӧһ���������ľ��幤���ࡣ����Щ���幤����Ĺ�ͬ�����ٱ���ȡ�����γ�һ�������Ʒ�࣬��Щ�����Ʒ�඼�̳�����������Ʒ�ࡣ

��3������Ҫ����һ�ֲ�Ʒ��ʱ����Ҫ�����ǣ�����һ�ּ̳��Գ����Ʒ�ľ����Ʒ�࣬����һ�ּ̳��ڳ��󹤳��ľ��幤���࣬���Ŀͻ��ˡ�������Ҫ�ڼ򵥹���ģʽ���������Ĺ����ڵ�switch��	
*/

#include <iostream>  
#include <cstdlib>  
  
using namespace std;  
  
//�����Ʒ�ࣺ�׷�  
class Leifeng  
{  
public:  
    virtual void Sweep()  
    {  
        cout<<"clear the floor"<<endl;  
    }  
    virtual void Wash()  
    {  
        cout<<"wash clothes"<<endl;  
    }  
    virtual void BuyRice()  
    {  
        cout<<"buy rice"<<endl;  
    }  
};  
  
//���������������Ʒ��  
class Undergraduate:public Leifeng  
{  
public:  
    void Sweep()  
    {  
        cout<<"Undergraduate clear the floor"<<endl;  
    }  
    void Wash()  
    {  
        cout<<"Undergraduate wash clothes"<<endl;  
    }  
    void BuyRice()  
    {  
        cout<<"Undergraduate buy rice"<<endl;  
    }  
};  
  
class Volunteer:public Leifeng  
{  
public:  
    void Sweep()  
    {  
        cout<<"Volunteer clear the floor"<<endl;  
    }  
    void Wash()  
    {  
        cout<<"Volunteer wash clothes"<<endl;  
    }  
    void BuyRice()  
    {  
        cout<<"Volunteer buy rice"<<endl;  
    }  
};  
  
//���󹤳���  
class AbstractFactory  
{  
public:  
    virtual Leifeng* CreateLeifeng()  
    {  
        return new Leifeng;  
    }  
};  
  
//�������������幤���࣬�ֱ������������Ʒ���Ӧ  
class UndergraduateFactory:public AbstractFactory  
{  
public:  
    Undergraduate* CreateLeifeng()  
    {  
        return new Undergraduate;  
    }  
};  
  
class VolunteerFactory:public AbstractFactory  
{  
public:  
    Volunteer* CreateLeifeng()  
    {  
        return new Volunteer();  
    }  
};  
  
//�ͻ���  
int main()  
{  
    //��Ҫ����Volunteer��Ʒ�Ļ���ֻ��Ҫ���˴���UndergraduateFactory����ΪVolunteerFactory���ɡ�  
    AbstractFactory* af=NULL;  
    af=new VolunteerFactory;  
      
    Leifeng* lf=NULL;  
    lf=af->CreateLeifeng();  
  
    lf->BuyRice();  
    lf->Sweep();  
    lf->Wash();  
  
    if(af!=NULL)  
    {  
        delete af;  
        af=NULL;  
    }  
    if(lf!=NULL)  
    {  
        delete lf;  
        lf=NULL;  
    }  
}  

