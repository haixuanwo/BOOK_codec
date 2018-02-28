#!/usr/bin/python
# -*- coding: UTF-8 -*-

class Employee:
    '所有员工的基类'
    empCount = 0

    def __init__(self,name,salary):
        self.name   = name
        self.salary = salary
        Employee.empCount += 1

    def displayCount(self):
        print "Total Employee %d" % Employee.empCount

    def displayEmployee(self):
        print "Name: ", self.name, ", Salary: ",self.salary

"创建 Employee 类的第一个对象"        
emp1 = Employee("Zara", 2000)

"创建 Employee 类的第二个对象"
emp2 = Employee("Mani",5000)

emp1.displayEmployee()
emp2.displayEmployee()

print "Total Employee %d" % Employee.empCount


##################################################

emp1.age = 100 # 添加类的属性
#del emp1.age   # 删除类的属性

hasattr(emp1,'age')   # 如果存在‘age’属性返回 True
getattr(emp1,'age')   # 返回'age'属性的值
setattr(emp1,'age',8) # 添加属性'age'值为8
delattr(emp1,'age')   # 删除属性'age'


###################################################

print "Employee.__doc__:", Employee.__doc__
print "Employee.__name__:", Employee.__name__
print "Employee.__module__:", Employee.__module__
print "Employee.__bases__:", Employee.__bases__
print "Employee.__dict:", Employee.__dict__
