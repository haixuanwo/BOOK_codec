#include "ObjectStructure.h"  
#include <iterator>  
  
ObjectStructure::~ObjectStructure()  
{  
    std::vector<Person* >::iterator it;  
    for(it=elements.begin();it!=elements.end();it++)  
        delete *it;  
}  
  
void ObjectStructure::Attach(Person* element)  
{  
    elements.push_back(element);  
}  
  
void ObjectStructure::Detach(Person* element){}  
  
void ObjectStructure::Display(Action* visitor)  
{  
    std::vector<Person* >::iterator it;  
    for(it=elements.begin();it!=elements.end();it++)  
        (*it)->Accept(visitor);  
}  

