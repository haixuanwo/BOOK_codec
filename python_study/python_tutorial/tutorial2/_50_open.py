#!/usr/bin/python
# -*- coding: UTF-8 -*-

# 打开一个文件
fo = open("foo.txt","r+")
print "文件名:",fo.name
print "是否已关闭：",fo.closed
print "访问模式：",fo.mode
print "末尾是否强制加空格：",fo.softspace

fo.write( "www.runoob.com!\nVery good site!\n")

str = fo.read(10)
print "读取的字符串是：",str

fo.close()

