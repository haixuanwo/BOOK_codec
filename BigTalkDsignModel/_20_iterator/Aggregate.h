#ifndef AGGREGATE_H  
#define AGGREGATE_H  
  
#include <vector>  
#include <string>  
#include <iostream>  
  
class Iterator;  
class ConcreteIterator;  
  
typedef std::string object;  
  
//�ۼ�������  
class Aggregate  
{  
public:  
    virtual Iterator* CreateIterator()=0;   
    virtual std::vector<object>* GetVector()=0;  
};  
  
//����ۼ���  
class ConcreteAggregate:public Aggregate  
{  
private:  
    std::vector<object> *items;  
public:  
    ConcreteAggregate();  
    ~ConcreteAggregate();  
      
    //������ǰ����ĵ�����  
    Iterator* CreateIterator();  
    //�����Ӻ���ǰ�ĵ�����  
    Iterator* CreateIteratorDesc();  
  
    std::vector<object>* GetVector();  
    int Count();  
    object GetElement(int index);  
    void SetElement(int index,object o);  
};  
  
#endif  

