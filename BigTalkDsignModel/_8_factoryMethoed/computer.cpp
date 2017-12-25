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
  
//�����Ʒ��  
class Operation  
{  
protected:  
    double numberA;  
    double numberB;  
  
public:  
    double getA()  
    {  
        return numberA;  
    }  
    double getB()  
    {  
        return numberB;  
    }  
    void setA(double number)  
    {  
        numberA=number;  
    }  
    void setB(double number)  
    {  
        numberB=number;  
    }  
  
    virtual double GetResult()  
    {  
        double result=0;  
        return result;  
    }  
};  
//�������ĸ������Ʒ��  
class OperationAdd:public Operation  
{  
public:  
    double GetResult()  
    {  
        double result=0;  
        result=numberA+numberB;  
        return result;  
    }  
};  
  
class OperationSub:public Operation  
{  
public:  
    double GetResult()  
    {  
        double result=0;  
        result=numberA-numberB;  
        return result;  
    }  
};  
  
class OperationMul:public Operation  
{  
public:  
    double GetResult()  
    {  
        double result=0;  
        result=numberA*numberB;  
        return result;  
    }  
};  
  
class OperationDiv:public Operation  
{  
public:  
    double GetResult()  
    {  
        double result=0;  
        if(numberB!=0)  
            result=numberA/numberB;  
        return result;  
    }  
};  
  
//���󹤳���  
class AbstractFactory  
{  
public:  
    virtual Operation* createOperation()  
    {  
        return new Operation;  
    }  
};  
//�������ĸ����幤���࣬�ֱ����ڲ����ĸ������Ʒ  
class AddFactory:public AbstractFactory  
{  
public:  
    Operation* createOperation()  
    {  
        Operation* oper=new OperationAdd;  
        return oper;  
    }  
};  
  
class SubFactory:public AbstractFactory  
{  
public:  
    Operation* createOperation()  
    {  
        Operation* oper=new OperationSub;  
        return oper;  
    }  
};  
  
class MulFactory:public AbstractFactory  
{  
public:  
    Operation* createOperation()  
    {  
        Operation* oper=new OperationMul;  
        return oper;  
    }  
};  
  
class DivFactory:public AbstractFactory  
{  
public:  
    Operation* createOperation()  
    {  
        Operation* oper=new OperationDiv;  
        return oper;  
    }  
};  
  
//�ͻ���  
int main()  
{  
    AbstractFactory* af=NULL;  
    //af=new AddFactory();  
    af = new MulFactory();
      
    Operation* oper=NULL;  
    oper=af->createOperation();  
      
    oper->setA(1);  
    oper->setB(2);  
    cout<<oper->GetResult()<<endl;  
      
    if(af!=NULL)  
    {  
        delete af;  
        af=NULL;  
    }  
    if(oper!=NULL)  
    {  
        delete oper;  
        oper=NULL;  
    }  
  
    //system("pause");  
}  

