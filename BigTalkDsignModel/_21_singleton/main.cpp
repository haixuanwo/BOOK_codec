/*
����ģʽ����֤һ�������һ��ʵ�������ṩһ����������ȫ�ַ��ʵ㡣[DP]

ͨ�����ǿ�����һ��ȫ�ֱ���ʹ��һ�����󱻷��ʣ��������ܷ�ֹ��ʵ�����������һ����õİ취���ǣ����������𱣻�����Ψһʵ�����������Ա�֤û������ʵ�����Ա������������������ṩһ�����ʸ�ʵ���ķ�����



����ע�⣺

ʹ�õ���ģʽ��ֻ�ܱ�֤һ���߳��ڶ��󲻻ᱻ��δ������������ܱ�֤���̵߳��������ˣ���Ҫ���Ƕ��̵߳Ļ�����Ҫ������

*/

#include <iostream>  
#include "Singleton.h"  
  
//��̬��Ա�������ⶨ��  
Singleton* Singleton::instance = NULL;  
pthread_mutex_t Singleton::mutex;


int main()  
{  
    //��ʼ���ٽ���  
    pthread_mutex_init(Singleton::getLock(),NULL);  
  
    Singleton* singleton1=Singleton::GetInstance();  
    Singleton* singleton2=Singleton::GetInstance();  
  
    //ɾ���ٽ���  
    pthread_mutex_destroy(Singleton::getLock());  
  
    if(singleton1==singleton2)  
        std::cout<<"It's a same object"<<std::endl;    
}  

