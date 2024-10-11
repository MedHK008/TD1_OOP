
## Files and Directories

- **headers/**: Contains the header files for the classes.
  - [`Cercle.h`](headers/Cercle.h): Header file for the `Cercle` class.
  - [`Complex.h`](headers/Complex.h): Header file for the `Complex` class.
  - [`Point.h`](headers/Point.h): Header file for the `Point` class.
  - [`Singleton.h`](headers/Singleton.h): Header file for the `Singleton` class.

- **source/**: Contains the implementation files for the classes.
  - [`Cercle.cpp`](source/Cercle.cpp): Implementation of the `Cercle` class.
  - [`Complex.cpp`](source/Complex.cpp): Implementation of the `Complex` class.
  - [`Point.cpp`](source/Point.cpp): Implementation of the `Point` class.
  - [`Singleton.cpp`](source/Singleton.cpp): Implementation of the `Singleton` class.

- **main.cpp**: The main file that contains the entry point of the program and testing functions.

- **CMakeLists.txt**: The CMake configuration file for building the project.

## Classes

### Cercle

The `Cercle` class represents a circle with a center point and a radius.

- **Methods**:
  - `Cercle(const Point centre, const double rayon)`: Constructor.
  - `void afficher() const`: Display the circle.
  - `void setRayon(const double r)`: Set the radius.
  - `void translater(const double dx, const double dy)`: Translate the center of the circle.
  - `double surface() const`: Calculate the surface area.
  - `double perimetre() const`: Calculate the perimeter.
  - `bool operator==(const Cercle &autre) const`: Compare two circles.
  - `bool contient(const Point &p) const`: Check if a point is within the circle.

### Complex

The `Complex` class represents a complex number with real and imaginary parts.

- **Methods**:
  - `Complex()`: Default constructor.
  - `Complex(double real, double imaginary)`: Constructor with parameters.
  - `Complex(const Complex&)`: Copy constructor.
  - `void afficher() const`: Display the complex number.
  - `double modulo() const`: Calculate the modulus.
  - `Complex& operator+(const Complex&) const`: Add two complex numbers.
  - `Complex& operator-(const Complex&) const`: Subtract two complex numbers.
  - `Complex& operator*(const Complex&) const`: Multiply two complex numbers.
  - `Complex& operator/(const Complex&) const`: Divide two complex numbers.
  - `Complex& operator+(double) const`: Add a real number to a complex number.
  - `Complex& operator-(double) const`: Subtract a real number from a complex number.
  - `Complex& operator*(double) const`: Multiply a complex number by a real number.
  - `Complex& operator/(double) const`: Divide a complex number by a real number.

## Building the Project

To build the project, ensure you have CMake installed and run the following commands in the project directory:

```sh
cmake .
make