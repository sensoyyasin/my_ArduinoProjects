## ArduinoProjects
Applications I tried and made while trying to learn arduino.

- Jumper wires (generic)
- Arduino UNO	
- LED (generic)
- C&K Switches PTS 645 Series Switch
- Buzzer, 5V-12V, 12mm

# Arduino Uno 
Arduino UNO is a low-cost, flexible, and easy-to-use programmable open-source microcontroller board that can be integrated into a variety of electronic projects.
It has 14 digital input/output pins (of which 6 can be used as PWM outputs), 6 analog inputs, a 16 MHz ceramic resonator (CSTCE16M0V53-R0), a USB connection, a power jack, an ICSP header and a reset button. It has 32 KB FLASH program memory, 2KB SRAM memory and 1KB internal EEPROM memory.

A buzzer or beeper is an audio signaling device, which may be mechanical, electromechanical, or piezoelectric. Typical uses of buzzers and beepers include alarm devices, timers, train and confirmation of user input such as a mouse click or keystroke.

# First
![WhatsApp Image 2022-11-03 at 19 49 00-2](https://user-images.githubusercontent.com/73845925/199784061-34d606ff-793f-4b12-b014-e50cb3c79f45.jpeg)

# Second
One of the buttons captures and records various signals and the other broadcasts this signal.

![WhatsApp Image 2022-11-04 at 18 59 30](https://user-images.githubusercontent.com/73845925/200022322-b7108e50-1118-4d06-8fb3-cbc66d15a6ac.jpeg)

# Third
A circuit that can be adjusted from the oled screen with the joystick.
# I2C Protocol
- Arduino uses some communication protocols to communicate with other Arduino or sensors. One of these protocols is I2C.
- I2C (Inter-Integrated Circuit) is an example of synchronous communication from serial communication types.
- Apart from the ground line, two lines, SDA and SCL, are needed for communication.
- Due to the large number of lines, it is not preferred for long distance communications.
- It is generally used in places where short distance and low data transfer rate are sufficient.

- Besides, two line lines for data, SDA (Serial Data Line) and SCL (Serial Clock). Of these lines, SDA is the line where the devices data system is provided. This even becomes a double data view. The delivered delivered on the line is delivered by the SCL line. In the SCL line, clocks consisting of the master device are formed. 

# 0.96 inch I2C OLED Display - SSD1306

- High Definition: 128*64
- Voltage: 3V ~ 5V DC
- Operating Temperature: -30 to +70C

![WhatsApp Image 2022-11-06 at 13 12 33](https://user-images.githubusercontent.com/73845925/200165480-04f55441-ad90-49da-87dd-61da72603ebc.jpeg)
