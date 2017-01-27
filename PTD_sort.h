#include "Arduino.h"
#include "Adafruit_GFX.h"
#include "RGBmatrixPanel.h"


#ifndef PTD_sort_h
#define PTD_sort_h

class PTD_sort
{
  public:
    PTD_sort();
    void line1(text_1,color_1);
    void line2(text_2,color_2);
    void line3(text_3,color_3);
    void line4(text_4,color_4);

  private:
    int blue;
    int red;
    int green;
    int purple;
    int white;
    int black;
};

#endif
