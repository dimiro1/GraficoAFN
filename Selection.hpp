#ifndef _SELECTION_H_
#define _SELECTION_H_

#include "Drawable.hpp"
#include <cmath>

class Selection : public Drawable {
public:
  Selection (Rect *_rect)
    : Drawable (_rect) {}

  Selection (int _x, int _y, int _w, int _h)
    : Drawable (_x, _y, _w, _h) {}

  Selection (int _x, int _y, int _w, int _h, Color *_color)
    : Drawable (_x, _y, _w, _h, _color) {}


  void draw ();
  void onClick (const int _x, const int _y);
  void onMove (const int _x, const int _y);
};


#endif /* _SELECTION_H_ */
