#ifndef SINGLETON_H  
#define SINGLETON_H    

#include <unistd.h>  
#include <pthread.h>  
#include <stdlib.h>  
#include <stdio.h>  
#include <string.h> 

class Singleton  
{  
private:  
    static Singleton* instance;  
    //临界区，防止多线程产生多个实例  
    static pthread_mutex_t mutex;  
    Singleton()	{}
	
public:  
    static pthread_mutex_t* getLock()  
    {  
        return &mutex;  
    }  
    static Singleton *GetInstance()  
    {  
        //双重锁定  
        if(instance==NULL)  
        {  
              
            pthread_mutex_lock(&mutex);  
              
            if(instance==NULL)  
                instance=new Singleton();  
  
            pthread_mutex_unlock(&mutex);  
              
        }  
        return instance;  
    }  
};  
  
#endif

