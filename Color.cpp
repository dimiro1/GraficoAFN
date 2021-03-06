/*
 *   Copyright (C) 2009 by Claudemiro Alves Feitosa Neto
 *   <dimiro1@gmail.com>
 *   Modified: <2009-09-20 19:49:15 BRT>
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
#include "Color.hpp"

Color Color::operator+(const Color &_color) const
{
  return Color (r + _color.r, g + _color.g, b + _color.b);
}
 
Color Color::operator-(const Color &_color) const
{
  return Color (r - _color.r, g - _color.g, b - _color.b);
}
 
bool Color::operator==(const Color &_color) const
{
   return r == _color.r &&
     g == _color.g &&
     b == _color.b;
}

