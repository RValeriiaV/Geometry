#pragma once
#include <math.h>
class Progression
{
	double b1; 
	double q; 
public:
	Progression();
	Progression(double b1, double q);
	double Member(int n);
	double Sum(int n);
	double getB1();
	double getQ();
	void setB1(double b1);
	void setQ(double q);
	~Progression();
};

