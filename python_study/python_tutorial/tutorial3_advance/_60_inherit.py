#!/usr/bin/python
# -*- coding: UTF-8 -*-

class Parent:
    parentAttr = 100

    def __init__(self):
        print "调用父类构造函数"

    def parentMethod(self):
        print "调用父类方法"

    def setAttr(self, attr):
        Parent.parentAttr = attr

    def getAttr(self):
        print "父类属性 :", Parent.parentAttr

class Child(Parent):

    def __init__(self):
        print "调用子类构造方法"

    def childMethod(self):
        print "调用子类方法"


C = Child()      # 实例化子类
C.childMethod()  # 调用子类的方法
C.parentMethod() # 调用父类方法

C.setAttr(200)   # 调用父类方法 - 设置属性值
C.getAttr()   # 调用父类方法 - 获取属性值


