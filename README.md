# Project Documentation
It is a Remote Controlled car made as an application of what we have learnt in control course at the university. 

Project content 

How to navigate Github project

## Abstract:

> The project aims to design a car and do some control analysis on its system to apply what we have learnt in our unviersity control course. The main component of the car deisgn is the Arduino mircrocontroller that controls the movement of the car through digital signals received from the mobile phone via bluetooth module connected to the Arduino. In this open loop system of the car, we were interseted in studying the transfer function and analyse the its error that resulted from the studting its step response. Finally, all the project details was documented in the following sections.

## Introduction:

> The studied system is in the form of Arduino based, Bluetooth controlled RC car. It is controlled by a smart phone application that gives the moevment directions to a bluetooth module which translates them into digital signals inputted to the Arduino and processed by the uploaded Arduino-C code. After that, the Arduino sends its output signals to the car motor drivers to move them in the specified directions. In fact, this system is prone to err in some processes like the time of sending and receiving signals from and to the arduino and that what we studied in the anaylsis part.

## Materials & Methods:
> > ### Used Materials:
>  * Arduino Uno - x1
>  * HC-05 Bluetooth Module - x1
>  * L293D Motor driver - x1
>  * Wheels with motors -x4
>  * 12v Battery - x1
>  * Body of the car & Jumpers.  
>  * Mini test board
> ![image](https://user-images.githubusercontent.com/91850794/209566528-f5a3030d-9f0d-40e6-9832-2d619277c89c.png)
> ![image](https://user-images.githubusercontent.com/91850794/209566993-0ddf124b-7608-4307-805c-45c816e22ac7.png)
______________________________________________________________
> ### Followed methods:

To design the prototype, the following steps were followed:

* **STEP 1:**

  On the three slots of the motor driver, we connect:
   - The battery by the the 12v slot on the left-hand side of the three slots.
   - The slot of ground in the middle on Arduino ground slot.
   - The right one on the mini test board to have two  input for Bluetooth module and 5v for Arduino.

* **STEP 2:**

  Connecting each 2-car motors in parallel.

* **STEP 3:**

  Connecting the HC-05 Bluetooth Module to the Arduino.

  The HC-05 Bluetooth Module is responsible for enabling Bluetooth Communication between Arduino and Mobile Phone.

* **STEP 4:**
  
  Checking the Arduino bins' connection:

  * Arduino GND -> motor driver GND

  * Arduino TX slot -> Bluetooth module RX slot

  * Arduino RX slot -> Bluetooth module TX slot
  

* **STEP 5:** 

  Testing the car -> [Testing Video](https://github.com/Controllers-Group/RC_car_project/tree/main/Testing)

* **STEP 6:** 

  Conducting the control analysis (in the following section). 


## Analysis:

For the modeling and transfer function of rc car:
 * The studied system is electrical system. 
 * The input is the signal coming from the bluetooth module. 
 * The output is the voltage across the capacitor.
 
<p align="center">
 <img width="400" src="https://user-images.githubusercontent.com/91850794/209574164-bc1a8112-d742-46ba-8d89-12a4e76c8652.png" alt="Material Bread logo">
 </p>
 
 * The damping ratio (ζ) for the system in the standard equation will be less than 1 that is the reason of having an underdamped system if we want to go forward all
  the outputs will be active and in case we want to turn right or left we we will deactivate one output and activate the other one.


## Recommendations:

For the 

## References:

Arduino-Based bluetooth-controlled RC-car Reaserch Paper -> [Click here](http://csjournals.com/IJCSC/PDF11-1/2.%20Paul.pdf)


