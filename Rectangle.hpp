/*
 *   Copyright (C) 2009 by Claudemiro Alves Feitosa Neto
 *   <dimiro1@gmail.com>
 *   Modified: <2009-09-24 22:04:17 BRT>
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

#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include <GL/glut.h>
#include <cmath>
#include <iostream>

#include "Drawable.hpp"

class Rectangle : public Drawable {
public:
  Rectangle (Rect *_rect)
    : Drawable (_rect) {}

  Rectangle (int _x, int _y, int _w, int _h)
    : Drawable (_x, _y, _w, _h) {}

  Rectangle (int _x, int _y, int _w, int _h, Color *_color)
    : Drawable (_x, _y, _w, _h, _color) {}

  void draw ();
  void onClick (const int _x, const int _y);
  void onMove (const int _x, const int _y);
};


#endif /* _RECTANGLE_H_ */
