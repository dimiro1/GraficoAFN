/*
 *   Copyright (C) 2009 by Claudemiro Alves Feitosa Neto
 *   <dimiro1@gmail.com>
 *   Modified: <2009-09-20 19:51:18 BRT>
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program. If not, see <http://www.gnu.org/licences>
 */

#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include <GL/glut.h>
#include <cmath>
#include <iostream>

#include "Drawable.hpp"

class Circle : public Drawable {
private:
  int radius;
public:
  Circle (int _radius, Rect *_rect)
    : Drawable (_rect), radius (_radius) {}

  Circle (int _radius, int _x, int _y)
    : Drawable (_x, _y, 2 * _radius, 2 * _radius), radius (_radius) {}

  Circle (int _radius, int _x, int _y, Color *_color)
    : Drawable (_x, _y, 2 * _radius, 2 * _radius, _color), radius (_radius) {}


  void draw ();
  void onClick ();
};

#endif /* _CIRCLE_H_ */
