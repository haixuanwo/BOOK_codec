
/*
��������

������ģʽ��Builder������һ�����Ӷ���Ĺ��������ı�ʾ���룬ʹ��ͬ���Ĺ������̿��Դ�����ͬ�ı�ʾ��


����˵��

��ɫ��

��1��Builder����Ϊ����һ��Product����ĸ�������ָ���ĳ���ӿڡ�

��2��ConcreteBuilder���Ǿ��崴���ߣ�ʵ��Builder�ӿڣ������װ�����������

��3��Product������Ĳ�Ʒ��ɫ��

��4��Director��ָ���ߣ����ǹ���һ��ʹ��Builder�ӿڵĶ���

Q��ʲôʱ��ʹ�ý�����ģʽ��

A������Ҫ�����ڴ���һЩ���ӵĶ�����Щ�����ڲ������Ľ���˳��ͨ�����ȶ��ģ��������ڲ��Ĺ���ͨ�������Ÿ��ӵı仯��

Q��ʹ�ý�����ģʽ�ĺô���

A��������ģʽ�ĺô�����ʹ�ý���������ʾ������룬���ڽ����������� �ò�Ʒ�������װ�ģ���������Ҫ�ı�һ����Ʒ���ڲ���ʾ��ֻ��Ҫ�ٶ���һ������Ľ����߾Ϳ����ˡ�

*/

#include "Builder.h"  
#include <iostream>  
#include <cstdlib>  
  
//Client���ͻ���֪������Ľ�����̡�  
int main()  
{  
    Director* director=new Director();  
  
    Builder* builder1=new ConcreteBuilder1();  
    Builder* builder2=new ConcreteBuilder2();  
  
    std::cout<<"Director ConcreteBuilder1's methoed product:"<<std::endl;  
    director->Construct(builder1);  
    Product* p1=builder1->GetResult();  
    p1->Show();  
    std::cout<<std::endl;  
  
    std::cout<<"Director ConcreteBuilder2's methoed product:"<<std::endl;  
    director->Construct(builder2);  
    Product* p2=builder2->GetResult();  
    p2->Show();  
    std::cout<<std::endl;  
  
    delete director;  
    delete builder1;  
    delete builder2;  
  
} 

