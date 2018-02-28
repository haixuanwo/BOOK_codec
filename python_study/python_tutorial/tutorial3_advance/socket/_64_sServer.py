#!/usr/bin/python
# -*- coding: UTF-8 -*-

if __name__ == '__main__':  
    import socket  
    sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)  
    #sock.bind(('localhost', 8001))    
    sock.bind(('10.10.12.228', 8001))
    sock.listen(5)  
    while True:
        print "waiting client ..."
        connection,address = sock.accept()  
        try:  
            connection.settimeout(5)  
            buf = connection.recv(1024)  
            if buf == '1':  
                connection.send('welcome to server!')  
            else:  
                connection.send('please go out!')  
        except socket.timeout:  
            print 'time out'  
        connection.close() 

