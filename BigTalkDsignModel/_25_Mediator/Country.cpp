#include "Country.h"  
#include <string>  
#include <iostream>  
  
using namespace std;  
  
void USA::Declare(string message)  
{  
    mediator->Declare(message,this);  
}  
  
void USA::GetMessage(string message)  
{  
    cout<<"������öԷ���Ϣ��"<<message<<endl;  
}  
  
void Iraq::Declare(string message)  
{  
    mediator->Declare(message,this);  
}  
  
void Iraq::GetMessage(string message)  
{  
    cout<<"�����˻�öԷ���Ϣ��"<<message<<endl;  
}  

