<h1 align="center">
<br>
<img width="700" alt="owl" src="images/renders/front\\\_angle.png" />
<br>
Owl
<br>
</h1>

<h3 align="center">

A compact STM32F072 dev board with USB-C :D

</h3>

<div align="center">
  <img width="420" alt="back" src="images/art/back\\\_art\\\_gold.png" />
  <img width="280" alt="zine" src="images/renders/zine.png" />
</div>

Owl is my own STM32 dev board, kinda like a blue pill but with USB-C and made by me. It uses the STM32F072CBT6 which has native USB, so you can plug it in and flash it over USB using the built in bootloader, no programmer needed. Every usable pin goes out to the two long headers on the sides.

The PCB is 4 layers, 72 x 30.48 mm, black with gold pads, and it has some art on the back cause a plain back is boring.

The whole design process is in [JOURNAL.md](JOURNAL.md), it took me around 29 hours.

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
|<img width="450" alt="usb c" src="images/usb\\\_c\\\_esd.png" />|<img width="450" alt="power" src="images/power\\\_supply.png" />|

|Decoupling, crystal, reset and boot|SWD|
|-|-|
|<img width="400" alt="decoupling" src="images/decoupling\\\_crystal\\\_reset.png" />|<img width="450" alt="swd" src="images/swd\\\_debug.png" />|

## PCB

|Routed|Ground pour|
|-|-|
|<img width="450" alt="routed" src="images/routed\\\_board.png" />|<img width="450" alt="pour" src="images/final\\\_pour.png" />|

The STM32 is rotated 45 degrees so the traces fan out to the headers easier. The decoupling caps and crystal sit right next to the chip and there are 99 vias stitching the grounds together.

## Art

<img width="600" alt="back art" src="images/art/back\\\_art.png" />

The back has "Owl" and "made by Shadow" in cursive with a little line drawing with flowers in the middle.

## Why was it made?

I wanted a dev board that's actually mine, with USB-C and all the pins broken out, instead of buying another blue pill. And designing a 4 layer board around an STM32 seemed like a fun way to learn :D

## BOM

|Item|Qty|Price ($)|Vendor|
|-|-|-|-|
|PCBA (4 layer PCB + assembly)|1|43.60|JLCPCB|
|Shipping|1|8.19|JLCPCB|
|Total||51.79||



