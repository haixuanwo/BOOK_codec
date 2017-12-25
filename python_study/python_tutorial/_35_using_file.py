#!/usr/bin/python

poem = '''\
	Programming is fun when the w=ork is done
	if you wanna make your work also fun:
	usr Pthon!
	'''

f = file('poem.txt','w')
f.write(poem)
f.close()

f = file('poem.txt')
while True:
	line = f.readline()
	if len(line) == 0:
		break;
	print line,	

f.close()

