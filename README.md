# Alarm clock

This project is an alarm clock as described below:

- The clock time starts at 00:00 (developer can set an initial time on code). Alarm start set to 00:00 and the initial alarm enable state will be defined by the slide switch value (on or off).

- Clock immediately starts ticking. The 4 digit seven-segment display has a colon ( : ) in the middle for second counting, the clock should blink this colon once every half second (so one blink period is 1 second). 

- Clock shows in the 4 seven-segment displays the hour and minute in 24h format with zero padding. So 1:24am is 01:24 and 1:24 pm is 13:24.

- Clock have 4 buttons to control and configure time and alarm: MENU, PLUS (+), MINUS (-) and OK. 

- Clicking on the MENU button each time will cycle to a different menu option:
  > SET -> To set up the clock time  
  > AL -> To set up the clock alarm time  
  > (go back to show time) 

- Setting up the time:

    - When the clock is showing the time, click on the MENU button once. (Displays show SET)
    - Click the OK button, the display show the time again, but this time with the HOUR blinking once every second (and the colon steady) to indicate the user can change the hour.
    - Use the +/- buttons to increment/decrement the hour. Click the OK button to set the hour. 
    - Now the minutes blink to indicate the user can change the minutes. 
    - Use the +/- buttons to increment/decrement the minutes. Click the OK button when done.
    - Now the clock show the new configured time (and colon continue blinking again)

- Setting up the alarm:

    - When the clock is showing the time, click on the MENU button once and then once again (display show AL).

    - Click the OK button, two scenarios can happen here:

        - If the alarm switch is in the enable position:

            - The display show the alarm time with the HOUR blinking once every second (and the colon steady) to indicate the user can change the alarm hour.
            - Use the +/- buttons to increment/decrement the hour. Click the OK button to set the hour. 
            Now the minutes blink to indicate the user can change the minutes. 
            - Use the +/- buttons to increment/decrement the minutes. Click the OK button when done.
            - Now the clock go back to show the time and alarm be enabled.

        - If the alarm switch is in the disabled position:
            - The display show Off and after a few seconds it will go back to show the time because the alarm is disabled.

- Triggering alarm:

    At any moment, if the alarm is enabled and the clock time matches the configured alarm time, the buzzer make an alarm sound and the display starts blinking the time once every half second until the user clicks on the OK button which will stop the alarm sound/blink.


## Getting Started

Create a new project in Wokwi (www.wokwi.com), select the ESP32 and Arduino framework:

- Replace the following files content on just created project with the ones in this repository (sketch.ino, diagram.json, libraries.txt)

- Create all the other files on the project (clock.cpp, clock.h, alarm_tone.cpp, alarm_tone.h, tm1637.cpp, tm1637.h) and copy the contents of them.

Now you are ready to start working on the project

## License

[License](LICENSE.txt)
