/*
��������

״̬ģʽ��State������һ�����������״̬�ı�ʱ����ı�����Ϊ����������������Ǹı������ࡣ


����˵��

�����������鱾������Ķ�״̬ģʽ�Ķ���ͷ�����

��1��״̬ģʽ����������ڲ�״̬�ı�ʱ�ı�������Ϊ���������������޸��������ࡣ��������״̬ģʽ��������ͨ���������Ƶġ�����Ȼ�ܹ����޸�������ࡱ��
��2�����ó�����
a��״̬ģʽ��Ҫ������ǵ�����һ������״̬ת�����������ʽ���ڸ���ʱ���������״̬���ж��߼�ת�Ƶ���ʾ��ͬ״̬��һϵ�����У����԰Ѹ��ӵ��� ���߼��򵥻���������˵�����ǰѸ���if else ת�����һ�����ľ���״̬��ԭ��if else ÿ������µĲ�������ת������ĳ������״̬�У�
b����һ��������Ϊȡ��������״̬������������������ʱ�̸���״̬�ı�������Ϊʱ���Ϳ��Կ���ʹ��״̬ģʽ�ˡ�


�ġ���ɫ

��1��Context�ࣺ�ڸ����ڲ�ά��һ��ConcreteState�����һ��ʵ�������ʵ�����嵱ǰ��״̬��
��2��State�ࣺ����״̬�࣬����һ�� �ӿ��Է�װ��Context��һ���ض�״̬��ص���Ϊ��
��3��ConcreteStateA,ConcreteStateB�ࣺ����״̬�࣬ÿһ���� ��ʵ��һ����Context��һ��״̬��ص���Ϊ��

*/
#include <iostream>  
#include <cstdlib>  
#include "Work.h"  
//#include "State.h"  
  
using namespace std;  
  
int main()  
{  
    Work emergencyProjects;  
  
    emergencyProjects.setHour(9);  
    emergencyProjects.writeProgram();  
  
    emergencyProjects.setHour(10);  
    emergencyProjects.writeProgram();  
  
    emergencyProjects.setHour(12);  
    emergencyProjects.writeProgram();  
  
    emergencyProjects.setHour(13);  
    emergencyProjects.writeProgram();  
  
    emergencyProjects.setHour(14);  
    emergencyProjects.writeProgram();  
  
    emergencyProjects.setHour(17);  
    emergencyProjects.writeProgram();  
  
    emergencyProjects.setFinish(false);  
  
    emergencyProjects.setHour(19);  
    emergencyProjects.writeProgram();  
  
    emergencyProjects.setHour(22);  
    emergencyProjects.writeProgram();  
    
}  

