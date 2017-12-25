//#include "Flyweight.h"  
/*
��������

������ģʽ��interpreter��������һ�����ԣ����������ķ���һ�ֱ�ʾ��������һ�������������������ʹ�øñ�ʾ�����������еľ��ӡ�


����˵��

������Щ��ɫ��

��1��AbstractExpression��������ʽ��������һ������Ľ��Ͳ���������ӿ�Ϊ�����﷨�������еĽڵ�������

��2��TerminalExpression���ս�����ʽ����ʵ�����ķ��е��ս��������Ľ��Ͳ�����ʵ�ֳ�����ʽ����Ҫ��Ľӿڣ���Ҫ��һ��interpreter�����������ķ���ÿһ���ս������һ�������ս���ʽ��֮���Ӧ��

��3��NonterminalExpression�����ս�����ʽ����Ϊ�ķ��еķ��ս��ʵ�ֽ��Ͳ�����

��4��Context������������֮���һЩȫ����Ϣ��

������ģʽ��Ҫ��������⣿

���һ���ض����͵����ⷢ����Ƶ���㹻�ߣ���ô���ܾ�ֵ�ý�������ĸ���ʵ������Ϊһ���������еľ��ӡ������Ϳ��Թ���һ�����������ý�����ͨ��������Щ��������������⡣

ʲôʱ���ý�����ģʽ��

ͨ������һ��������ѽ����ִ�У�������ɽ��������еľ��ӱ�ʾΪһ�������﷨��ʱ����ʹ�ý�����ģʽ��

�ý�����ģʽ�ĺô���

���˽�����ģʽ������ζ�ſ��Ժ����׵ظı����չ�ķ�����Ϊ��ģʽʹ��������ʾ�ķ��������ʹ�ü̳����ı����չ���ķ���Ҳ�Ƚ�����ʵ���ķ�����Ϊ��������﷨���ָ����ڵ�����ʵ�ִ������ƣ���Щ�඼����ֱ�ӱ�д��

�ý�����ģʽ�Ĳ��㣿

������ģʽΪ�ķ��е�ÿһ���������ٶ�����һ���࣬��˰�����������ķ��������Թ����ά�������鵱�ķ��ǳ�����ʱ��ʹ�������ļ������﷨��������������������������


*/
#include "Expression.h"
#include <iostream>  
#include <cstdlib>  
#include <vector>  
#include <string>  
#include <sstream>  
   
using namespace std;  
   
//Client���ͻ���  
int main()  
{  
    PlayContext context;  
    std::cout<<"shanghai beach"<<std::endl;  
  
    context.SetText("O 2 E 0.5 G 0.5 A 3 E 0.5 G 0.5 D 3 E 0.5 G 0.5 A 0.5 O 3 C 1 O 2 A 0.5 G 1 C 0.5 E 0.5 D 3");  
  
    Expression* expression;  
  
    while(context.GetText().length()>0)  
    {  
        char c=context.GetText()[0];  
        switch(c)  
        {  
	        case 'O':  
	            expression=new Scale();  
	            break;  
	        case 'C':  
	        case 'D':  
	        case 'E':  
	        case 'F':  
	        case 'G':  
	        case 'A':  
	        case 'B':  
	        case 'P':  
	            expression=new Note();  
	            break;  
        }  
        expression->Interpret(&context);  
        delete expression;  
    }  
  
} 

