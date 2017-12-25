/*
��������

��Ԫģʽ��Flyweight�������ù�������Ч��֧�ִ���ϸ���ȵĶ���

flyweight����˼����������


����˵��



��ɫ��

��1��Flyweight�ࣺ�������о�����Ԫ��ĳ����ӿڣ�ͨ������ӿڣ�Flyweight���Խ��ܲ��������ⲿ״̬��

��2��ConcreteFlyweight�ࣺ�̳�Flyweight�����ʵ��Flyweight�ӿڣ���Ϊ�ڲ�״̬���Ӵ洢�ռ䡣

��3��UnsharedConcreteFlyweight����ָ��Щ����Ҫ�����Flyweight���ࡣ��ΪFlyweight�ӿڹ����Ϊ���ܣ�����������ǿ�ƹ���

��4��FlyweightFactory����һ����Ԫ��������������������Flyweight��������Ҫ������ȷ������ع���Flyweight�����û�����һ��Flyweightʱ��FlyweightFactory�����ṩһ���Ѵ�����ʵ�����ߴ���һ������������ڵĻ�����



����Ԫģʽ�ĺô���

��Ԫģʽ���Ա�������ǳ�������Ŀ������ڳ�������У���ʱ��Ҫ���ɴ���ϸ���ȵ���ʵ������ʾ���ݡ�����ܷ�����Щʵ�����˼�������������϶�����ͬ�ģ���ʱ���ܹ�����ȵļ�����Ҫʵ�������������������ܰ���Щ�����Ƶ���ʵ�������棬�ڷ�������ʱ�����Ǵ��ݽ������Ϳ���ͨ���������ȵؼ��ٵ���ʵ������Ŀ��

Ҳ����˵����ԪģʽFlyweightִ��ʱ�����״̬�����ڲ���Ҳ�������ⲿ�ģ��ڲ�״̬�洢��ConcreteFlyweight����֮�У����ⲿ������Ӧ�ÿ����ɿͻ��˶���洢����㣬������Flyweight����Ĳ���ʱ������״̬���ݸ�����


ʲôʱ������Ԫģʽ��

���һ��Ӧ�ó���ʹ���˴����Ķ��󣬶���������Щ��������˺ܴ�Ĵ洢����ʱ��Ӧ�ÿ���ʹ�ã����о��Ƕ���Ĵ����״̬�����ⲿ״̬�����ɾ��������ⲿ״̬����ô��������Խ��ٵĹ������ȡ���ܶ�����󣬴�ʱ���Կ���ʹ����Ԫģʽ��

*/

#include "Flyweight.h"  
#include <iostream>  
#include <cstdlib>  
  
//Client���ͻ���  
int main()  
{  
    WebSiteFactory f;  
  
    WebSite* fx=f.GetWebSiteCategory("product exhibition");  
    fx->Use(User("small cai"));  
  
    WebSite* fy=f.GetWebSiteCategory("product exhibition");  
    fy->Use(User("big bird"));  
  
    WebSite* fz=f.GetWebSiteCategory("product exhibition");  
    fz->Use(User("jiaojiao"));  
  
    WebSite* fl=f.GetWebSiteCategory("blog");  
    fl->Use(User("old child"));  
  
    WebSite* fm=f.GetWebSiteCategory("blog");  
    fm->Use(User("six peach"));  
  
    WebSite* fn=f.GetWebSiteCategory("blog");  
    fn->Use(User("south crocodile"));  
  
    std::cout<<"amount of web site classify "<<f.GetWebSiteCount()<<std::endl;  
	
}  


