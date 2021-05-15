#include "Progression.h"

Progression::Progression() {
	b1 = 0; 
	q = 0; 
}

Progression::Progression(double b1, double q) {
	this->b1 = b1;
	this->q = q; 
}

double Progression::Member(int n) {
	if (n < 1) return 0;
	return b1 * pow(q, n - 1);
}

double Progression::Sum(int n) {
	if (n < 1) return 0;
	return (b1*(1-pow(q, n))/(1-q));
}

double Progression::getB1() {
	return b1; 
}

double Progression::getQ() {
	return q; 
}

void Progression::setB1(double b1) {
	this->b1 = b1; 
}

void Progression::setQ(double q) {
	this->q = q;
}

Progression::~Progression() {}
