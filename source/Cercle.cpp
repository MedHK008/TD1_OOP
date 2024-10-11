//
// Created by hkmed on 11/10/24.
//

#include "Cercle.h"
#include <iostream>
#include <cmath>

using namespace std;

/*methods of the class cercle*/
Cercle::Cercle(const Point centre, const double rayon) : centre(centre), rayon(rayon) {}

void Cercle::afficher() const {
    std::cout << "Cercle: Centre = ";
    centre.afficher();
    std::cout << ", Rayon = " << rayon << std::endl;
}

// Méthode pour modifier le rayon
void Cercle::setRayon(const double r) {
    rayon = r;
}

// Méthode pour translater le centre du cercle
void Cercle::translater(const double dx, const double dy) {
    centre.translater(dx, dy);
}

// Méthode pour calculer la surface du cercle
double Cercle::surface() const {
    return (M_PI*rayon*rayon);
}

// Méthode pour calculer le périmètre du cercle
double Cercle::perimetre() const {
    return (2*M_PI*rayon);
}

// Surcharge de l'opérateur == pour comparer deux cercles
bool Cercle::operator==(const Cercle &autre) const {
    return (centre.distance(autre.centre) == 0 && rayon == autre.rayon);
}

// Méthode pour vérifier si un point appartient au cercle
bool Cercle::contient(const Point &p) const {
    return centre.distance(p) <= rayon;
}