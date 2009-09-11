#ifndef _FORMA_H_
#define _FORMA_H_

#include "Point.hpp"

class Forma {
protected:
  Point &point;

private:
  virtual void desenha () = 0;

public:
  virtual void pertence (const Point &_point) = 0;
};

#endif /* _FORMA_H_ */
