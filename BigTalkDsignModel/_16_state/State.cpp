#include <iostream>  
#include "State.h"  
#include "Work.h"  
  
using namespace std;  
  
void ForenoonState::writeProgram(Work* w)  
{  
    if(w->getHour()<12)  
    {  
        cout<<"the time now:"<<w->getHour()<<"hour "<<"working in forenoon ,Spirit of the times"<<endl;  
    }  
    else  
    {  
        w->setState(new NoonState);  
        w->writeProgram();  
    }  
}  
  
void NoonState::writeProgram(Work* w)  
{  
    if(w->getHour()<13)  
    {  
        cout<<"the time now:"<<w->getHour()<<"hour "<<"hungry,lunch;feel sleepy,midday rest"<<endl;  
    }  
    else  
    {  
        w->setState(new AfternoonState);  
        w->writeProgram();  
    }  
}  
  
void AfternoonState::writeProgram(Work* w)  
{  
    if(w->getHour()<17)  
        cout<<"the time now:"<<w->getHour()<<"hour "<<"It good state, keep work hard"<<endl;  
    else  
    {  
        w->setState(new EveningState);  
        w->writeProgram();  
    }  
}  
  
void EveningState::writeProgram(Work* w)  
{  
    if(w->getFinish())  
    {  
        w->setState(new RestState);  
        w->writeProgram();  
    }  
    else  
    {  
        if(w->getHour()<21)  
            cout<<"the time now:"<<w->getHour()<<"hour "<<"work overtime,every tired"<<endl;  
        else  
        {  
            w->setState(new SleepingState);  
            w->writeProgram();  
        }  
    }  
}  
  
void SleepingState::writeProgram(Work* w)  
{  
    cout<<"the time now:"<<w->getHour()<<"hour "<<"I can't move, asleep"<<endl;  
}  
  
void RestState::writeProgram(Work* w)  
{  
    cout<<"the time now:"<<w->getHour()<<"hour "<<"go home"<<endl;  
}

