# Report

# OBSTACLE DETECTOR

## Abstract
In a world of developing science and technology, humans fulfill their daily needs and other small desires with our own. There are some or particularly many people who are physically challenged, feel difficult and seek other people's help to even move from one place to another. Taking care of them and thinking about all their needs here is a solution that is proposed: "Obstacle Detector". With the help of the basic function of the Ultasonic sensor of detecting objects, this process becomes a useful one for the blind people to make their movement without any barriers.  Physically challenged people account for 27.5 percent of the population. In kids under 18 years, the prevalence of disability is envisioned at 6% and for the age organization above 18 years, it's 14%. It is predicted that there are three.4 million disabled children and 10.2 million disabled adults inside the u.s.. In addition, roughly 4.6 percent of people experience disability as a result of a spinal cord injury. Many assistive technology and devices are available to assist physically challenged people.

The main Aim of this project to help the Blind people.Using this process the opposite objects,or the humans can be easily detected.Here we used only the basic process of sensors This is the simple and effective projects for the blind peoples . Now days the percentage of blindness can be increasing shortly . we make this mini process of the ultrasonic sensors . This is simple and low cost product which can be low maintenence product compared to the other products. This usage of this process can be deliverable into an complete products like Smart Glass ,and walking stick.

# Requirements
## Introduction
The main Aim of this project to help the Blind people.Using this process the detecting the closer objects, or the humans can be easily detected.Here we used only the basic process of sensors(Ultrasonic Sensor).
This is the simple and effective project for the blind peoples . Now days the percentage of blindness is increasing shortly . We make use of this basic process of the ultrasonic sensors . This is simple and low cost product which can be low maintenence product compared to the other products. The usage of this process can be deliverable into an complete products like Smart Glass ,and walking stick.

## Research
In this project we used only demo functions. Since most of the blind person use glasses and it inspires us for installing the device on
glasses. The ultrasonic sensor is installed on the glasses, but the main unit which including the
minimum system, power supply, and the main switch are placed on a box, and the blind person
can put in his/her pocket. This device is more practical and easier to use. 

## Defining our project
Ultrasonic sensor “HC-SR04” provides an output signal proportional to distance based on the echo. The sensor here generates a sound vibration in ultrasonic range upon giving a trigger, after that it waits for the sound vibration to return. Now based on the parameters, sound speed (220m/s) and time taken for the echo to reach the source, it provides output pulse proportional to distance.

## Features
*   It Has an weather assistance it will works in any weathers.
*   LCD used in this projects will give some clear informations to the users.

__Components Used__
*   Atmega328
*   HC-SR04 (Ultrasonic) Sensor
*   LCD display
*   Switches
*   Power Supply

## SWOT Analysis
__STRENGTH__
*   It work like an alert system for the blind people.
*   It is cheaper when compared to the existing system .
*   The LCD out available in this project makes the  people to detect  of the  closer objects .
  
__WEAKNESS__
*   It gives only the information of the closer objects only.
*   Since we used only one ultrasonic sensor, This gives only information of lesser distance.

__OPPURTUNITIES__
*   There will be no need for the dependent to go outside.
*   The updation of the projects will be we have to give some specifications like 360 degree assistance .
*   We also make this glasses for the reading purpose also *Smart Glass For the Blind* with some added specifications.
 
__THREATS__
*   The major challenges here will be the Battery backup .If they go for some long distance then battery backups is concerned .

## 4W'S and 1'H
__WHO__
This will be useful to an the blind peoples.

__WHAT__
The main aim  of this project is to reduce the dependencies of the other people of blind peoples .

__WHEN__
This will be useful to them when they go outside and whenever they need assistance .

__WHERE__
This will be working every where .This also works in rainny days and winter also(weather assistance available).

__HOW__
The sensor used in this project Ultrasonic sensor which detects the closer objects and send this information to the microcontroller then it gives the message to the user.
## Detail Requirements 
__High Level Requirements__
| ID | Description | Status |
| -- | ----------- | ------ |
| HLR1 | UltraSonic Sensors | Used for the sensing the objects |
| HLR2 | Atmega 328p | Microcontroller used for the entire process |
| HLR3 | Source Code | Used for the Execution of the system |

__Low Level Requirements__
| ID | Description | Status |
| -- | ----------- | ------ |
| LLR1 | Buzzer | Used for the output of the Microcontroller |
| LLR2 | Glass | Used  as  support for the sensor |
| LLR3 | LCD   | Used for the output calculations |

## Block Diagram

<img width="851" alt="blockdiag_obdet" src="https://user-images.githubusercontent.com/83327670/164478870-74c3c53d-72ab-404a-86e7-bf5ac376e587.png">

## Structural Diagram

![Structural diagram drawio](https://user-images.githubusercontent.com/83327670/164479056-9e3d3547-f949-4b27-b501-223693cfab30.png)

## Simulation
__(OFF)__

![off](https://user-images.githubusercontent.com/83327670/164477655-b086d5e8-bb32-4690-8212-24e27b2e8bcc.png)

__(ON)__

![on](https://user-images.githubusercontent.com/83327670/164477898-c8aae6fe-db96-4bf1-8d4a-8f1563158b33.png)

# Test Plan
## High Level Test Plan
| ID | Description | Ex I/P | Ex O/P | Actual Output |
| -- | ----------- | ------ | ------ | ------------- |
| HLT1 | Power On | Power supply | LCD ON | PASS |
| HL2 | Sensor  | Objects In the range  | Objects detected | PASS |
| HLR3 | Output | Output of the Sensor | Distance of objects | PASS |

## Low Level Test Plan 
| ID | Description | Ex I/P | Ex O/P | Actual Output |
| -- | ----------- | ------ | ------ | ------------- |
| LLT1 | Objects Range  | 20cm   | Ojects in range | PASS |
| LLT2 | Objects Range  | 100cm  | Objects Not in range | PASS |
