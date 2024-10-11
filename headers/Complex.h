//
// Created by hkmed on 07/10/24.
//

#ifndef COMPLEX_H
#define COMPLEX_H



class Complex {
private:
    double real;
    double imaginary;
public:
    Complex();
    Complex(double real, double imaginary);
    Complex(const Complex&);
    void afficher()const;
    double modulo() const;

    Complex& operator+(const Complex&) const;
    Complex& operator-(const Complex&) const;
    Complex& operator*(const Complex&) const;
    Complex& operator/(const Complex&) const;

    Complex& operator+(double) const;
    Complex& operator-(double) const;
    Complex& operator*(double) const;
    Complex& operator/(double) const;
};



#endif //COMPLEX_H
