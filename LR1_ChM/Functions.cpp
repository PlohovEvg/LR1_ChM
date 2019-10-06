#include "Functions.h"
#include <cmath>

double RK4(double x, double vn, double h, int m)
{
	double vnplus1, k1, k2, k3, k4;

	if (m == 1)
	{
		k1 = f1(x, vn);
		k2 = f1(x + (h / 4), vn + (h / 4)*k1);
		k3 = f1(x + (h / 2), vn + (h / 2)*k2);
		k4 = f1(x + h, vn + h*(k1 - 2 * k2 + 2 * k3));
	}
	else
	{
		
			k1 = f2(x, vn);
			k2 = f2(x + (h / 4), vn + (h / 4)*k1);
			k3 = f2(x + (h / 2), vn + (h / 2)*k2);
			k4 = f2(x + h, vn + h*(k1 - 2 * k2 + 2 * k3));		
	}
	vnplus1 = vn + (h / 6)*(k1 + 4 * k3 + k4);

	return vnplus1;
}

double RK4System(double x, double vn1, double vn2, double h, double a, double c, int m)
{
	double vnplus1;
	double k1, k2, k3, k4;
	if (m == 3)
	{
		k1 = f3(x, vn1, vn2);
		k2 = f3(x + (h / 4), vn1 + (h / 4)*k1, vn2 + (h / 4)*k1);
		k3 = f3(x + (h / 2), vn1 + (h / 2)*k2, vn2 + (h / 2)*k2);
		k4 = f3(x + h, vn1 + h*(k1 - 2 * k2 + 2 * k3), vn2 + h*(k1 - 2 * k2 + 2 * k3));
		vnplus1 = vn1 + (h / 6)*(k1 + 4 * k3 + k4);
	}
	else
	{
		k1 = f4(x, vn1, vn2, a, c);
		k2 = f4(x + (h / 4), vn1 + (h / 4)*k1, vn2 + (h / 4)*k1, a, c);
		k3 = f4(x + (h / 2), vn1 + (h / 2)*k2, vn2 + (h / 2)*k2, a, c);
		k4 = f4(x + h, vn1 + h*(k1 - 2 * k2 + 2 * k3), vn2 + h*(k1 - 2 * k2 + 2 * k3), a, c);
		vnplus1 = vn2 + (h / 6)*(k1 + 4 * k3 + k4);
	}
	
	return vnplus1;
}

double f1(double x, double u)
{
	return -u*1.5;
}

double f1Accurate(double u0, double x)
{
	return u0*exp(-x*1.5);
}

double xInc(double x, double h)
{
	return x + h;
}

double Vn1cap(double xn, double vn, double h, int m)
{
	double vn12, xn12, vn1cap;

	vn12 = RK4(xn, vn, h / 2, m);
	xn12 = xInc(xn, h / 2);
	vn1cap = RK4(xn12, vn12, h / 2, m);

	return vn1cap;
}

double CS(double _vn1cap, double _vn1)
{
	return (_vn1cap - _vn1) / 15;
}

int LPControl(double S, double Eps)
{
	if (abs(S) > Eps)
	{
		return -1;
	}
	else
	{
		if (abs(S) < Eps / 32)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}

double f2(double x, double u)
{
	return (u*u / pow(1 + x*x, 1.0 / 3)) + u - pow(u, 3)*sin(10 * x);
}

double PhP(double u1, double u2,double a, double c)
{
	return (-a*u2 + c*u1) / u2;
}

double f3(double x, double u1, double u2)
{
	return u2;
}

double f4(double x, double u1, double u2, double a, double c)
{
	return -a*u2 + c*u1;
}

double Vn1capSystem(double xn, double vn1, double vn2, double h, double a, double c, int m)
{
	double v1n12, v2n12, xn12, vn1cap;

	v1n12 = RK4System(xn, vn1, vn2, h / 2, a, c, m);
	if (m == 3)
	{
		v2n12 = RK4System(xn, vn1, vn2, h / 2, a, c, 4);
	}
	else
	{
		v2n12 = RK4System(xn, vn1, vn2, h / 2, a, c, 3);
	}
	xn12 = xInc(xn, h / 2);
	vn1cap = RK4System(xn12, v1n12, v2n12, h / 2, a, c, m);

	return vn1cap;
}
