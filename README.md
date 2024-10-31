## **Blink with Interrupt using TimeBase0 on Holtek BS66F350C**  <!-- Smaller than H1 -->
This project demonstrates how to use the TimeBase0 interrupt on the Holtek BS66F350C microcontroller to create a non-blocking LED blink. The TimeBase0 module generates periodic interrupts, allowing us to toggle an LED at a specified interval while enabling other tasks to run concurrently.

In this setup, the LED connected to a GPIO pin is toggled within an interrupt service routine (ISR), allowing for efficient timing without delays.
### **Overview**
The BS66F350C is an 8-bit microcontroller from Holtek, featuring a TimeBase0 module useful for timed interrupts. Using TimeBase0 in this project, each interrupt toggles an LED, creating a simple blink effect.
