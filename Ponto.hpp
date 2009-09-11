#ifndef _PONTO_H_
#define _PONTO_H_

class Ponto {
private:
  float x;
  float y;

public:
  Ponto (const float _x, const float _y)
    : x (_x), y (_y) {}

  float getX () const;
  float getY () const;
};

#endif /* _PONTO_H_ */
