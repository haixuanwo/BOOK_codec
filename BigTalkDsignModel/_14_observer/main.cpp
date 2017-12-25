/*
��������

�۲���ģʽ��������һ��һ�Զ��������ϵ���ö���۲��߶���ͬʱ����ĳһ�������������������״̬�����仯ʱ����֪ͨ���й۲��߶���ʹ�����ܹ��Զ������Լ���



����˵��

��ɫ��

��1��Subject�ࣺ���Է���Ϊ������߳���֪ͨ�ߣ�һ����һ�����������һ���ӿ�ʵ�֡��������жԹ۲��߶�������ñ�����һ���ۼ��ÿ�����ⶼ�������κ������Ĺ۲��ߡ����������ṩһ���ӿڣ��������Ӻ�ɾ���۲��߶���

��2��Observer�ࣺ����۲��ߣ�Ϊ���еľ���۲��߶���һ���ӿڣ��ڵõ������֪ͨʱ�����Լ�������ӿڽ������½ӿڡ�����۲���һ����һ�����������һ���ӿ�ʵ�֡����½ӿ�ͨ������һ��Update()��������������������·�����

��3��ConcreteSubject�ࣺ��������������߾���֪ͨ�ߣ����й�״̬�������۲��߶����ھ���������ڲ�״̬�ı�ʱ�������еǼǹ��Ĺ۲��߷���֪ͨ��

��4��ConcreteObserver�ࣺ����۲��ߣ�ʵ�ֳ���۲��߽�ɫ��Ҫ��ĸ��½ӿڣ��Ա�ʹ�����״̬�������״̬��Э��������۲��߽�ɫ���Ա���һ��ָ����������������á�

ʲôʱ���ù۲���ģʽ��

��1����һ������ĸı���Ҫͬʱ�ı����������ʱ��

��2�����Ҳ�֪�������ж��ٶ����д��ı�ʱ��Ӧ�ÿ���ʹ�ù۲���ģʽ��

��3����һ������ģ�����������棬����һ������������һ���棬��ʱ�ù۲���ģʽ���Խ������߷�װ�ڶ����Ķ�����ʹ���Ǹ��Զ����ظı�͸��á�

���ʣ�

�۲���ģʽ�����Ĺ�����ʵ�����ڽ����ϣ�����ϵ�˫���������ڳ��󣬶����������ھ��塣�Ӷ�ʹ�ø��Եı仯������Ӱ����һ�ߵı仯��	
*/
#include "Observer.h"  
#include <iostream>  
#include <cstdlib>  
  
//Client���ͻ���  
int main()  
{  
    //֪ͨ��  
    Subject* huhansan=new Boss();  
  
    //4���۲���ʵ��  
    Observer* tongshi1=new StockObserver("wei ",huhansan);  
    Observer* tongshi2=new StockObserver("yi ",huhansan);  
    Observer* tongshi3=new NBAObserver("huo ",huhansan);  
    Observer* tongshi4=new NBAObserver("lin ",huhansan);  
  
    //��4���۲��߶����뵽֪ͨ�ߵ�֪ͨ������  
    huhansan->Attach(tongshi1);  
    huhansan->Attach(tongshi2);  
    huhansan->Attach(tongshi3);  
    huhansan->Attach(tongshi4);  
      
    //κ���û�б��ϰ�֪ͨ������ȥ��  
    huhansan->Detach(tongshi1);  
  
    huhansan->SetSubjectState("I'm come back HU");  
  
    //֪ͨ  
    huhansan->Notify();  
  
    delete huhansan;  
    delete tongshi1;  
    delete tongshi2;  
    delete tongshi3;  
    delete tongshi4;  
  
    std::cout<<""<<std::endl;    
  
} 


