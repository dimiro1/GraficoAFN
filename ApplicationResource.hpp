/*
 *   Copyright (C) 2009 by Claudemiro Alves Feitosa Neto
 *   <dimiro1@gmail.com>
 *   Modified: <2009-09-20 19:02:28 BRT>
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

#ifndef _APPLICATION_RESOURCE_H_
#define _APPLICATION_RESOURCE_H_

#include "Drawable.hpp"
#include <vector>

class ApplicationResource {
public:
  std::vector<Drawable *> drawables;
  void getMotionMouseEvent (const int _x, const int _y);
  void getClickMouseEvent (const int _button, const int _state, const int _x, const int _y);
  void getKeyboardEvent (const unsigned char _key,
                         const int _x, const int _y);

  void addDrawable (Drawable *_drawable);
};


#endif /* _APPLICATION_RESOURCE_H_ */
