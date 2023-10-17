#include <iostream>
#include "Point.hpp"

int main( void ) {
    float ax = 0.0f, ay = 0.0f;
    float bx = 1.0f, by = 1.0f;
    float cx = 2.0f, cy = 0.0f;
    float px = 0.5f, py = 0.5f;

    if (bsp(Point(ax,ay), Point(bx,by), Point(cx,cy), Point(px, py)))
        std::cout << "Point (" << px << ", " << py << ") inside the triangle [(" << ax << ", " << ay << ")(" << bx << ", " << by << ")(" << cx << ", " << cy << ")]" << std::endl;
    else
        std::cout << "Point (" << px << ", " << py << ") outside the triangle [(" << ax << ", " << ay << ")(" << bx << ", " << by << ")(" << cx << ", " << cy << ")]" << std::endl;

    px = 1.0f;
    py = -1.0f;
    if (bsp(Point(ax,ay), Point(bx,by), Point(cx,cy), Point(px, py)))
        std::cout << "Point (" << px << ", " << py << ") inside the triangle [(" << ax << ", " << ay << ")(" << bx << ", " << by << ")(" << cx << ", " << cy << ")]" << std::endl;
    else
        std::cout << "Point (" << px << ", " << py << ") outside the triangle [(" << ax << ", " << ay << ")(" << bx << ", " << by << ")(" << cx << ", " << cy << ")]" << std::endl;
    return 0;
}
