#ifndef RGB_CONTROL_H
#define RGB_CONTROL_H

#include "Arduino.h"

class rgbObj {
private:
    int _rpin, _gpin, _bpin;
    int _n; // Instance identifier or LED ID
    int _rVal, _gVal, _bVal; // Stored state

public:
    rgbObj(int rpin, int gpin, int bpin, int n = 0);
    
    void setColor(int rVal, int gVal, int bVal);
    void setYellow(int rVal = 255, int gVal = 255);
    void getColor(int &r, int &g, int &b);
    void setON();
    void setOFF();
    void printRGB();
};

#endif