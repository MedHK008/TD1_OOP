//
// Created by hkmed on 11/10/24.
//

#ifndef POINT_H
#define POINT_H



class Point {
private:
    double x,y;
public:
    Point(double x_val, double y_val);
    void afficher() const;
    void translater(double dx, double dy) ;
    [[nodiscard]] double distance(const Point &p) const;
};


#endif //POINT_H
