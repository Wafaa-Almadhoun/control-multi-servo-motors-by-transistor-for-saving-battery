# control-multi-servo-motors-by-transistor-for-saving-battery



## Table of contents
* [Introduction](#Introduction)
* [Technologies](#technologies)
* [Components required](#Components-required)
* [Connections](#Connections)
* [Block diagram & simulation ](#Block-diagram-&-simulation)



## Introduction
This project is to control 3 servo motors using Arduino UNO R3 and transistors as a switch to saving battery  simulated with TINKERCAD circuit

## Technologies
Project is created with:
* Arduino IDE 1.18.15 [To Downloud](https://www.arduino.cc/en/software)
* AUTODESK TINKERCAD [Open](https://www.tinkercad.com/)
	
## Components required
1. Arduino ANO
2. 3 servo motors MG995
3. jumper wirs
4. 3 resistor 330 ohm 
5. bettrey  5 volt
6. breadboard
7. 3 PNP BJT transistor 

## Connections

    Connect the 5v output of the Arduino to the positive rail of the breadboard

    Connect the ground to the negative rail of the breadboard
    
    Connect the 5v power supply to the positive rail of the breadboard

    Connect the -ve power supply to the negative rail of the breadboard
    
    Connect the signal wire of the servo motors to pin 9,10 and 11 in Arduino
    
    Connect the power wire of the servo motors to the resistor then to the collector leg of transistor
    and to positive rail of the breadboard
    
    Connect the ground  wire of the servo motor to power supply to GND of the breadboard
    
    Connect the base legs of transistors to pin 3,5 and 6  in Arduino
    
    Connect the emiiter legs of transistors to GND
    


## Block diagram & simulation
### The circuit simulation  . [see here](https://www.tinkercad.com/things/1wRWSsRh1OS-control-multi-servo-motors-by-transistor-for-saving-battery/editel)



Figure (1): Servo Motor at initial value (0 degree

After 1 sec
![1 2](https://user-images.githubusercontent.com/64277741/122783332-24ea0a80-d2ba-11eb-81ef-cee1f5e9950c.PNG)
Figure (2): Servo Motor at 90 degrees 

#### The Code 

#include <Servo.h>

// servos digtal pins attach 

int servo1pin = 9;

int servo2pin = 10; 

int servo3pin = 11; 

// servos power control by transistor pins attach 

int servo1control = 3; 

int servo2control = 5;

int servo3control = 6;

Servo Servo1, Servo2, Servo3 ;

void setup() {
  
  // We need to attach the servo to the used pin number

 pinMode( servo1control, OUTPUT);    
 
 pinMode( servo2control, OUTPUT);    
 
 pinMode( servo3control, OUTPUT);           

  Servo1.attach(servo1pin);
  
  Servo2.attach(servo2pin);
  
  Servo3.attach(servo3pin ); 
  
  

} void loop(){

  

digitalWrite(servo1control, HIGH);       // turn ON SERVO1

Servo1.write(90);

  delay(1000);
  
 Servo1.write(0);
 
delay(1000); 

digitalWrite(servo1control, LOW);      // turn OFF SERVO1

digitalWrite(servo1control, LOW);      // turn OFF SERVO1




digitalWrite(servo2control, HIGH);       // turn ON SERVO2

Servo2.write(90);

delay(1000);

Servo2.write(0); 

delay(1000);

digitalWrite(servo2control, LOW);      // turn OFF SERVO2



digitalWrite(servo3control, HIGH);       // turn ON SERVO3

Servo3.write(90);

delay(1000);

Servo3.write(0);

delay(1000);

digitalWrite(servo3control, HIGH);       // turn ON SERVO3

} 
