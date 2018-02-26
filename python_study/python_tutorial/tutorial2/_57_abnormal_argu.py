#!/usr/bin/python
# -*- coding: UTF-8 -*-

def temp_convert(var):
    try:
        return int(var)
    except ValueError,Argument:
        print "参数没有包含数字\n",Argument

temp_convert("xyz");

