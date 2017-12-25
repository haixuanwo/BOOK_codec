/*
��������

ְ����ģʽ��Chain Of Responsibility����ʹ��������л��ᴦ�����󣬴Ӷ���������ķ����ߺͽ�����֮�����ϡ��������������һ���������������������ݸ�����֪����һ����������Ϊֹ��


����˵�� 

��ɫ��

��1��Handler�ࣺ����һ����������Ľӿڡ�

��2��ConcreteHandler�ࣺ����Ĵ�������Ľӿڡ�

ְ����ģʽ�ĺô���

��1����ؼ����ǣ����ͻ��ύһ������ʱ������ʱ��������ֱ����һ��ConcreteHandler������������

��2�������ߺͷ����߶�û�жԷ�����ȷ��Ϣ�������еĶ����Լ�Ҳ����֪�����Ľṹ�������ְ�����ɼ򻯶�����໥���ӣ�
     ���ǽ���Ҫ����һ��ָ�������ߵ����ã�������Ҫ���������еĺ�ѡ�����ߵ����á�

��3���������ڿͻ������������Ľṹ�������û�������ʱ�����ӻ����޸Ĵ���һ������Ľṹ����ǿ�˸�����ָ��ְ�������ԡ�

ע�⣺һ�������п��ܵ�������ĩ�˶��ò�������������Ϊû����ȷ���ö��ò�������

*/
#include "ChainOfResponsibility.h"  
#include <iostream>  
#include <cstdlib>  
  
//Client���ͻ���  
int main()  
{  
    Manager* jinli=new CommonManager("jinli");  
    Manager* zongjian=new Majordomo("zhongjian");  
    Manager* zhongjingli=new GeneralManager("zhongjinli");  
  
    //�����ϼ�����ȫ���԰���ʵ�����������и���  
    jinli->SetSuperior(zongjian);  
    zongjian->SetSuperior(zhongjingli);  
  
    //������4������  
    //����1�����1��  
    Request request1;  
    request1.SetType("leave");  
    request1.SetContent("small cai leasve");  
    request1.SetNumber(1);  
    //�ͻ��˵����붼���ɡ��������𣬵�ʵ��˭�������ɾ���������������ͻ��˲�֪��  
    jinli->RequestApplication(&request1);  
  
    //����2�����4��  
    Request request2;  
    request2.SetType("leave");  
    request2.SetContent("small cai leasve");  
    request2.SetNumber(4);  
    //�ͻ��˵����붼���ɡ��������𣬵�ʵ��˭�������ɾ���������������ͻ��˲�֪��  
    jinli->RequestApplication(&request2);  
  
    //����3����н500Ԫ  
    Request request3;  
    request3.SetType("raises");  
    request3.SetContent("small cai ask raises");  
    request3.SetNumber(500);  
    //�ͻ��˵����붼���ɡ��������𣬵�ʵ��˭�������ɾ���������������ͻ��˲�֪��  
    jinli->RequestApplication(&request3);  
      
    //����4����н1000Ԫ  
    Request request4;  
    request4.SetType("raises");  
    request4.SetContent("small cai ask raises");  
    request4.SetNumber(1000);  
    //�ͻ��˵����붼���ɡ��������𣬵�ʵ��˭�������ɾ���������������ͻ��˲�֪��  
    jinli->RequestApplication(&request4);  
  
  
    delete jinli,zongjian,zhongjingli;  
  
}  

