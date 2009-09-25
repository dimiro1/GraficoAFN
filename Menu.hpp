#ifndef _MENU_H_
#define _MENU_H_

#include "ApplicationResource.hpp"
#include "Circle.hpp"
#include "Drawable.hpp"
#include "Color.hpp"
#include "Selection.hpp"
#include <cmath>

class Menu : public Drawable {
private:
  ApplicationResource *resources;
  Drawable *selection;

public:
  Menu (Rect *_rect)
    : Drawable (_rect) { selection = new Selection (30, 10, 80, 80, new Red ());}

  Menu (int _x, int _y, int _w, int _h)
    : Drawable (_x, _y, _w, _h) { selection = new Selection (30, 10, 80, 80, new Red ()); }

  void draw ();
  void onClick (const int _x, const int _y);
  void onMove (const int _x, const int _y);
};


#endif /* _MENU_H_ */
