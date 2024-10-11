//
// Created by hkmed on 07/10/24.
//

#include "Complex.h"

#include <iostream>
#include <cmath>

using namespace std;

Complex::Complex() {
    this->real = 0;
    this->imaginary = 0;
}

Complex::Complex(const double real, const double imaginary) {
    this->real = real;
    this->imaginary = imaginary;
}

Complex::Complex(const Complex& C) {
    this->real = C.real;
    this->imaginary = C.imaginary;
}

void Complex::afficher() const {
    std::cout << this->real << " + " << this->imaginary << "i" << std::endl;
}

double Complex::modulo() const {
    const double modulo = sqrt(pow(this->real, 2) + pow(this->imaginary, 2));
    return modulo;

}

Complex &Complex::operator+(const Complex & z1) const {
    auto* result = new Complex(this->real + z1.real, this->imaginary + z1.imaginary);
    return *result;
}

Complex & Complex::operator-(const Complex & z1) const {
    auto* result = new Complex(this->real - z1.real, this->imaginary - z1.imaginary);
    return *result;
}

Complex & Complex::operator*(const Complex & z1) const {
    auto* result = new Complex();
    result->real = this->real * z1.real + this->imaginary * z1.imaginary;
    result->imaginary = this->real * z1.imaginary + this->imaginary * z1.real;
    return *result;
}

Complex & Complex::operator/(const Complex & z1) const {
    auto* result = new Complex();
    result->real = (this->real*z1.real + this->imaginary*z1.imaginary)/(z1.real*z1.real - z1.imaginary*z1.imaginary);

    double denominator = (z1.real*z1.real - z1.imaginary*z1.imaginary);
    if (denominator == 0) {
        cout << "Division by zero" << endl;
        exit(1);
    }
    else {
        result->imaginary = (this->imaginary*this->real - this->real*z1.imaginary)/denominator;
    }
    return *result;
}

Complex & Complex::operator+(const double theFloat) const {
    auto* result = new Complex(this->real + theFloat, this->imaginary);
    return *result;

}

Complex & Complex::operator-(const double theFloat) const {
    auto* result = new Complex(this->real - theFloat, this->imaginary);
    return *result;
}

Complex & Complex::operator*(const double theFLoat) const {
    auto* result = new Complex(this->real * theFLoat, this->imaginary * theFLoat);
    return *result;
}

Complex & Complex::operator/(const double theFLoat) const {
    if (theFLoat != 0) {
        auto* result = new Complex(this->real / theFLoat, this->imaginary / theFLoat);
        return *result;
    }else {
        cout << "Division by zero" << endl;
        exit(1);
    }


}
