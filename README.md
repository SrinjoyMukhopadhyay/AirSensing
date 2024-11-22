# AirSensing
A short description of the implemented entities and corresponding file.  
Arduino board 
Arduino Uno is a microcontroller board which contains 14 digital I/O pins, 6 analog inputs, a 16 MHz 
ceramic resonator, a USB connector, a power jack, and a reset button.  It is implemented based on 
ATmega328P (datasheet). IT can be powered by 5V DC and USB cable with an AC-DC adapter. Based on 
the implemented code Arduino can do the computation and data processing. 
Ethernet shield  
Ethernet shield we have used is compatible with Arduino board. It can connect to the internet They can 
be connected to internet and work as server or client mode. It can directly plug in to the board without 
any soldering and compatible with Arduino official Ethernet Library. 
MQ 7 
MQ7 sensor is used to detect carbon monoxide (CO) gas in house, vehicle, and industry. We need to 
preheat that for at least 48 hours and has the detecting range between 20ppm-2000ppm carbon 
monoxide. 
Python 3.9 
Python is a software used for automation, data analysis and visualization. This is used for running and 
compiling the code for backend in our project.  
PyCharm IDE 
An integrated development environment is called IDE which combines developer tools into a single 
graphical user interface. Code is written in PyCharm IDE. 
Flask framework  
Flask framework is used for web development tool for back-end programming language along with 
python. 
MySQL database 
For maintaining database and sensor data store MySQL database is used. 
Xampp server  
Xampp server is a php web development environment which has allowed us to create our web application 
using Apache, php and MySql database. 
HTML CSS 
In this project user interface is designed using HTML and CSS. 
Arduino IDE 
It allows us to draw the sketch and upload it to the various Arduino boards using code. The code is written 
in a simple programming language similar to C and C++.
For our project we have worked on Windows 11 Home, Version 22H2 
1. Download the Arduino IDE from the following link https://www.arduino.cc/en/software . We have 
used Arduino IDE 2.0.0. 
2. In the IDE go to File then Open and then select either of our two codes room values.ino or 
Final_kit_to_Mysql.ino from the location you saved the codes. 
3. Then you have to go to Sketch then include library and then install the Adafruit Unified library. 
4. After installing the required library, you can verify the code to check for any errors. 
5. Go to https://www.apachefriends.org/download.html to install the xampp server. We have used 
version 8.1.10.  
6. After installation of Xampp, go to Xampp control panel and start Apache and MySql. 
7. In the xampp folder you installed, open htdocs and create a folder named “testcode”. In that folder 
save the two php files we provided firstcode.php and secondcode.php. 
8. After that, connect the Arduino uno with the PC and Ethernet Shield to a router. 
9. Select the Arduino Uno Board from Tools in the Arduino IDE and the suitable port. 
10.  Then press on upload. 
11. After setup of successful connection you can open the serial monitor to view the collected data and 
the serial plotter to view the plot. 
12. Open a browser and go to localhost. It should open the xampp dashboard. In the URL bar type 
localhost/phpMyAdmin/ which will open the phpMyAdmin. Then click on “new” to create a new 
database called “firstdb” and in that create two tables, “room” and “sensor”.
13. Install Pycharm IDE for python from 
https://www.jetbrains.com/pycharm/download/?source=google&medium=cpc&campaign=1412762510
 9&term=pycharm&gclid=Cj0KCQiAsoycBhC6ARIsAPPbeLsPcIhfaZGxbMuLUSWWi4yhThZ_60JLcA1AfgSk0
 1gZgoyWk7gQ_aUaApq7EALw_wcB#section=windows . Install the community edition. It comes with an 
inbuilt python interpreter, use python 3.9. 
14. Open our “IOTProject” and open terminal in the location of main.py to install required packages 
using the following commands: - “pip install Flask”, “pip install mysql.connector”. 
15. Run main.py and go to http://127.0.0.1:5000 which is default for flask app. 
16. From the from you get, select the room you want to see the carbon monoxide level of.
