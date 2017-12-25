#!/usr/bin/python

def func():
	global x

	print 'x is',x
	x=2
	print 'Change local x to',x

x = 50
func()
print 'Value os x is',x
