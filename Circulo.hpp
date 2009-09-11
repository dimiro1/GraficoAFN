#ifndef _CIRCULO_H_
#define _CIRCULO_H_

#include <GL/glut.h>
#include <math.h>

#include "Forma.hpp"
#include "Ponto.hpp"

class Circulo : public Forma {
private:
  float raio;
public:
  Circulo (float _raio, Ponto *_ponto)
    : Forma (_ponto), raio (_raio) {}

  Circulo (float _raio, float _x, float _y)
    : Forma (_x, _y), raio (_raio) {}

  void desenha ();
  void pertence (const Ponto *_ponto);
};


#endif /* _CIRCULO_H_ */
