#!/usr/bin/python
# -*- coding: UTF-8 -*-

# __foo__ :定义的是特殊方法，一般是系统定义名字，类似__init()之类
# _foo    :表示protected类型变量，保护类型只允许其本身与子类进行访问，不能from module import *
# __foo   :表示私有类型private变量，只允许本身访问

class JustCounter:
    __secretCount = 0  # 私有变量
    publicCount   = 0  # 公开变量

    def count(self):
        self.__secretCount += 1
        self.publicCount   += 1
        print self.__secretCount

    def count2(self):
        print self.__secretCount

counter = JustCounter()
counter.count()
# 在类的对象生成后，调用含有私有属性的函数时就可以使用到私有属性
counter.count()
# 第二次同样可以
print counter.publicCount
#print counter._JustCounter__secreCount # 报错

try:
    counter.count2()
except IOError:
    print "不能调用非公有属性"
else:
    print "ok"  



        

