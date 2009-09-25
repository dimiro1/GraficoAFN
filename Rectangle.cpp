/*
 *   Copyright (C) 2009 by Claudemiro Alves Feitosa Neto
 *   <dimiro1@gmail.com>
 *   Modified: <2009-09-24 22:04:23 BRT>
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

#include "Rectangle.hpp"

void Rectangle::onClick (const int _x, const int _y)
{
  std::cout << "Rectangle Clicked" << std::endl;
}

void Rectangle::onMove (const int _x, const int _y)
{
  move (_x, _y);
}

void Rectangle::draw ()
{
  glColor3f (rect->color->r, rect->color->g, rect->color->b);
  glBegin (GL_QUADS);
    glVertex3f (rect->topLeft ().getX (), rect->topLeft ().getY (), 0);
    glVertex3f (rect->topRight ().getX (), rect->topRight ().getY (), 0);
    glVertex3f (rect->bottomRight ().getX (), rect->bottomRight ().getY (), 0);
    glVertex3f (rect->bottomLeft ().getX (), rect->bottomLeft ().getY (), 0);
  glEnd ();
}

