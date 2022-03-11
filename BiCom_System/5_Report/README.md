# A BiCom system 

## TABLE OF CONTENTS
* 1.Description
* 2.Features
* 3.Requirements
*   3.1.High level requirements
*   3.2.High level requirements
* 4.SWOT Analysis
* 5.5W's AND 1H
*   5.1.WHat
*   5.2.Who
*   5.3.Where
*   5.4.When
*   5.5.Why
*   5.6.How
* 6.ARCHITECTURE
*   6.1.STRUCTURAL DIAGRAM
*     6.1.1.HIGH LEVEL STRUCTURAL DIAGRAM
*     6.1.2.LOW LEVEL STRUCTURAL DIAGRAM
*   6.2.BEHAVIORAL DIAGRAM
*     6.2.1.HIGH LEVEL BEHAVIORAL DIAGRAM
*     6.2.2.LOW LEVEL BEHAVIORAL DIAGRAM
* 7.TEST PLANS AND OUTPUTS
*   7.1.HIGH LEVEL TEST PLAN
*   7.2.LOW LEVEL TEST PLAN

## 1.Description
* A BiCom systemis the extention of the unidirectional RKE to bidirectional RKE system. 

## 2.Features
* It shall print window status of the car when blue switch is pressed once
* It shall print alarm status of the car when blue switch is pressed twice
* It shall print car battery information when the blue switch is pressed thrice times
* It shall print door status of the car when the blue switch is pressed four times

## 3.Requirements

### 3.1.High level requirements

| ID | Requirements |
|----|--------------|
|HLR1| It shall print window status of the car|
|HLR2|	It shall print alarm status of the car|
|HLR3|	It shall print car battery information|
|HLR4|	It shall door status of the car|

### 3.2.High level requirements

|ID	|Low Level Requirements for HLR1	|  |ID|	Low Level Requirements for HLR2|
|----|--------------------------------|--|----|--------------|
|LLR1.1|	If the switch is pressed once, ON all LED's| |	LLR2.1	|If the switch is pressed twice, OFF LED's|

|ID|	Low Level Requirements for HLR3|	|ID	|Low Level Requirements for HLR4|
|----|-------------------------------|--|----|--------------|
|LLR3.1|	If the switch is pressed three times, ON all LED's in clockwise manner	|  |	LLR4.1|	If the switch is pressed FOUR times, ON all LED's in anti-clockwise manner|

# 4.SWOT Analysis

![cccccccc](https://user-images.githubusercontent.com/46950972/157836003-40a6c505-2664-4091-9a9f-f4c7c78e4f23.png)

# 5. 5W's AND 1H

## 5.1.WHat
- URemote wireless key for car/Automotives.

## 5.2.Who 
- User Who wants to know status Remotely.

## 5.3.Where
- When user is away/inside the car.

## 5.4.When 
- To know status of window , alarm, battery ,door.

## 5.5.Why 
- To know the status of features of the car.

## 5.6.How
- Using switch by blinking the LEDis to know status of window, battery alarm,door.

# 6.ARCHITECTURE
## 6.1.STRUCTURAL DIAGRAM

## 6.1.1.HIGH LEVEL STRUCTURAL DIAGRAM
![HIGHLEVEL](https://github.com/sowmyavnaik/M3_Group18/blob/main/BiCom_System/2_Archietecture/M3-SDHL.drawio.png)

## 6.1.2.LOW LEVEL STRUCTURAL DIAGRAM
![LOWLEVEL](https://github.com/sowmyavnaik/M3_Group18/blob/main/BiCom_System/2_Archietecture/M3-SDLLBI.drawio.png)

## 6.2.BEHAVIORAL DIAGRAM

## 6.2.1.HIGH LEVEL BEHAVIORAL DIAGRAM
![HIGHLEVEL](https://github.com/sowmyavnaik/M3_Group18/blob/main/BiCom_System/2_Archietecture/M3-hlbd.drawio.png)

## 6.2.2.LOW LEVEL BEHAVIORAL DIAGRAM
![LOWLEVEL](https://github.com/sowmyavnaik/M3_Group18/blob/main/BiCom_System/2_Archietecture/M3-llbd.drawio.png)

# 7.TEST PLANS AND OUTPUTS
## 7.1.HIGH LEVEL TEST PLAN 

|Test|	Description|	Input|	Expected output|	Actual Output|
|----|-------------|--------|-------------------|--------------|
|01	|Window Status	|switch pressed once	| shall print window status of the car|	shall print window status of the car|
|02|	Alarm Status|	switch pressed twice|	shall print alarm status of the car|shall print alarm status of the car|
|03	|Car Battery Info|	switch pressed three times|	shall print car battery information|	shall print car battery information|
|04	|Door status|	switch pressed four times|	shall door status of the car|	shall door status of the car|

## 7.2.LOW LEVEL TEST PLAN

|Test|	Description|	Input|	Expected output|	Actual Output|
|----|-------------|--------|-------------------|--------------|
|01|	Window Status|	switch pressed once|	shall on all led's |shall on all led's	|
|02|	Alarm Status|	switch pressed twice	|shall off all led's| shall off all led's |
|03|	Car Battery Info| switch pressed three times	|shall on led's once clockwise|shall on led's once clockwise	|
|04|	Door status|	switch pressed four times	|shall on led's once anti-clockwise| shall on led's once anti-clockwise	|

