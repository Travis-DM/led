#ifndef _LED_H_
#define _LED_H_

#include <WS2812Serial.h>

bool ledEN0(void);
bool ledEN1(void);
bool ledEN2(void);
bool ledEN3(void);


#define numled 64
#define ledpin 17



void setLED(int x,int color);
class LED
{
private:
    bool enabled;
    int lpin;
    uint8_t pID;
    uint8_t ledCount;

public:
    LED(/* args */);
    ~LED();
    void Setup(int s_pin, uint8_t s_pID, uint8_t mode, uint8_t s_ledCount, uint8_t red, uint8_t blue, uint8_t green);
    void setLEDs(int color);
    void setLEDs(uint8_t red, uint8_t blue, uint8_t green);
    void setLED(uint8_t red, uint8_t blue, uint8_t green);
};

LED led0();
LED led1();
LED led2();

#endif