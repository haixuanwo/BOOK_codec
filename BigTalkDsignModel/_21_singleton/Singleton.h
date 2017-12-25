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
    //�ٽ�������ֹ���̲߳������ʵ��  
    static pthread_mutex_t mutex;  
    Singleton()	{}
	
public:  
    static pthread_mutex_t* getLock()  
    {  
        return &mutex;  
    }  
    static Singleton *GetInstance()  
    {  
        //˫������  
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

