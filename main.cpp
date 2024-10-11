#include <iostream>
#include "Complex.h"
#include "Cercle.h"

using namespace std;

void ComplexTesting();
void CercleTesting();


int main()
{
	CercleTesting();
	return 0;
}

void CercleTesting() {
	auto *centre = new Point(4,5);
	auto *cercle = new Cercle(*centre,4);
	cercle->afficher();
}

void ComplexTesting() {
	auto *a = new Complex(3,5);
	auto *b = new Complex(12,9);
	auto *c = new Complex(2,8);

	cout << "this is the tzo complex number we are going to present in the demo : " << endl;
	a->afficher();
	b->afficher();
	cout << "modulo : " << a->modulo() << endl;

	auto d = Complex();
	cout << "this is a complex + complex operation" << endl;
	d = *a + *b;
	d.afficher();

	cout << "this is a complex * complex operation" << endl;
	d = *a * *b;
	d.afficher();

	cout << "this is a complex - complex operation" << endl;
	d = *a - *b;
	d.afficher();

	cout << "this is a complex / complex operation" << endl;
	d = *a / *b;
	d.afficher();

	double theFLoat = 0;

	cout << "this is a complex + number operation" << endl;
	d = *a + theFLoat;
	d.afficher();

	cout << "this is a complex * number operation" << endl;
	d = *a * theFLoat;
	d.afficher();

	cout << "this is a complex - number operation" << endl;
	d = *a - theFLoat;
	d.afficher();

	cout << "this is a complex / number operation" << endl;
	d = *a / theFLoat;
	d.afficher();

	delete a;
	delete b;
	delete c;
}
