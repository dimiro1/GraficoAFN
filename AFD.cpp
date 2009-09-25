/*
 *   Copyright (C) 2009 by Claudemiro Alves Feitosa Neto
 *   <dimiro1@gmail.com>
 *   Modified: <2009-09-24 23:07:36 BRT>
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

#include <GL/glut.h>
#include <cstdlib>
#include "ApplicationResource.hpp"
#include "Color.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Line.hpp"
#include "Menu.hpp"
#include "Selection.hpp"

ApplicationResource *resources;

void draw ()
{
  std::vector<Drawable *>::const_iterator i;

  glClearColor (1, 1, 1, 0);
  glClear (GL_COLOR_BUFFER_BIT);

  for (i = resources->drawables.begin ();
       i != resources->drawables.end (); i++)
    {
      (*i)->draw ();
    }
  glFlush();
  glutSwapBuffers ();
}

void initResources ()
{
  glMatrixMode (GL_PROJECTION);
  gluOrtho2D (0, 600, 600, 0);
  glMatrixMode (GL_MODELVIEW);
}

void moveEvent (const int _x, const int _y)
{
  /* std::cout << "x: " << x << ", y: " << y << std::endl; */
  resources->getMotionMouseEvent (_x, _y);
  draw ();
}

void clickEvent (const int _button, const int _state, const int _x, const int _y)
{
  resources->getClickMouseEvent (_button, _state, _x, _y);
  draw ();
}

int main (int argc, char **argv)
{
  glutInit (&argc, argv);
  glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
  glutInitWindowSize (600, 600);
  glutCreateWindow ("AFD");
  initResources ();
  glutDisplayFunc (draw);
  glutMotionFunc (moveEvent);
  glutMouseFunc (clickEvent);

  resources = new ApplicationResource ();
  
  /* Drawable *line = new Line (100, 100, 200); */
  /* Drawable *r = new Rectangle (100, 100, 100, 100, new Red ()); */
  /* Drawable *r2 = new Rectangle (200, 200, 50, 50, new Green ()); */
  Drawable *c = new Circle (50, 300, 300, new Blue ());
  Drawable *menu = new Menu (0, 0, 600, 100);
  resources->addDrawable (menu);
  /* resources->addDrawable (r); */
  /* resources->addDrawable (r2); */
  resources->addDrawable (c);
  /* resources->addDrawable (line); */

  glutMainLoop ();
  return EXIT_SUCCESS;
}

