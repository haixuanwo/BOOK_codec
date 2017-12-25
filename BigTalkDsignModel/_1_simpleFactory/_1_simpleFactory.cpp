/*
���������Ľ�ɫ

�򵥹���ģʽ����������ɫ��

��1��������Factory�������������������Ʒ�ġ���ˣ���Factory����һ�����������Ʒ��Create��������Generate����֮��ĺ�������������ܹ����ݡ���ʶ�����Ĳ�ͬ���ɲ�ͬ��ConcreteProduct����Ȼ��ЩConcreteProduct���Ǽ̳���AbstractProduct�ġ�

��2�������Ʒ��AbstractProduct�������Ʒ�Ǵ����������Ʒ��������ġ������Ʒ��ֻ��һ����

��3�������Ʒ��ConcreteProduct�������Ʒ��̳��Գ����Ʒ�࣬�����ж��������Ҫ�����µĲ�Ʒ��ʱ�������һ���̳��Գ����Ʒ��ľ����Ʒ�༴�ɡ�


�������ƣ�

ʵ��������ϣ�����Ҫ����һ���²�Ʒ���ڴ����ģʽ�У������� ����Operation����ֻ��Ҫ������Ķ���

��1������һ���̳��Գ����Ʒ����������㣩�ľ����Ʒ��һ�־�������㣩��

��2���ڹ������У�switch�У�����һ�ָ��ݱ�ʶ�������������case���ɡ�
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
  
//���������־����Ʒ��
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
  
//������      
class OperationFactory  
{  
public:  
    Operation* createOperation(char type)  
    {  
        Operation* oper;  
        switch(type)  
        {  
        case '+':  
            oper=new OperationAdd;  
            break;  
        case '-':  
            oper=new OperationSub;  
            break;  
        case '*':  
            oper=new OperationMul;  
            break;  
        case '/':  
            oper=new OperationDiv;  
            break;  
        }  
        return oper;  
    }  
};  
  
//�ͻ���   
int main()  
{  
    Operation* oper=NULL;  
  
    OperationFactory of;  
    oper=of.createOperation('+');  
    oper->setA(1);  
    oper->setB(2);  
    cout<<oper->GetResult()<<endl;  
    if(oper!=NULL)  
    {  
        delete oper;  
        oper=NULL;  
    }  

	return 0;   
}
