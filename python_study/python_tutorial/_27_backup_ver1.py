#!/usr/bin/python

import os
import time

source = ['/home/tanxiaohai/myDisk/python_study/_2_if.py','/home/tanxiaohai/myDisk/python_study/_3_while.py']

target_dir = '/home/tanxiaohai/myDisk/python_study/'

target = target_dir + time.strftime('%Y%m%d%H%M%S') + '.zip'

zip_command = "zip -qr '%s' %s"%(target,' '.join(source))

print zip_command

if os.system(zip_command) == 0:
	print 'Successful backup to',target
else:
	print 'Backup FAILED'
	