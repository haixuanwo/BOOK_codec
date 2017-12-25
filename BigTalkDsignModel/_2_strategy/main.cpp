/*

��������

����ģʽ�����������㷨���壬�ֱ��װ������������֮����Ի����滻����ģʽ���㷨�ı仯������Ӱ�쵽ʹ���㷨�Ŀͻ���



�����ŵ�

��1������ģʽ��һ�ֶ���һϵ���㷨�ķ������Ӹ�����������������Щ�㷨��ɵĶ�����ͬ�Ĺ�����ֻ��ʵ�ֲ�ͬ������������ͬ�ķ�ʽ�������е��㷨�������˸����㷨����ʹ���㷨��֮�����ϡ�

��2������ģʽ��Strategy������ΪContext������һЩ�еĿɹ����õ��㷨����Ϊ��������������ȡ����Щ�㷨�еĹ������ܡ�

��3������ģʽ���˵�Ԫ���ԣ���Ϊÿ���㷨�����Լ����࣬����ͨ���Լ��Ľӿڵ������ԡ�

��4������ģʽ����������װ�㷨�ġ�

��5��ֻҪ�ڷ���������������Ҫ�ڲ�ͬʱ��Ӧ�ò�ͬ��ҵ����򣬾Ϳ��Կ���ʹ�ò���ģʽ�������ֱ仯�Ŀ����ԡ�

��6���򵥹���ģʽ��Ҫ�ÿͻ�����ʶ�����࣬������ģʽ�ͼ򵥹���ģʽ��ϵ��÷����ͻ���ֻ��Ҫ��ʶһ����Context���ɡ�

*/

#include "CashContext.h"  
#include <iostream>  
#include <stdlib.h>  
  
int main()  
{  
    double total=0;  
    double totalPrices=0;  
      
    //�����շ�  
    CashContext* cc1=NULL;  
    cc1=new CashContext(1);  
    totalPrices=cc1->GetResult(300);  
    total+=totalPrices;  
    std::cout<<"Type:normal  totalPrices:"<<totalPrices<<"  total:"<<total<<std::endl;  
    totalPrices=0;  
      
    //��������  
    CashContext* cc2=NULL;  
    cc2=new CashContext(2);  
    totalPrices=cc2->GetResult(700);  
    total+=totalPrices;  
    std::cout<<"Type:300return100  totalPrices:"<<totalPrices<<"  total:"<<total<<std::endl;  
    totalPrices=0;  
  
    //��������  
    CashContext* cc3=NULL;  
    cc3=new CashContext(3);  
    totalPrices=cc3->GetResult(300);  
    total+=totalPrices;  
    std::cout<<"Type:0.8  totalPrices:"<<totalPrices<<"  total:"<<total<<std::endl;  
    totalPrices=0;  
  
    if(cc1!=NULL)  
    {  
        delete cc1;  
        cc1=NULL;  
    }  
    if(cc2!=NULL)  
    {  
        delete cc2;  
        cc2=NULL;  
    }  
    if(cc3!=NULL)  
    {  
        delete cc3;  
        cc3=NULL;  
    }  
	return 0;
}  

