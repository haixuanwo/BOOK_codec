/*
��������

����¼��Memento�����ڲ��ƻ���װ�Ե�ǰ���£�����һ��������ڲ�״̬�����ڸö���֮�Ᵽ�����״̬�������Ժ�Ϳɽ�����ָ���ԭ�ȱ����״̬��



����˵��

��ɫ��

��1��Originator�������ˣ������𴴽�һ��Memento�����Լ�¼��ǰʱ�������ڲ�״̬��������ʹ�ñ���¼�ָ��ڲ�״̬��Originator���Ը�����Ҫ����Memento�洢Originator����Щ�ڲ�״̬��

��2��Memento������¼��������洢Originator������ڲ�״̬�������Է�ֹOriginator���������������ʱ���¼Memento������¼�������ӿڣ�Caretakerֻ�ܿ�������¼��խ�ӿڣ���ֻ�ܽ�����¼���ݸ���������Originator�ܹ�����һ����ӿڣ�������������ǰ״̬������������ݡ�

��3��Caretaker�������ߣ������𱣴������¼Memento�����ܶԱ���¼�����ݽ��в������顣

ʲôʱ���ã�

Mementoģʽ�Ƚ������ڹ��ܱȽϸ��ӵģ�����Ҫά�����¼������ʷ���࣬������Ҫ���������ֻ���ڶ������е�һС����ʱ��Originator���Ը��ݱ����Memento��Ϣ��ԭ��Ǩ��״̬��

������ģʽ�Ĺ�ϵ��

�����ĳ��ϵͳ��ʹ������ģʽʱ����Ҫʵ������ĳ������ܣ���ô����ģʽ����ʹ�ñ���¼ģʽ���洢�ɳ���������״̬��

*/
#include "Memento.h"  
#include <iostream>  
#include <cstdlib>  
  
int main()  
{  
    //��սBossǰ  
    GameRole* lixiaoyao=new GameRole();  
    lixiaoyao->GetInitState();  
    lixiaoyao->StateDisplay();  
  
    //�������  
    RoleStateCaretaker* stateAdmin=new RoleStateCaretaker();  
    stateAdmin->SetMemento(lixiaoyao->SaveState());  
  
    //��սBossʱ���������  
    lixiaoyao->Fight();  
    lixiaoyao->StateDisplay();  
  
    //�ָ�֮ǰ״̬                 
    lixiaoyao->RocoveryState(*stateAdmin->GetMemento());  
    lixiaoyao->StateDisplay();  
  
    delete lixiaoyao;  
    delete stateAdmin;  
  
}  

