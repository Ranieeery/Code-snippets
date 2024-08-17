# TIE - CEFET

This is a code for my TCC at CEFET-MG. The code is not in the best shape and lacks good practices because I didn't know them at the time, but I keep it here as a record.

The project includes the following functions:

- `setup()`: Initializes the serial communication and the LCD display.

- `loop()`: Main loop that checks the state of the bot variable.

- `conversao()`: Maps and calculates integer and decimal parts for voltage, current and temperature.

- `mostrar_LCD()`: Displays error messages or sensor values on the LCD based on conditions.

- `Ledbuz()`: Controls LEDs and buzzer based on sensor values.

- `desligado()`: Turns off LEDs and buzzer.

- `monitor()`: Sends error messages or normal operation messages to the serial monitor based on sensor values.

- `lcd_serial()`: Displays a message on the LCD and sends a message to the serial monitor when the circuit is deactivated.
