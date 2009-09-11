#include <GL/glut.h>
#include <cstdlib>

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
  glutInitWindowSize (800, 600);
  glutCreateWindow ("GraficoAFD");
  Inicializa ();
  glutDisplayFunc (Desenha);
  glutMainLoop ();
  return EXIT_SUCCESS;
}

