<h1 align="center">
<br>
Owl
<br>
</h1>

<h3 align="center">

A compact STM32F072 dev board with USB-C :D

</h3>

<div align="center">
  
  <img width="280" alt="zine" src="images/renders/zine.png" />
</div>

Owl is my own STM32 dev board, kinda like a blue pill but with USB-C and made by me. It uses the STM32F072CBT6 which has native USB, so you can plug it in and flash it over USB using the built in bootloader, no programmer needed. Every usable pin goes out to the two long headers on the sides.

The PCB is 4 layers, 72 x 30.48 mm, black with gold pads, and it has some art on the back cause a plain back is boring.


## Features

* STM32F072CBT6, 48 MHz Cortex-M0, 128kb flash, native USB
* USB-C with 5.1k CC resistors, USBLC6 ESD protection and a 500mA fuse
* AMS1117 3.3V regulator
* 8 MHz crystal
* Reset and BOOT0 buttons, hold BOOT0 and press reset to get into the USB bootloader
* Blue user LED on PA5 and a green power LED
* 10 pin Cortex debug header and a 5 pin 2.54mm SWD header for cheap ST-Link clones
* Two 20 pin headers with every PA, PB and PC13-15 pin
* Ground plane on inner 1 and a 3.3V plane on inner 2



PA11 and PA12 are the USB data lines and PA13 / PA14 are SWDIO and SWCLK, so try not to use those for other stuff.

## Schematic

|USB-C|Power|
|-|-|
|<img width="450" alt="usb c" src="images/usb_c_esd.png" />|<img width="450" alt="power" src="images/power_supply.png" />|

|Decoupling, crystal, reset and boot|SWD|
|-|-|
|<img width="400" alt="decoupling" src="images/decoupling_crystal_reset.png" />|<img width="450" alt="swd" src="images/swd_debug.png" />|

## PCB

|Routed|Ground pour|
|-|-|
|<img width="450" alt="routed" src="images/routed_board.png" />|<img width="450" alt="pour" src="images/final_pour.png" />|

The STM32 is rotated 45 degrees so the traces fan out to the headers easier. The decoupling caps and crystal sit right next to the chip and there are 99 vias stitching the grounds together.

## Art

<img width="600" alt="back art" src="images/art/back_art.png" />

The back has "Owl" and "made by Shadow" in cursive with a little line drawing with flowers in the middle.

## Why was it made?

I wanted a dev board that's actually mine, with USB-C and all the pins broken out, instead of buying another blue pill. And designing a 4 layer board around an STM32 seemed like a fun way to learn :D

## BOM

|Item|Qty|Price ($)|Vendor|
|-|-|-|-|
|PCBA (4 layer PCB + assembly)|1|43.60|JLCPCB|
|Shipping|1|8.19|JLCPCB|
|Total||51.79||


Here is the full LCSC BOM of individual parts generated from KiCAD 

|Designator         |Footprint                                              |Quantity|Value                      |LCSC Part #|
|-------------------|-------------------------------------------------------|--------|---------------------------|-----------|
|C1                 |0805                                                   |1       |10uF                       |           |
|C10                |0603                                                   |1       |1uF                        |           |
|C11                |0603                                                   |1       |10nF                       |           |
|C12, C13           |0603                                                   |2       |10pF                       |           |
|C14, C4, C5, C6, C8|0603                                                   |5       |100nF                      |           |
|C2                 |CP_EIA-3528-21_Kemet-B                                 |1       |22uF Tant.                 |           |
|C7, C9             |0805                                                   |2       |4.7uF                      |           |
|D1                 |0603                                                   |1       |Green                      |           |
|D2                 |0603                                                   |1       |Blue                       |           |
|F1                 |1206                                                   |1       |500mA                      |           |
|FB1                |0603                                                   |1       |600R@100MHz                |           |
|J1                 |USB_C_Receptacle_GCT_USB4105-xx-A_16P_TopMnt_Horizontal|1       |USB_C_Receptacle_USB2.0_16P|           |
|J2                 |PinHeader_2x05_P1.27mm_Vertical_SMD                    |1       |Cortex Debug 10-pin        |           |
|J3                 |PinHeader_1x20_P2.54mm_Vertical                        |1       |Header PA                  |           |
|J4                 |PinHeader_1x20_P2.54mm_Vertical                        |1       |Header PB/PC               |           |
|J5                 |PinHeader_1x05_P2.54mm_Vertical                        |1       |SWD 2.54mm                 |           |
|R1, R2             |0603                                                   |2       |5.1k                       |           |
|R3, R4             |0603                                                   |2       |1k                         |           |
|R5                 |0603                                                   |1       |10k                        |           |
|SW1                |SW_SPST_TL3342                                         |1       |RESET                      |           |
|SW2                |SW_SPST_TL3342                                         |1       |BOOT0                      |           |
|U1                 |LQFP-48_7x7mm_P0.5mm                                   |1       |STM32F072CBTx              |           |
|U2                 |SOT-23-6                                               |1       |USBLC6-2SC6                |           |
|U3                 |SOT-223-3_TabPin2                                      |1       |AMS1117-3.3                |           |
|Y1                 |Crystal_SMD_3225-4Pin_3.2x2.5mm                        |1       |8MHz CL=10pF               |           |

