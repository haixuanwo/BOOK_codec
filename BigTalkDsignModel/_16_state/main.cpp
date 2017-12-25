/*
二、概念

状态模式（State）：当一个对象的内在状态改变时允许改变其行为，这个对象看起来像是改变了其类。


三、说明

下面是来自书本和网络的对状态模式的定义和分析：

（1）状态模式允许对象在内部状态改变时改变它的行为，对象看起来好像修改了它的类。看起来，状态模式好像是神通广大很厉害似的——居然能够“修改自身的类”！
（2）适用场景：
a）状态模式主要解决的是当控制一个对象状态转换的条件表达式过于复杂时的情况。把状态的判断逻辑转移到表示不同状态的一系列类中，可以把复杂的判 断逻辑简单化。（简单来说，就是把各种if else 转变成了一个个的具体状态，原来if else 每种情况下的操作现在转换到了某个具体状态中）
b）当一个对象行为取决于它的状态，并且它必须在运行时刻根据状态改变它的行为时，就可以考虑使用状态模式了。


四、角色

（1）Context类：在该类内部维护一个ConcreteState子类的一个实例，这个实例定义当前的状态。
（2）State类：抽象状态类，定义一个 接口以封装与Context的一个特定状态相关的行为。
（3）ConcreteStateA,ConcreteStateB类：具体状态类，每一个子 类实现一个与Context的一个状态相关的行为。

*/
#include <iostream>  
#include <cstdlib>  
#include "Work.h"  
//#include "State.h"  
  
using namespace std;  
  
int main()  
{  
    Work emergencyProjects;  
  
    emergencyProjects.setHour(9);  
    emergencyProjects.writeProgram();  
  
    emergencyProjects.setHour(10);  
    emergencyProjects.writeProgram();  
  
    emergencyProjects.setHour(12);  
    emergencyProjects.writeProgram();  
  
    emergencyProjects.setHour(13);  
    emergencyProjects.writeProgram();  
  
    emergencyProjects.setHour(14);  
    emergencyProjects.writeProgram();  
  
    emergencyProjects.setHour(17);  
    emergencyProjects.writeProgram();  
  
    emergencyProjects.setFinish(false);  
  
    emergencyProjects.setHour(19);  
    emergencyProjects.writeProgram();  
  
    emergencyProjects.setHour(22);  
    emergencyProjects.writeProgram();  
    
}  

