
/*
��������

���ģʽ��Ϊ��ϵͳ�е�һ��ӿ��ṩһ��һ�µĽ��棬��ģʽ������һ���߲�ӿڣ�����ӿ�ʹ����һ��ϵͳ��������ʹ�á�



����˵��

Q�����ģʽ��ʲôʱ��ʹ���أ�

A����Ϊ�����׶Σ�

��1�����ȣ�����Ƴ��ڽ׶Σ�Ӧ��Ҫ����ʶ�Ľ���ͬ����������롣

��2���ڶ����ڿ����׶Σ���ϵͳ������Ϊ���ϵ��ع��ݻ������Խ��Խ���ӣ��������ģʽʹ��ʱҲ������ܶ��С���࣬�Ȿ�Ǻ��¶�������Ҳ���ⲿ�������ǵ��û����������ʹ���ϵ����ѣ��������Facade�����ṩһ���򵥵Ľӿڣ���������֮���������

��3����������ά��һ�������Ĵ���ϵͳʱ���������ϵͳ�Ѿ��ǳ�����ά������չ�ˣ�����Ϊ�������ǳ���Ҫ�Ĺ��ܣ��µ����󿪷�����Ҫ������������ʱ�����ģʽFacadeҲ�Ƿǳ����ʵġ�



������ԣ�Ϊ��ϵͳ����һ�����Facade�࣬���ṩ��ƴֲڻ�߶ȸ��ӵ���������ıȽ������򵥵Ľӿڣ�����ϵͳ��Facade���󽻻���Facade���������뽻�����и��ӵĹ�����

*/

#include "Facade.h"  
#include <iostream>  
#include <cstdlib>  
  
//Client  
int main()  
{  
    Facade* facade=new Facade();  
  
    facade->MethodA();  
    facade->MethodB();  
  
    delete facade;    
}  
