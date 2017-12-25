def foo(a):
	a.append('shit')

def bar(b):
	b=101

a=[]
b=100
foo(a)
bar(b)
print(a)
print(b)

class Fish(object):
	def eat(self,food):
		if food is not None:
			self.hungry=False

class User(object):
	def __init__(myself,name):
		myself.name = name

f=Fish()
Fish.eat(f,"earthworm");
f.eat("earthworm")

u = User('username')
u.name

