#include <stdio.h>
#include "Iterator.h"  
  
ConcreteIterator::ConcreteIterator(Aggregate* aggregate)  
{  
    this->aggregate=(ConcreteAggregate*)aggregate;  
    current=0;  
}  
object ConcreteIterator::First()  
{  
    return aggregate->GetVector()->at(0);  
}  
object ConcreteIterator::Next()  
{  
    current++;  
    if(current<aggregate->GetVector()->size())  
        return aggregate->GetVector()->at(current);  
}  
bool ConcreteIterator::IsDone()  
{  
    return current>=aggregate->GetVector()->size()?true:false;  
}  
object ConcreteIterator::CurrentItem()  
{  
	//printf("T  size[%ld]\n", (((ConcreteAggregate*)aggregate)->GetVector()->size()));
	//std::cout<<"T  CurrentItem:"<<aggregate->GetVector()->at(current)<<current<<std::endl;    
    return aggregate->GetVector()->at(current);  
}  
  
  
ConcreteIteratorDesc::ConcreteIteratorDesc(Aggregate* aggregate)  
{  
    this->aggregate=(ConcreteAggregate*)aggregate;  
    current=(((ConcreteAggregate*)aggregate)->GetVector()->size())-1;  
}  
object ConcreteIteratorDesc::First()  
{  
    return *(aggregate->GetVector()->end());  
}  
object ConcreteIteratorDesc::Next()  
{  
    current--;  
    if(current>=0)  
        return aggregate->GetVector()->at(current);  
}  
bool ConcreteIteratorDesc::IsDone()  
{  
	//printf("T --- IsDone  current[%d]\n", current);
    return current<0?true:false;  
}  
object ConcreteIteratorDesc::CurrentItem()  
{  
	//printf("T Desc size[%ld]\n", (((ConcreteAggregate*)aggregate)->GetVector()->size()));
    //std::cout<<"T Desc CurrentItem:"<<aggregate->GetVector()->at(current)<<current<<std::endl;
    return aggregate->GetVector()->at(current);  
}  
