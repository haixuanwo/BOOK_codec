#include "Element.h"  
#include "Visitor.h"  
#include <vector>  
#include <string>  
#include <iostream>  
  
class ObjectStructure  
{  
private:  
    std::vector<Person*> elements;  
public:  
    ObjectStructure(){}  
    ~ObjectStructure();  
  
    void Attach(Person*);  
    void Detach(Person*);  
    void Display(Action*);  
};  
