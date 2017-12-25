#!/usr/bin/python

import os
import time

source = ['/home/tanxiaohai/myDisk/python_study/_2_if.py','/home/tanxiaohai/myDisk/python_study/_3_while.py']

target_dir = '/home/tanxiaohai/myDisk/python_study/'

today = target_dir + time.strftime('%Y%m%d')

now = time.strftime('%H%M%S')

if not os.path.exists(today):
	os.mkdir(today)
	print 'Successfully created directory',today
	
target = today + os.sep + now + '.zip'

zip_command = "zip -qr '%s' %s"%(target,' '.join(source))

#print zip_command

if os.system(zip_command) == 0:
	print 'Successful backup to',target
else:
	print 'Backup FAILED'#!/usr/bin/python


