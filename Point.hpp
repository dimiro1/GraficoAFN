#ifndef _POINT_H_
#define _POINT_H_

class Point {
private:
  float x;
  float y;

public:
  Point (const float _x, const float _y)
    : x (_x), y (_y) {}

  float getX () const;
  float getY () const;
};

#endif /* _POINT_H_ */
