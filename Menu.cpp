#include "Menu.hpp"

/* extern ApplicationResource *resources; */

void Menu::draw ()
{
  float angle;
  float radius = 30;

  glColor3f (1, 1, 0);
  glBegin (GL_QUADS);
    glVertex3f (rect->topLeft ().getX (), rect->topLeft ().getY (), 0);
    glVertex3f (rect->topRight ().getX (), rect->topRight ().getY (), 0);
    glVertex3f (rect->bottomRight ().getX (), rect->bottomRight ().getY (), 0);
    glVertex3f (rect->bottomLeft ().getX (), rect->bottomLeft ().getY (), 0);
  glEnd ();

  /* node, x = 37, y = 20 */
  glColor3f (1, 0.5, 0.5);
  glBegin (GL_POLYGON);
  for (angle = 0; angle < (2 * M_PI); angle += M_PI/20)
    glVertex3f (37 + radius + (radius * cos (angle)), 20 + radius + (radius * sin (angle)), 0);
  glEnd ();

  /* final node, x = 150, y = 20, h = 60, w = 60 */
  glColor3f (1, 0.5, 0.5);
  glBegin (GL_POLYGON);
  for (angle = 0; angle < (2 * M_PI); angle += M_PI/20)
    glVertex3f (150 + radius + (radius * cos (angle)), 20 + radius + (radius * sin (angle)), 0);
  glEnd ();

  /* inner circle */
  glColor3f (0, 0, 0);
  glBegin (GL_LINE_LOOP);
  for (angle = 0; angle < (2 * M_PI); angle += M_PI/20)
    glVertex3f (155 + (radius - 5) + ((radius - 5) * cos (angle)), 25 + (radius - 5) + ((radius - 5) * sin (angle)), 0);
  glEnd ();

  /* Transition */
  /* x = 280, y = 20, h = 65, w = 50 */
  glColor3f (0, 0, 0);
  glBegin (GL_LINES);
    glVertex3f (280, 85, 0);
    glVertex3f (330, 20, 0);
  glEnd ();

  selection->draw ();
}

void Menu::onClick (const int _x, const int _y)
{
  std::cout << "Menu Click" << std::endl;
  std::cout << "x: " << _x << ", y: " << _y << std::endl;
  /* first button */
  /* final node, x = 37, y = 20, h = 60, w = 60 */
  if (_x >= 37 && _y >= 20 && _x <= (37+60) && _y <= (20+60))
    {
      /* resources->shape = 1; */
      std::cout << "menu 1" << std::endl;
      selection->rect->setX(_x - 30);
      selection->rect->setY(_y - 30);
    }

  /* second button */
  /* final node, x = 150, y = 20, h = 60, w = 60 */
  if (_x >= 150 && _y >= 20 && _x <= (150+60) && _y <= (20+60))
    {
      std::cout << "menu 2" << std::endl;
      selection->rect->setX(_x - 30);
      selection->rect->setY(_y - 30);
    }
  /* third button */
  /* x = 280, y = 20, h = 65, w = 50 */
  if (_x >= 280 && _y >= 20 && _x <= (280+65) && _y <= (20+50))
    {
      std::cout << "menu 3" << std::endl;
      selection->rect->setX(_x - 30);
      selection->rect->setY(_y - 30);
    }

}

void Menu::onMove (const int _x, const int _y) {}
