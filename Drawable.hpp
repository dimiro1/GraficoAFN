/*
 *   Copyright (C) 2009 by Claudemiro Alves Feitosa Neto
 *   <dimiro1@gmail.com>
 *   Modified: <2009-09-21 01:19:01 BRT>
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

#ifndef _DRAWABLE_H_
#define _DRAWABLE_H_

#include <iostream>
#include <GL/glut.h>
#include "Color.hpp"

class Event {
public:
  virtual void onClick () = 0;
};

struct Point {
private:
  int x, y;

public:
  Point (const int _x, const int _y)
    : x (_x), y (_y) {}

  int getX () const { return x; }
  int getY () const { return y; }

  Point operator+(const Point &_point) const;
  Point operator-(const Point &_point) const;
  bool operator==(const Point &_point) const;
};

struct Rect {
  friend class Drawable;
private:
  int x, y;
  int w, h;

public:
  Color *color;
  Rect () {}
 
  Rect (int _x, int _y, int _w, int _h)
    : x (_x), y (_y), w (_w), h (_h) { color = new Color (0, 0, 0); }

  Rect (int _x, int _y, int _w, int _h, Color *_color)
    : x (_x), y (_y), w (_w), h (_h), color (_color) {}
 
  int getX () const { return x; }
  int getY () const { return y; }
  int getW () const { return w; }
  int getH () const { return h; }

  Point topRight () const { return Point (x + w, y); }
  Point topLeft () const { return Point (x, y); }
  Point bottomRight () const { return Point (x + w, y + h); }
  Point bottomLeft () const { return Point (x, y + h); }

  void move (const int _x, const int _y);
  void setColor (Color *_color) { color = _color; }
  void setColor (const int _r, const int _g, const int _b) { color = new Color (_r, _g, _b); }
};

class Drawable : public Event {
protected:
  Rect *rect;

public:
  bool isMoving;
  Drawable (Rect *_rect) : rect (_rect), isMoving (false) {}
  Drawable (int _x, int _y, int _w, int _h);
  Drawable (int _x, int _y, int _w, int _h, Color *_color);

  virtual void draw () = 0;
  virtual void onClick () = 0;
  void move (const int _x, const int _y);

  bool isInside (const int _x, const int _y) const;
  bool isInside (const Point *_point) const;
  void setMoving (bool _state) { isMoving = _state; }
};

#endif /* _DRAWABLE_H_ */
