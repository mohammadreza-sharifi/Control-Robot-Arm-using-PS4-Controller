# Control-Robot-Arm-using-PS4-Controller
## You can see all details about this Robot in my Youtube channel:
https://www.youtube.com/watch?v=X5WBw5xrRW0
## How does this Robotic Arm Work?
this Robotic Arm is controlled by PS4 Controller. PS4 controller connected to Raspberry Pi via Bluetooth, And Raspberry Pi receives commands from the controller.
I used an Arduino board to control servo motors and robotic arm. 
Arduino connected to Raspberry Pi via USB cable and These two boards exchange information through serial communication.
### install pyps4ontroller library in Raspberry pi
You must install pyps4controller to connect PS4 controller to Raspberry Pi. run this command pip install pyps4controller. 
see this link: https://github.com/ArturSpirin/pyPS4Controller
## The parts used in this robot are:
- Raspberry Pi 3 B+
- Arduino UNO
- SG90 Servo Motor *4
- MeArm Robotic Arm platform
- DC Power Supply
- PS4 Controller
