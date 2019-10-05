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
		k4 = f1(x + h, vn + (h / 2)*(k1 - 2 * k2 + 2 * k3));
	}
	else
	{
		if (m == 2)
		{
			//функция из основной задачи 1
		}
		else
		{
			//функции из основной задачи 2
		}
	}
	vnplus1 = vn + (h / 6)*(k1 + 4 * k3 + k4);

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