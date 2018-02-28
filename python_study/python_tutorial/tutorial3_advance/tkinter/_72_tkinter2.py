#!/usr/bin/python
# -*- coding: UTF-8 -*-

from Tkinter import *
root = Tk()

li     = ['C','python','php','html','SQL','java']
movie  = ['CSS','jQuery','Bootstrap']
listb  = Listbox(root)  # 创建两个列表组件
listb2 = Listbox(root)

for item in li:
    listb.insert(0,item)

for item in movie:
    listb2.insert(0,item)

listb.pack()   # 将小部件放置到主窗口中
listb2.pack()

root.mainloop() # 进入消息循环

