import serial
import time
from pyPS4Controller.controller import Controller
'''
all details about pyps4controller are availabe in this link: https://github.com/ArturSpirin/pyPS4Controller
'''

# Arduino connected to Raspberry Pi via USB cable
# Serial communication between arduino and Raspberry Pi
serialobject = serial.Serial('/dev/ttyACM0', 9600)
    
    
class MyController(Controller):
    
    
    def __init__(self, **kwargs):
        Controller.__init__(self, **kwargs)
        
    def on_right_arrow_press(self):
        serialobject.write(b'r')
    
    def on_down_arrow_press(self):
        serialobject.write(b'd')
        
    def on_up_arrow_press(self):
        serialobject.write(b'u')
        
    def on_left_arrow_press(self):
        serialobject.write(b'l')
            
    def on_x_press(self):
        serialobject.write(b'g')
        
    def on_x_release(self):
        serialobject.write(b'p')
        
    def on_triangle_press(self):
        serialobject.write(b'z')
        
    def on_circle_press(self):
        serialobject.write(b'x')
    
controller = MyController(interface="/dev/input/js1", connecting_using_ds4drv=False)
# you can start listening before controller is paired, as long as you pair it within the timeout window
controller.listen(timeout=60)
