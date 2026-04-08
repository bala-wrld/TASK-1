TINKERCAD LINK FOR THE MENTIONED PROJECTS:
SECTION A QUESTION 1: https://www.tinkercad.com/things/jPRSo0oppJq-blinking-led-with-different-time-interval?sharecode=ldH9XrrSVK9lpVLqNDWw2Q9OVH7FyGck85YYqPVmLn4
SECTION A QUESTION 2: https://www.tinkercad.com/things/4JTl52xF4Zh-controlling-rgb-led-and-blinking-speed-by-potentiometer?sharecode=aGtGK39Y6NuYPuP1xlu98R0zqPdkOUC4LbLRPAQ1WlY
SECTION A QUESTION 3: https://www.tinkercad.com/things/lxIjGI7i6al-reaction-time-tester?sharecode=m9qy1kr47L3uvG_F06sIHks5I_zPLDclKI87cyxjOUY
PROJECT: https://www.tinkercad.com/things/iY4HJr6g2kf-project?sharecode=aUvT3y1COMStzJlTtzSCvBr462eLh0R0WtEynhp8O8Y

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

QUESTION 1: 
After using around 12 delay function and timing each LED according to it, we can see that the asked pattern is follwed by each of the LED
I just timed the delay perfectly, so that the delay doesnt affect the other leds.

QUESTION 2: 
The max value given by potentiometer is 1023, so we get three equal parts 0-341, 342-682 , 683-1023.
If the potentiometer is set between 0-341 it would become red
342-682 it would become blue
683-1023 it would become green

And to control the blinking speed of the LED I just gave delay(potentiometer_value), so if we increase the value of the potentiometer
the time period of the LED also increases.

QUESTION 3:
I got the digital input of the push button , so that if its pressed its value is 1 and when not pressed its value is 0
I also used random function since its mentioned in the question that the LED should turn on randomly.
The value that the random function generates will the time at which the LED glows.
When the led is turned on and the button is pressed, the reaction time is calculated as millis()-random_value
And the above value is also printed in the serial monitor

