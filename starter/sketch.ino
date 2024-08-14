#include "clock.h"

// Hardware pins for buttons, alarm switch and buzzer pin
#define MENU_PIN   16
#define PLUS_PIN   4
#define MINUS_PIN  2
#define OK_PIN     0
#define ALARM_PIN  15
#define BUZZER_PIN 12

TM1637 display(5, 18);
Clock clk;

// ISRs for buttons
static void button_menu_pressed(void)
{
  // Tell clock menu was pressed
  clk.button_pressed(BUTTON_MENU);
}

static void button_ok_pressed(void)
{
  // Tell clock ok was pressed
  clk.button_pressed(BUTTON_OK);
}

static void button_plus_pressed(void)
{
  // Tell clock plus was pressed
  clk.button_pressed(BUTTON_PLUS);
}

static void button_minus_pressed(void)
{
  // Tell clock minus was pressed
  clk.button_pressed(BUTTON_MINUS);
}

static void alarm_status_changed(void)
{
  // Tell clock alarm changed
  clk.turn_alarm(digitalRead(ALARM_PIN));
}

void setup() {
  
  // Configure buttons as inputs with pull-up
  pinMode(MENU_PIN, INPUT_PULLUP);
  pinMode(PLUS_PIN, INPUT_PULLUP);
  pinMode(MINUS_PIN, INPUT_PULLUP);
  pinMode(OK_PIN, INPUT_PULLUP);
  pinMode(ALARM_PIN, INPUT_PULLUP);

  // Attach interrupt for the buttons
  attachInterrupt(digitalPinToInterrupt(MENU_PIN), button_menu_pressed, FALLING);
  attachInterrupt(digitalPinToInterrupt(OK_PIN), button_ok_pressed, FALLING);
  attachInterrupt(digitalPinToInterrupt(ALARM_PIN), alarm_status_changed, CHANGE);
  attachInterrupt(digitalPinToInterrupt(PLUS_PIN), button_plus_pressed, FALLING);
  attachInterrupt(digitalPinToInterrupt(MINUS_PIN), button_minus_pressed, FALLING);

  display.init();
  display.set(BRIGHT_TYPICAL);
  
  // Clock class init
  clk.init(&display, BUZZER_PIN);
  clk.turn_alarm(digitalRead(ALARM_PIN));
  /* Uncomment the following lines to set the time 
     and alarm for testing, it will set it to 23:02:55 
     with alarm at 23:03. Remember to enable the alarm
     using the slide switch
  */
  // clk.set_time(23, 02, 55);  
  // clk.set_alarm(23, 03);
  
  // Start the clock
  clk.run();
}

void loop() {
  // Delay to help with simulation running
  delay(100);
}
