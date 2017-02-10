#include "Arduino.h"
#include "Adafruit_GFX.h"
#include "RGBmatrixPanel.h"


#ifndef PTD_sort_h
#define PTD_sort_h

class PTD_sort
{
  public:
    PTD_sort();
    void line1(String text_1,int color_1);
    void line2(String text_2,int color_2);
    void line3(String text_3,int color_3);
    void line4(String text_4,int color_4);

  private:
    int blue[2];
    int red[2];
    int green[2];
    int purple[2];
    int white[2];
    int black[2];
};

#endif
