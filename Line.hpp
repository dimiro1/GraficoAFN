/*
 *   Copyright (C) 2009 by Claudemiro Alves Feitosa Neto
 *   <dimiro1@gmail.com>
 *   Modified: <2009-09-21 00:22:16 BRT>
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

#ifndef _LINE_H_
#define _LINE_H_

#include "Drawable.hpp"

/* Não está pronto */
/* Line é apenas um retangulo com altura 1*/
class Line : public Drawable {
private:
  int x, y;
public:
  Line (const int _x, const int _y, const int _w)
    : Drawable (_x, _y, _w, 1) {}

  void draw ();
  void onClick () {}
};


#endif /* _LINE_H_ */
