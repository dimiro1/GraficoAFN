#include <GL/glut.h>
#include <cstdlib>
#include "Circulo.hpp"
#include "Ponto.hpp"

//Inserir
//Estado estadoInicial
//constroi AFD
//Recebe palavra
//Processa a palavra a partir do estado inicial
void
Desenha (void)
{
  glClearColor (1, 1, 1, 0);
  glClear (GL_COLOR_BUFFER_BIT);
  glColor3f (0, 0, 1);
  Circulo *c = new Circulo (10, 100, 100);
  c->desenha ();
  glFlush();
}

void
Inicializa (void)
{
  glMatrixMode (GL_PROJECTION);
  gluOrtho2D (-200, 200, -200, 200);
  glMatrixMode (GL_MODELVIEW);
}

int
main (int argc, char **argv)
{
  glutInit (&argc, argv);
  glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize (800, 800);
  glutCreateWindow ("GraficoAFD");
  Inicializa ();
  glutDisplayFunc (Desenha);
  glutMainLoop ();
  return EXIT_SUCCESS;
}

