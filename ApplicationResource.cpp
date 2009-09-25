/*
 *   Copyright (C) 2009 by Claudemiro Alves Feitosa Neto
 *   <dimiro1@gmail.com>
 *   Modified: <2009-09-24 23:11:27 BRT>
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

#include "ApplicationResource.hpp"

void ApplicationResource::getMotionMouseEvent (const int _x, const int _y)
{
  std::vector<Drawable *>::const_iterator i;
  for (i = drawables.begin ();
       i != drawables.end (); i++)
    {
      if ((*i)->isInside (_x, _y) && (*i)->isMoving)
        (*i)->onMove (_x, _y);
    }
}

void ApplicationResource::getClickMouseEvent (const int _button, const int _state,
                                              const int _x, const int _y)
{
  std::vector<Drawable *>::const_iterator i;
  if (_state == GLUT_DOWN)
    {
      switch ( _button ) {
      case GLUT_LEFT_BUTTON:
        for (i = drawables.begin ();
             i != drawables.end (); i++)
          {
            if ((*i)->isInside (_x, _y))
              {
                (*i)->setMoving (true);
                (*i)->onClick (_x, _y);
              }
            if (shape == 1)
              {
                /* addDrawable (c); */
              }
          }
      default:
        break;
      }
    }
  else if (_state == GLUT_UP)
    {
      switch (_button)
      case GLUT_LEFT_BUTTON:
        for (i = drawables.begin ();
             i != drawables.end (); i++)
          {
            if ((*i)->isInside (_x, _y))
              {
                (*i)->setMoving (false);
                (*i)->onClick (_x, _y);
              }
          }
    }
}

void ApplicationResource::getKeyboardEvent (const unsigned char _key,
                                            const int _x, const int _y)
{
}

void ApplicationResource::addDrawable (Drawable *_drawable)
{
  drawables.push_back (_drawable);
}
