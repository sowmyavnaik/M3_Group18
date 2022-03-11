# A BiCom system 

## Description
* A BiCom systemis the extention of the unidirectional RKE to bidirectional RKE system. 

## Features
* It shall print window status of the car when blue switch is pressed once
* It shall print alarm status of the car when blue switch is pressed twice
* It shall print car battery information when the blue switch is pressed thrice times
* It shall print door status of the car when the blue switch is pressed four times

## Requirements

### High level requirements

| ID | Requirements |
|----|--------------|
|HLR1| It shall print window status of the car|
|HLR2|	It shall print alarm status of the car|
|HLR3|	It shall print car battery information|
|HLR4|	It shall door status of the car|

### High level requirements

|ID	|Low Level Requirements for HLR1	|  |ID|	Low Level Requirements for HLR2|
|----|--------------------------------|--|----|--------------|
|LLR1.1|	If the switch is pressed once, ON all LED's| |	LLR2.1	|If the switch is pressed twice, OFF LED's|

|ID|	Low Level Requirements for HLR3|	|ID	|Low Level Requirements for HLR4|
|----|-------------------------------|--|----|--------------|
|LLR3.1|	If the switch is pressed three times, ON all LED's in clockwise manner	|  |	LLR4.1|	If the switch is pressed FOUR times, ON all LED's in anti-clockwise manner|

