#ifndef _FORMA_H_
#define _FORMA_H_

#include "Ponto.hpp"

class Forma {
protected:
  Ponto *ponto;

private:
  virtual void desenha () = 0;

public:
  virtual void pertence (const Ponto *_ponto) = 0;
  Forma (Ponto *_ponto) : ponto (_ponto) {}
  Forma (float _x, float _y) { ponto = new Ponto(_x, _y); }
};

#endif /* _FORMA_H_ */
