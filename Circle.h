//******************************************************************************
// File name:  Circle.h
// Author:     Computer Science, Pacific University
// Date:       3/23/18
// Class:      CS250
// Assignment: SDL Simple Circle
// Purpose:    Specify the Circle interface for displaying a fixed circle on
//             the screen.
//******************************************************************************
#pragma once
#include "SDLManager.h"
#include "Color.h"

class Circle
{
public:
  Circle (int xCenter = 10, int yCenter = 10, int radius = 10,
    const Color &rcColor = Color::getColor (Color::BLACK));
  Circle (const Circle &rcCircle);
  void setX(int x);
  int getX() const;
  void setY(int y);
  int getY() const;
  void setRadius(int r);
  int getRadius() const;
  void draw (SDLManager &rcManager) const;
  bool collision (const Circle &cOtherCircle) const;
  friend std::istream &operator>>  (std::istream &rcInStream,
    Circle &rcCircle);

protected:
  int mXCenter, mYCenter, mRadius;
  Color mcColor;
};