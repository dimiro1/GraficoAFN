#include "Circulo.hpp"

void Circulo::pertence (const Ponto *_ponto) {}

void Circulo::desenha ()
{
  float angulo;
  glBegin (GL_LINE_LOOP);
  for (angulo = 0; angulo < (2 * M_PI); angulo += M_PI/20)
    glVertex3f (ponto->getX () + (raio * cos (angulo)), ponto->getY () + (raio * sin (angulo)), 0);
  glEnd ();
}
