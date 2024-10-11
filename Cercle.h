//
// Created by hkmed on 11/10/24.
//

#ifndef CERCLE_H
#define CERCLE_H
#include "Point.h"


class Cercle {
private:
    Point centre;
    double rayon;
public:
    Cercle(Point centre, double rayon);
    void afficher() const;
    void setRayon(double r) ;
    void translater(double dx, double dy);
    [[nodiscard]] double surface() const;
    [[nodiscard]] double perimetre() const;
    bool operator==(const Cercle &autre) const;
    [[nodiscard]] bool contient(const Point &p) const ;
};

//Supposons que les constructeurs de la classe point sont privés. Donnez une
//solution pour créer des instances de cette classe
//creer une methode statique membre de la classe et acceder au constructeur via cette methode

#endif //CERCLE_H
