#include "Arduino.h"
#include "PTD_sort.h"
#include "RGBmatrixPanel.h"
#include "Adafruit_GFX.h"

blue = {0,0,7}
white = {7,7,7}
red = {7,0,0}
green = {0,7,7}
purple = {7,0,7}
black = {0,0,0}



PTD_sort::PTD_sort(void)
{
  cout << "Object is being created" << endl;
}

void PTD_sort::line1(text_1,color_1)
{
matrix.setCursor(2, 0);
matrix.setTextColor(matrix.Color333(color_1));
matrix.println(text_1);
}

void PTD_sort::line2(text_2,color_2)
{
  matrix.setCursor(2, 8);
  matrix.setTextColor(matrix.Color333(color_2));
  matrix.println(text_2);
}

void PTD_sort::line3(text_3,color_3)
{
  matrix.setCursor(2, 16);
  matrix.setTextColor(matrix.Color333(color_3));
  matrix.println(text_3);
}

void PTD_sort::line4(text_4,color_4)
{
  matrix.setCursor(2, 24);
  matrix.setTextColor(matrix.Color333(color_4));
  matrix.println(text_4);
}
