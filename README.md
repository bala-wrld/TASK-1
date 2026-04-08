TINKERCAD LINK FOR THE MENTIONED PROJECTS:
SECTION A QUESTION 1: https://www.tinkercad.com/things/jPRSo0oppJq-blinking-led-with-different-time-interval
SECTION A QUESTION 2: https://www.tinkercad.com/things/4JTl52xF4Zh-controlling-rgb-led-and-blinking-speed-by-potentiometer
SECTION A QUESTION 3: https://www.tinkercad.com/things/lxIjGI7i6al-reaction-time-tester
PROJECT: https://www.tinkercad.com/things/iY4HJr6g2kf-project

ABOUT THE PROJECT: 
In the Project I have used Ultrasonic sensor to calculate the distance between the object and the sensor.
When the distance between the sensor and the object is less than 35cm the buzzer beeps.
I have also used a LCD to display the distance between the object and the sensor.

COMPONENTS USED:
Arduino Uno R3
Ultrasonic Distance Sensor
MCP23008-based, 32 (0x20) LCD 16 x 2 (I2C)
Piezo

PROBLEMS FACED DURING THE PROJECT:
When the distance between the sensor and the object changes from a three digit number (like 121 cm) to two digit number 
the last digit of the three digit number added to the end of the two digit number.
For example, if the distance measured changes from 121 to 56, the value shown in the display would be 561,
since the last digit of 121 gets added at the end of 56.

The solution I brought up is printing two extra space after the measured value, so that the excessive digit gets replaced by space
And it wont affect the value of distance measured.
