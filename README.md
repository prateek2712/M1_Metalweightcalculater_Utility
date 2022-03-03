# M1_METALWEIGHTCALCULATER_Utility


Code Grade | Code Quality Score |Codacy Badge | 
---------|------------|---------|
![Code Grade](https://api.codiga.io/project/31044/status/svg)| ![Code Quality Score](https://api.codiga.io/project/31044/score/svg)| [![Codacy Badge](https://app.codacy.com/project/badge/Grade/b5f386282bee4577969b959ff66f85bc)](https://www.codacy.com/gh/prateek2712/M1_Metalweightcalculater_Utility/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=prateek2712/M1_Metalweightcalculater_Utility&amp;utm_campaign=Badge_Grade) |

* Repository for mini project

## Milestone -1
# INTRODUCTION
* It’s essential to know how much your metal order weighs Material weight calculators eliminate human mistakes while providing an easy and accessible way to determine exact weights by inputting material piece measurements.
When you need to know the worth of the metals you're working with, their weight can tell you what you need to know. And, using a metal weight calculator to figure out this information can make your job a whole lot easier to get the costs of the metal per pieces.



# DEFINING OUR SYSTEM
* Metal weight calculator is a tool that will help you find the weight of any amount of metal, useful if you are, e.g., planning to transport large metal elements. This will allow you to accurately estimate the cost of driving the elements to your desired destination, or if your vehicle can support the weight!. 





# SWOT
## Strengths:
 *  Simple & Easy to Use.

 * Highly Secure, Scalable & Reliable.

## Weakness:
 * The cost of a calculator rises as the number of features added to the calculator rises.

## Opportunities:
*  We all know that we do most of our calculations with a pen and paper. As a result, the youth are always drawn to the tech-based industry.



## Treats: 
* In today's dynamic world, slower progress in innovation is always a threat to the organisation.
* Very basic design with no GUI. Hence would not attract young generation to make use of it.
* Many other similar applications available.

# 4W's & 1H
## Who
* This Metal Calculater is a Utility used by Metal Manufacturing Industries.

## What:
* This Metal Calculater is a Utility which helps in calculating the weight of raw meterial just by entering the Metal type , shape , lenth and thickness 

## When:
* This Metal Calculater is very usefull when there is Tons of metal to calculate the exact weight

## Where:
This Metal Calculater is nowadays very essential for metal industries. This utility will save their time and error free calculations.


## How:
This project is implemented to do the metal weight calculations by adding the length ,thickness ,metal type

# DETAIL REQUIREMENTS
## High Level Requirements-
|ID	        | Description	                                |Status
| :---         |     :---:      |          ---: |
|HL01	|Calculates different metal types from the given options	    |Implemented|
|HL02	|Calculates in specified mesurement units	    |Implemented|
|HL03	|Calculates bar_type specified by user from the given options	    |Implemented|

## Low Level Requirements

| ID	       | DESCRIPTION    | STATUS        |
| :---         |     :---:      |          ---: |
|LLR1	       | OS WINDOWS	    | IMPLEMENTED   |
|LLR2	       | OS LINUX	    | IMPLEMENTED   |
|LLR3	       | Give results of total weight and individual bars	    | IMPLEMENTED   |
|LLR4	       | Give results in both kg and lbs	    | IMPLEMENTED   | 

# Architecture


## Structural Diagrams
 * Low Level structural Diagrams
 ![low level structural diagram](https://user-images.githubusercontent.com/47187002/156596699-eb48263c-3ec2-467b-9166-c30d39f5030e.jpg)

  
   


 * High Level structural Diagram
 ![highlevel structural diagram](https://user-images.githubusercontent.com/47187002/156596589-babef95b-f877-4a86-bb08-bac84a816f39.jpg)

  
* Behavioural Diagram
![behave low](https://user-images.githubusercontent.com/47187002/156596526-fa061efe-d1d1-4819-b990-9d36ae3ecd72.jpg)


# Implementation

![Makefile - M1_Metalweightcalculater_Utility - Visual Studio Code 03-03-2022 20_55_48](https://user-images.githubusercontent.com/47187002/156595834-b7b51cda-9f7a-4f60-bf4e-38ea34e4bd1d.png)






# Test Plan






# DETAIL REQUIREMENTS
## Table no:1  High Level Requirements-
| Test ID	   | DESCRIPTION    | Exp I/P     |  Exp O/P| Actual Out | Type of Test      |
| :---         |     :---:      | :---:       |:---:    |   :---:    |       ---:        |
|H_01	       | Mild steel	    |Length=14cm,width=16cm,Thickness=45cm  |0.9495kgs         |0.9495kgs     |Mild steel + Flat bar |
|H_02	       | Cast iron	    |Length=34cm,width=35cm,Thickness=36cm             |0.3084kgs         |0.3084kgs            |Cast Iron+FLat bar    |
|H_03	       | Aluminium	    |Length=100cm,width=101cm,Thickness=102cm             |2.7815kgs         |2.7815kgs            |Aluminium +Flat bar     |


## Table no:2  Low Level Requirements-
| Test ID	   | DESCRIPTION    | Exp I/P     |  Exp O/P| Actual Out | Type of Test      |
| :---         |     :---:      | :---:       |:---:    |   :---:    |       ---:        |
|L_01	       |Square bar 	            |Length=301cm,width=302cm,Thickness=303cm              |214.0742kgs         |214.0742kgs            |Mild Steel + Square |
|L_02	       |Round bar 	            |Length=400cm,width=401cm             |396.5477kgs    |396.5477kgs            |Mild steel + Round bar   |
|L_03	       |Hex bar 	            |Length=500cm,width=501cm           |849.7625kgs        |849.7625kgs            |Mild steel + Hex bar     |


