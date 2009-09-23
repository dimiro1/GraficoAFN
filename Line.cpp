/*
 *   Copyright (C) 2009 by Claudemiro Alves Feitosa Neto
 *   <dimiro1@gmail.com>
 *   Modified: <2009-09-21 00:20:47 BRT>
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

#include "Line.hpp"

/* bool Line::isInside (const int _x, const int _y) */
/* { */
/*   if (_x == x) */
/*       return y == _y && x >= _x && x <= _x + _w; */
/*    else if (_y == _y2) */
/*       return x == _x && y >= _y && y <= _y + _h; */
 
/*    float k = ((float)(_y - _y2) / (float)(_x - _x2)); */
/*    float t = ((float)(_x2 * _y - _x * _y2) / (float)(_x2 - _x)); */
 
/*    float sol = k * (float)x + t; */
/*    return sol > y - 0.7 && sol < y + 0.7 && */
/* 	 x >= _x && */
/* 	 y >= _y && */
/* 	 x <= _x2 && */
/* 	 y <= _y2; */
/* } */

void Line::draw ()
{
  glColor3f (rect->color->r, rect->color->g, rect->color->b);
  glBegin (GL_LINES);
    glVertex3f (rect->getX (), rect->getY (), 0);
    glVertex3f (rect->topRight ().getX (), rect->topRight ().getY (), 0);
  glEnd ();
}
