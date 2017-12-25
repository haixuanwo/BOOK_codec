#include <string>  
#include "UN.h"  
#include "Country.h"  
using namespace std;  
  
void UnitedNationsSecurityCouncil::setColleague1(Country* c)  
{  
    this->colleague1=c;  
}  
  
void UnitedNationsSecurityCouncil::setColleague2(Country* c)  
{  
    this->colleague2=c;  
}  
  
void UnitedNationsSecurityCouncil::Declare(string message, Country* colleague)  
{  
    if(colleague==this->colleague1)  
        colleague2->GetMessage(message);  
    else  
        colleague1->GetMessage(message);  
}  

