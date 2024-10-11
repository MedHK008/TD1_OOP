//
// Created by hkmed on 07/10/24.
//

#include "Singleton.h"
#include<iostream>
int Singleton::cmpt = 0;
Singleton* Singleton::P = nullptr;
Singleton::Singleton() {
	this->id = cmpt++ ;
}
Singleton& Singleton::createOnlyOne()
{
	if(!P) P = new Singleton();
	else std::cout << "impossible de cree une instance : " << cmpt <<"\n";
	return *P;
}

void Singleton::afficher() const
{
	std::cout << this << "\n";
}

Singleton::~Singleton()
{
	delete P;
}
