#include "Operation.h"

double powe(double a, double n)
{
	double x = exp(n * log(a));
	return x;
}

double nfunction()
{
	if (a >= b) return powe(a - b, 1 / 3);
	else {
		if (sin(a * b) == 0) return pow(a, 2) + (a - b) / sin(a * b);
		else return -6.43*pow(10, 66);
	}		
}

double mfunction()
{
	if (n < b) return (nfunction() + a) / (-b) + sqrt(pow(sin(a), 2) - cos(n));
	else if (n == b) return b * b + tan(a * b);
	else return b * b * b + nfunction() * a * a;
}