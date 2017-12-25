#include <iostream>  
#include <cstdlib>  
//<strong>#include "A.h"  
//#include "B.h" //因为A.h里面已经包含B.h，所以在此不需要导入B.h了。</strong>  
#include "A.h"
  
using namespace std;  
  
int main()  
{  
    A a;  
    a.handle();  
	
    B b;  
    b.handle();    
}

