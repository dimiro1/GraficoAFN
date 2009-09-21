/*
 *   Copyright (C) 2009 by Claudemiro Alves Feitosa Neto
 *   <dimiro1@gmail.com>
 *   Modified: <2009-09-20 21:12:29 BRT>
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

#include "Drawable.hpp"

Point Point::operator+(const Point &op) const
{
   return Point (x + op.x, y + op.y);
}
 
Point Point::operator-(const Point &op) const
{
   return Point (x - op.x, y - op.y);
}
 
bool Point::operator==(const Point &op) const
{
   return x == op.x && y == op.y;
}

void Rect::move (const int _x, const int _y)
{
  x = _x - w/2;
  y = _y - h/2;
}

Drawable::Drawable (int _x, int _y, int _w, int _h) : isMoving (false)
{ 
  rect = new Rect (_x, _y, _w, _h);
}

Drawable::Drawable (int _x, int _y, int _w, int _h, Color *_color) : isMoving (false)
{ 
  rect = new Rect (_x, _y, _w, _h, _color);
}

bool Drawable::isInside (const int _x, const int _y) const
{
  int x1 = rect->x;
  int x2 = rect->x + rect->w;
  int y1 = rect->y;
  int y2 = rect->y + rect->h;
 
  /* std::cout << "x1: " << x1 << " x2: " << x2 << " y1: " << y1 << " y2: " << y2 << std::endl; */
  /* std::cout << "x: " << _x << " y: " << _y << std::endl; */
  if (_x >= x1 &&
      _x <= x2 &&
      _y >= y1 &&
      _y <= y2)
    return true;
  return false;
}

bool Drawable::isInside (const Point *_point) const
{
  return isInside (_point->getX (), _point->getY ());
}

void Drawable::move (const int _x, const int _y)
{
  /* std::cout << "x: " << _x << " y: " << _y << std::endl; */
  rect->move (_x, _y);
}
