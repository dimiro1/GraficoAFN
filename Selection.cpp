#include "Selection.hpp"


void Selection::draw () 
{
  glColor3f (rect->color->r, rect->color->g, rect->color->b);
  glBegin (GL_LINE_LOOP);
    glVertex3f (rect->topLeft ().getX (), rect->topLeft ().getY (), 0);
    glVertex3f (rect->topRight ().getX (), rect->topRight ().getY (), 0);
    glVertex3f (rect->bottomRight ().getX (), rect->bottomRight ().getY (), 0);
    glVertex3f (rect->bottomLeft ().getX (), rect->bottomLeft ().getY (), 0);
  glEnd ();
}

void Selection::onClick (const int _x, const int _y)
{
  std::cout << "Selection Clicked" << std::endl;
}

void Selection::onMove (const int _x, const int _y)
{}
