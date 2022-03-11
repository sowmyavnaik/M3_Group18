# TABLE OF CONTENT
 |S.NO|CONTENT|
 |--|--|
 |1|REMOTE KEYLESS ENTRY(RKE)|
 |1.1|Description|
 |1.2|Features|
 |1.3|5W's AND 1H |
 |1.4|SWOT Analysis|
 |2|REQUIREMENTS|
 |2.1|High level requirements|
 |2.2|Low level requirements|
 |3|ARCHITECTURE|
 |3.1|STRUCTURAL DIAGRAM|
 |3.1.1|High level structural diagram|
 |3.1.2|Low level structural diagram|
 |3.2|BEHAVIORAL DIAGRAM|
 |3.2.1|High level behavoiral diagram|
 |3.2.2|Low level behavoiral diagram|
 |4|TEST PLAN AND OUTPUT|
 |4.1|High level test plan|
 |4.2|Low level test plan|
 
## 1.REMOTE KEYLESS ENTRY(RKE) 

## 1.1.Description
* Remote keyless entry (RKE) system is a system designed to remotely lock or unlock access to automobiles. It requires two components - a transmitter and a receiver. RKE operates by broadcasting radio waves on a particular frequency unidirectionally. RKE systems implement encryption and rolling code algorithms to prevent car thieves from intercepting and spoofing the telegrams. 

## 1.2.Features
* It shall print Lock the car when blue switch is pressed once
* It shall print Unlock the car when blue switch is pressed twice
* It shall print activation/deactivation alarm when the blue switch is pressed thrice times
* It shall print approach light when the blue switch is pressed four times

# 1.3.5W's AND 1H

## What 
- Remote keyless entry for automobiles.
 
## Where 
- Can be used When user is close to car.
 
## When
- When the car has to be locked or unlocked.

## Who 
- Users having cars.

## Why
- To lock and unlock the car.

## How 
- Using key fob to access the car.

# 1.4.SWOT Analysis

![project](https://user-images.githubusercontent.com/46950972/157833977-c16ab5d7-07b6-4e8b-bc68-ed01de10b3bc.png)

## 2.REQUIREMENTS

### 2.1.High level requirements

| ID | High Level Requirements |
|----|--------------|
|HLR1| It shall lock the car|
|HLR2|	It shall unlock THE CAR|
|HLR3|	It shall activate / deactivate the alarm|
|HLR4|	It shall approach light|

### 2.2.Low level requirements

|ID	|Low Level Requirements for HLR1	|  |ID|	Low Level Requirements for HLR2|
|----|--------------------------------|--|----|--------------|
|LLR1.1|	If the switch is pressed once, ON all LED's| |	LLR2.1	|If the switch is pressed twice, OFF LED's|

|ID|	Low Level Requirements for HLR3|	|ID	|Low Level Requirements for HLR4|
|----|-------------------------------|--|----|--------------|
|LLR3.1|	If the switch is pressed three times, ON all LED's in clockwise manner	|  |	LLR4.1|	If the switch is pressed FOUR times, ON all LED's in anti-clockwise manner|

## 3.ARCHITECTURE

# 3.1.STRUCTURAL DIAGRAM

## 3.1.1.HIGH LEVEL STRUCTURAL DIAGRAM
![HIGHLEVEL](https://github.com/sowmyavnaik/M3_Group18/blob/main/Remote_Keyless_Entry/2_Architecture/M3-SDHL.drawio.png)

## 3.1.2.LOW LEVEL STRUCTURAL DIAGRAM
![LOWLEVEL](https://github.com/sowmyavnaik/M3_Group18/blob/main/Remote_Keyless_Entry/2_Architecture/M3-RKESDLL.drawio.png)


# 3.2.BEHAVIORAL DIAGRAM

## 3.2.1.HIGH LEVEL BEHAVIORAL DIAGRAM
![highlevel](https://github.com/sowmyavnaik/M3_Group18/blob/main/Remote_Keyless_Entry/2_Architecture/M3-rkehlbl.drawio.png)

## 3.2.2.LOW LEVEL BEHAVIORAL DIAGRAM
![lowlevel](https://github.com/sowmyavnaik/M3_Group18/blob/main/Remote_Keyless_Entry/2_Architecture/M3-rkellbd.drawio.png)

## 4.TEST PLAN AND OUTPUT
## 4.1.HIGH LEVEL TEST PLAN 

|Test|	Description|	Input|	Expected output|	Actual Output|
|----|-------------|--------|-------------------|--------------|
|01	|lock	|switch pressed once	|shall lock the car|	Shall lock the car|
|02|	unlock|	switch pressed twice|	shall unlock the car	|Shall unlock the car|
|03	|alarm activate / deactivate|	switch pressed three times|	shall activate / deactivate alarm|	shall activate / deactivate alarm|
|04	|approach light|	switch pressed four times|	Shall turn On approach light|	Shall turn On approach light|

## 4.2.LOW LEVEL TEST PLAN

|Test|	Description|	Input|	Expected output|	Actual Output|
|----|-------------|--------|-------------------|--------------|
|01|	lock|	switch pressed once|	shall on all led's |shall on all led's	|
|02|	unlock|	switch pressed twice	|shall off all led's| shall off all led's |
|03|	alarm activate/deactivate| switch pressed three times	|shall on led's once clockwise|shall on led's once clockwise |
|04|	approach light|	switch pressed four times	|shall on led's once anti-clockwise| shall on led's once anti-clockwise|
