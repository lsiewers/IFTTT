# IFTTT
Emotion potmeter, become more conscious of your emotions to feel better.

## Concept
The concept is a box where you can share your feelings. The idea is that it will be on a place where you walk past at least once a day and when you walk past, you update the box to your current emotion. The goal is to become more conscious of your feelings to eventually feel better in general. This is much like meditation which has the same goal, but reached in a different way.

## How it works
My prototype consists out of a wooden box with a screen (screen of my mobile phone (Android) while connected via Bluetooth with an app), 5 LED's in different colors and a potentio meter. Whenever you turn the potmeter, a LED will lighten up and the others are out (depending on the potmeter's position). Every LED belongs to an emotion (with a logical color). Turning the potmeter to the right is setting it happier. Whenever you turn the potmeter, you'll also see on the screen what emotion is selected by color, emoji and text. The screen gives it a more satisfying and clearer look.

## Code
In the Arduino folder you can find the code of how the LED's are turned on/off by turning the potmeter and changing it's value. The value of the potmeter gets also sent to other devices (connected with Bluetooth through a specific app) by this code through the Serial by using pin 1 of the Arduino (TX) and a Bluetooth module like the HC-05. The code is well commented, so you will find your way.

The app is build in a programm called MIT inventor 2, where you can easily setup a bluetooth connection and do fairly simple things with it without too much of struggling with code (like I did).

## Hardware
The hardware consists out a box with holes for the LED's, potentiometer and the screen. I made it out of wooden plates, screws and covered it with white paint. First, draw your concept and estimate the measurements needed for your box (depends on screen size, amount and size of LED's etc.), then cut the wood in and secure the box with screws (so you can also open it later on). Solder the wires for your LED's and button and after that you can fasten them in the holes.

#### More about the project, you can have look at my portfolio site for my school: studenthome.hku.nl/~luuk.siewers (go to portfolio, IFTTT)
