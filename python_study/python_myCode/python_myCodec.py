#!/usr/bin/env python

# -*- coding: UTF-8 -*-

import random
import time

def saveFile(L):
    file=open('data.txt','w')  

    for i in range(0,100):
        #print "i:"+str(i)
        file.write("["+str(i)+"]: "+str(L[i])+"\n")

    file.close()

def startRun(data):
    count = 0
    N = 100
    L = []
    for i in range(0,N):
        L.append(0)
    print L
    print "len:"+str(len(L))
    
    while True:
        #print random.random() # float
        value = random.randint(0,99) # int
        L[value] += 1
        print L
        print "value:"+str(value)

        count += 1
        if 10000 == count:
            saveFile(L)
            print "T  ---- the run over"
            break
            
        time.sleep(1)
        
if __name__ == '__main__':
    startRun("hello wolrd")
#    print "hello"
    
