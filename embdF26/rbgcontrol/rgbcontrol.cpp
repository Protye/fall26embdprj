#include "rgbcontrol.h"

// Constructor implementation
rgbObj::rgbObj(int rpin, int gpin, int bpin, int n)
{
    _rpin = rpin;
    _gpin = gpin;
    _bpin = bpin;
    _n = n;

    // Default current values to 0
    _rVal = 0;
    _gVal = 0;
    _bVal = 0;

    pinMode(_rpin, OUTPUT);
    pinMode(_gpin, OUTPUT);
    pinMode(_bpin, OUTPUT);
}

// Set RGB color using PWM (0-255)
void rgbObj::setColor(int rVal, int gVal, int bVal)
{
    _rVal = rVal;
    _gVal = gVal;
    _bVal = bVal;

    analogWrite(_rpin, _rVal);
    analogWrite(_gpin, _gVal);
    analogWrite(_bpin, _bVal);
}

// Convenience method for yellow (Red + Green mix)
void rgbObj::setYellow(int rVal, int gVal)
{
    setColor(rVal, gVal, 0);
}

// Get the current color values stored in state
void rgbObj::getColor(int &r, int &g, int &b)
{
    r = _rVal;
    g = _gVal;
    b = _bVal;
}

// Turn LED fully ON (white light, full brightness)
void rgbObj::setON()
{
    setColor(255, 255, 255);
}

// Turn LED fully OFF
void rgbObj::setOFF()
{
    setColor(0, 0, 0);
}

void rgbObj::printRGB()
{
    Serial.print("Current RGB: R=");
    Serial.print(_rVal);
    Serial.print(" G=");
    Serial.print(_gVal);
    Serial.print(" B=");
    Serial.println(_bVal);
}