#!/usr/bin/python

print 'Simple Assignment'
shoplist = ['apple','mango','carrot','banana']
mylist = shoplist #reference

del shoplist[0]

print 'shoplist is',shoplist
print 'mylist is',mylist

print 'Copy by making a full slice'
mylist = shoplist[:] # copy

del mylist[0]

print 'shoplist is',shoplist
print 'mylist is',mylist
