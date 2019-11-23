from tello import Tello
import sys
from datetime import datetime
import time
import TelloPro

tello = Tello()

command_lst = []
command_lst.append(TelloPro.get_instance('takeoff', -1))
command_lst.append(TelloPro.get_instance('up', 35))
command_lst.append(TelloPro.get_instance('down', 35))
command_lst.append(TelloPro.get_instance('left', 35))
command_lst.append(TelloPro.get_instance('right', 35))
command_lst.append(TelloPro.get_instance('forward', 35))
command_lst.append(TelloPro.get_instance('back', 35))
command_lst.append(TelloPro.get_instance('cw', 180))
command_lst.append(TelloPro.get_instance('ccw', 180))
for i in range(4):
	command_lst.append(TelloPro.get_instance('flip', i))
command_lst.append(TelloPro.get_instance('land', -1))


for command in command_lst:
	tello.send_command_instance(command)
