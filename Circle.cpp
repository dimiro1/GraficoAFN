/*
 *   Copyright (C) 2009 by Claudemiro Alves Feitosa Neto
 *   <dimiro1@gmail.com>
 *   Modified: <2009-09-20 19:53:37 BRT>
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

#include "Circle.hpp"

void Circle::onClick ()
{
  std::cout << "Circle Clicked" << std::endl;
}

void Circle::draw ()
{
  float angle;
  glColor3f (rect->color->r, rect->color->g, rect->color->b);
  glBegin (GL_POLYGON);
  for (angle = 0; angle < (2 * M_PI); angle += M_PI/20)
    glVertex3f (rect->getX () + radius + (radius * cos (angle)), rect->getY () + radius + (radius * sin (angle)), 0);
  glEnd ();
}
