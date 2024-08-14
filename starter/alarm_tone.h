#ifndef ALARM_TONE_H
#define ALARM_TONE_H

class AlarmTone {
  public:
    AlarmTone();
    void init(uint8_t pin);
    void play();
    void stop();

  private:
    uint8_t _pin;
    bool _playing;
    uint8_t _tone_index;
    unsigned long _last_tone_time;
};

#endif
