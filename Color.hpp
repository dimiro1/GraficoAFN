/*
 *   Copyright (C) 2009 by Claudemiro Alves Feitosa Neto
 *   <dimiro1@gmail.com>
 *   Modified: <2009-09-20 19:49:45 BRT>
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
#ifndef _COLOR_H_
#define _COLOR_H_

struct Color {
public:
  int r, g, b;
  Color (const int _r, const int _g, const int _b)
    : r (_r), g (_g), b (_b) {}

  Color operator+(const Color &_color) const;
  Color operator-(const Color &_color) const;
  bool operator==(const Color &_color) const;
};

struct Red : public Color {
  Red () : Color (1, 0, 0) {}
};

struct Green : public Color {
  Green () : Color (0, 1, 0) {}
};

struct Blue : public Color {
  Blue () : Color (0, 0, 1) {}
};


#endif /* _COLOR_H_ */
