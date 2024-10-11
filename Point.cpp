//
// Created by hkmed on 11/10/24.
//

#include "Point.h"
#include <iostream>
#include <cmath>
/*methods of the class point*/
Point::Point(const double x_val, const double y_val) : x(x_val), y(y_val) {}

void Point::afficher() const {
    std::cout << "(" << x << ", " << y << ")";
}

void Point::translater(const double dx, const double dy) {
    x += dx;
    y += dy;
}

double Point::distance(const Point &p) const {
    return std::sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
}