
#include "clock.h"
#include "stdio.h"

// Static function: Update time, show things on display
//                  and check alarm trigger
static void update_time(void* clock)
{
}

// Empty constructor
Clock::Clock() {}

// Clock::init(): Initialize internal variables,
//                set display to use and buzzer pin
void Clock::init(TM1637* display, uint8_t buzzer_pin)
{ 
}

// Clock::set_time(): Set the time hour, minutes and seconds
//                    to internal binary representation
void Clock::set_time(uint8_t hour, uint8_t minutes, uint8_t seconds)
{
}

// Clock::set_alarm(): Set the alarm hour, minutes and seconds
//                     to internal binary representation
void Clock::set_alarm(uint8_t hour, uint8_t minutes)
{
}

// Clock::menu_pressed(): Tell the internal clock that a button was pressed
//                        type: The button that was pressed
void Clock::button_pressed(ButtonType type) 
{
}

// Clock::turn_alarm(): Enable or disable alarm
void Clock::turn_alarm(bool on_off)
{
}

// Clock::show(): Show time or menu on display
void Clock::show()
{
}

// Clock::check_alarm(): Check if alarm needs to be triggered
void Clock::check_alarm()
{
}

// Clock::run(): Start running the clock
//               This function MUST not block, everything should be handled
//               by interrupts
void Clock::run()
{
}
