# **Blink with Interrupt using TimeBase0 on Holtek BS66F350C**

This project demonstrates a simple LED blink using the TimeBase0 interrupt on the Holtek BS66F350C microcontroller. The TimeBase0 module generates periodic interrupts, allowing the program to toggle an LED at a specified interval without blocking other tasks.

## **Table of Contents**
- [Overview](#overview)
- [Features](#features)
- [Hardware Requirements](#hardware-requirements)
- [Software Requirements](#software-requirements)
- [Setup](#setup)
- [Code Explanation](#code-explanation)
- [Usage](#usage)
- [Adjusting Blink Rate](#adjusting-blink-rate)

### **Overview**
The BS66F350C is an 8-bit microcontroller from Holtek, which supports features like TimeBase0. This project uses TimeBase0 to set up periodic interrupts, where each interrupt toggles an LED, creating a simple blink effect.

### **Features**
- **Non-blocking LED blink**: Uses interrupts to toggle an LED, allowing other processes to run concurrently.
- **Adjustable blink rate**: The blink frequency can be adjusted by modifying the TimeBase0 settings.

### **Hardware Requirements**
- **Holtek BS66F350C MCU**
- **LED and resistor**: An LED connected to an I/O pin with a current-limiting resistor.

### **Software Requirements**
- **Holtek HT-IDE3000**: Recommended IDE for developing on Holtek microcontrollers.
- **BS66F350C Support Library**: To provide register definitions and setup functions.
- **Programmer**: HT-ICP V.8 for programming the BS66F350C chip.

### **Setup**
1. Connect the LED with a resistor to a digital output pin on the BS66F350C (e.g., P0.0).
2. Configure TimeBase0 for the desired interval (e.g., 500 ms).
3. Enable TimeBase0 interrupt and set the appropriate priority.
4. In the interrupt service routine, toggle the LED state.

### **Code Explanation**
#### **Initialization**
The initialization code sets up TimeBase0 with the desired time interval. Here’s a simplified overview:
- **Clock Configuration**: Set the system clock as needed.
- **Pin Configuration**: Configure the LED pin as an output.
- **TimeBase0 Setup**:
  - Set the period to achieve the desired blink rate.
  - Enable TimeBase0 interrupt.

#### **Interrupt Service Routine**
The TimeBase0 ISR toggles the LED each time it is called, generating a blink effect at the set interval.

#### **Main Loop**
The main loop typically remains empty, as the LED blink operation is entirely handled by the interrupt.

### **Usage**
1. Compile and upload the code to the BS66F350C microcontroller.
2. Power the circuit. The LED should blink at the interval defined by TimeBase0.

### **Adjusting Blink Rate**
To change the blink rate, modify the TimeBase0 interval in the code and recompile.
