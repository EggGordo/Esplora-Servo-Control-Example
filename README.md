#Arduino-Servo-Control-Example

This program uses the Esplora board's slider to move a servo connected to a breadboard. 

I used this [website](http://www.pighixxx.com/test/portfolio-items/esplora/?portfolioID=314#prettyPhoto) to find the specific pin out numbers for the Esplora

#How it Works

The program reads the slider serial ouput at 9600 baud and maps the read out from a range of 0-1023 to 0-180. The program then takes the new mapped read out and sends it to both the serial terminal and to the servo. The servo then moves to the new position.

#What Do I Need?

Libraries [Esplora](https://www.arduino.cc/en/Reference/EsploraLibrary) and [Servo](https://www.arduino.cc/en/Reference/Servo)which can be downloaded through the [Arduino IDE](https://www.arduino.cc/en/Main/Software).

#FAQ

1."Can I use this program for my own program?" 

Yes, you can.

2. "I don't have an Esplora, can I use a different arduino board with this program?"

Without editing, no. You will need to change a lot. Message me if you need help.

3. "Why do you only post projects for the Esplora?"

Theres really not a lot of projects to get started with the Esplora except with the examples provided by the Esplora Library.
