/*
��������

����ģʽ��Command������һ�������װΪһ�����󣬴Ӷ�ʹ����ò�ͬ������Կͻ����в�����������������Ŷӻ��¼������־���Լ�֧�ֿɳ����Ĳ�����


����˵��

��ɫ��

��1��Command�ࣺ��������ִ�в����Ľӿڡ�

��2��ConcreteCommand�ࣺ��һ�������߶������һ�����������ý�������Ӧ�Ĳ�������ʵ��Excute��

��3��Invoker�ࣺҪ�������ִ���������

��4��Receiver�ࣺ֪�����ʵʩ��ִ��һ����������صĲ������κ��඼������Ϊһ�������ߡ�

����ģʽ�����ã�

��1������ģʽ�ܹ������׵����һ��������С�

��2������Ҫ������£����Խ����׵ؽ����������־��

��3��������������һ�������Ƿ�Ҫ�������

��4���������׵�ʵ�ֶ�����ĳ�����������

��5�����ڼӽ��µľ��������಻Ӱ���������࣬��������µľ�������������ס�

��6������ģʽ������һ�������Ķ�����֪����ôִ��һ�������Ķ���ָ�����

*/
#include "Command.h"  
#include <iostream>  
#include <cstdlib>  
  
int main()  
{  
    //����ǰ��׼��  
    Barbecuer* boy=new Barbecuer();  
  
    Command* bakeMuttonCommand1=new BakeMuttonCommand(boy);  
    Command* bakeMuttonCommand2=new BakeMuttonCommand(boy);
	
    Command* bakeChickenWingCommand1=new BakeChickenWingCommand(boy);  
  
    Waiter* girl=new Waiter();  
  
    //����Ӫҵ���˿͵��  
    girl->SetOrder(bakeMuttonCommand1);  
    girl->SetOrder(bakeMuttonCommand2);  
    girl->SetOrder(bakeChickenWingCommand1);  
  
    //�����ϣ�֪ͨ����  
    girl->Notify();  
  
    delete boy,bakeMuttonCommand1,bakeMuttonCommand2,bakeChickenWingCommand1;  
  
}  

