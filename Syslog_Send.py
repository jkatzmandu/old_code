#!/usr/bin/python
#
# CEF Generate 0.1 (C) 2012 Jonathan Katz j
# Simple debug/test script for generating CEF-formatted messages to a
# syslog daemon

# This is what CEF can look like:
# CEF:Version|Device Vendor|Device Product|Device Version|Signature ID|Name|Severity|Extension
# Thanks to: http://mita-tac.wikispaces.com/file/view/CEF+White+Paper+071709.pdf
# 
# This first release does not have input checking for n00bs or any magic for time stamps

# this prevents extra spaces in our print commands
import sys
import logging
import logging.handlers
import socket
import time

sys.stdout.softspace=False
syslogPort = 514

def printf(format, *args):
	print format % args

def syslog(message, host, port):
	sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
	data = "%s" % (message)
	sock.sendto(data, (host, port))
	sock.close()


from optparse import OptionParser

parser = OptionParser()
parser.add_option("-f", "--file", action="store", type="string", dest="filename",
                  help="input CEF from FILE", metavar="FILE")
(options, args) = parser.parse_args()

f = open(options.filename)
lines = f.readlines()

for mycef in lines:
	syslog(mycef,"127.0.0.1",syslogPort)
	time.sleep(3)

f.close()
