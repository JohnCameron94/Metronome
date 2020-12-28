# Metronome
Project created in CST8244 - Real Time - Target QNX Neutrino RTOS. 


Metronome is a program that is targeted for QNX Neutrino RTOS.
It uses Inter-Process Communication between a resource manager that handles two paths and a second thread that acts as the controller of the output
using a interval timer to calculate intervals and displays of patterns, stop, pause or quit functionalities. 

Device Path:

First path /dev/local/metronome:

- This is the device path, where the thread needs to read the current state of the 
metronome, that can be updated and changed through POSIX I/O function write. Once the write function is used,
a pulse will be sent to the second thread(client), depending on which type of pulse is sent(stop,pause,set,quit), the interval
timer will be modified. The interval timer is used to set the current beat the user requests and will be displayed in the console
using patterns defined in metronome.h

Second path /dev/local/metronome-help:

- This path will display the "Help page" on how to use the metronome, commands it accepts.
- You cannot write to metronome-help device.

USAGE: 
  - Command Line arguments 
      SET    - echo set <bpm> <time signature> <time signature> - current time patterns can be found in metronome.h tables
      STOP   - echo stop > /dev/local/metronome
      PAUSE  - echo pause <seconds> > /dev/local/metronome
      QUIT   - echo quit > /dev/local/metronome
      READ   - cat /dev/local/metronome-help
       
        
  - RUN metronome_test.sh
