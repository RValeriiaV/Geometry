#include "Cube.h"	

Cube::Cube() {
	a = 0;
}

Cube::Cube(double a) {
	this->a = a; 
}

double Cube::Volume() {
	return a * a * a;
}

double Cube::Perimeter() {
	return 12 * a; 
}

double Cube::Square() {
	return a * a; 
}

double Cube::getA() {
	return a; 
}

void Cube::setA(double a) {
	this->a = a;
}

Cube::~Cube(){}


