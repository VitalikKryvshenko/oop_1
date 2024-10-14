#include "pch.h"
#include "ZavdClass.h"

#include "Math.h"

using namespace std;
//Îá÷èñëåííÿ ôóíêö³¿ b[x,y,z]
void ZavdClass::Fn_b(double x, double y, double z)
{
	double b1 = y+atan(pow(abs(x * x + z), 0.1));
	double b2 = (2 * z + x + pow(sin(pow(y, 3)), 2));
	double b3 = exp(-(x + z) / (z + 1));
	b = x * ((b1 / b2) + b3);

}
// Îá÷èñëåííÿ ôóíêö³¿ a[x, y, z,b]
void ZavdClass::Fn_a(double x, double y, double z)
{
	double a1 = pow(1 + y, 2);
	double a2 = (pow(fabs(x + y), 0.3) / (pow(b, 2) + z));
	double a3 = 1 + exp(-(x - z)) + pow(fabs(y), 0.43);
	a = a1 * (a2 / a3);
}
double ZavdClass::CompareAndPrint(double a, double b)
{
	if (a > b)
		return a;  
	else if (b > a)
		return b;  
	else
		return a;  
}


