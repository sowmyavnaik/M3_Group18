# Remote keyless entry (RKE) 

## Description
* Remote keyless entry (RKE) system is a system designed to remotely lock or unlock access to automobiles. It requires two components - a transmitter and a receiver. RKE operates by broadcasting radio waves on a particular frequency unidirectionally. RKE systems implement encryption and rolling code algorithms to prevent car thieves from intercepting and spoofing the telegrams. 

## Features
* It shall print Lock the car when blue switch is pressed once
* It shall print Unlock the car when blue switch is pressed twice
* It shall print activation/deactivation alarm when the blue switch is pressed thrice times
* It shall print approach light when the blue switch is pressed four times

## Requirements

### High level requirements

| ID | High Level Requirements |
|----|--------------|
|HLR1| It shall lock the car|
|HLR2|	It shall unlock THE CAR|
|HLR3|	It shall activate / deactivate the alarm|
|HLR4|	It shall approach light|

### High level requirements

|ID	|Low Level Requirements for HLR1	| |	ID|	Low Level Requirements for HLR2|
|----|--------------|----||----|--------------|
|LLR1.1|	If the switch is pressed once, ON all LED's| |	LLR2.1	|If the switch is pressed twice, OFF LED's|

|ID|	Low Level Requirements for HLR3|		|ID	|Low Level Requirements for HLR4|
|----|--------------|----||----|--------------|
|LLR3.1|	If the switch is pressed three times, ON all LED's in clockwise manner	|  |	LLR4.1|	If the switch is pressed FOUR times, ON all LED's in anti-clockwise manner|
