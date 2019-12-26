#include "Functions.h"
#include <cmath>

double RK4(double x, double vn, double h, int m)
{
	double vnplus1, k1, k2, k3, k4;

	if (m == 1)
	{
		k1 = f1(vn);
		k2 = f1(vn + (h / 4.0)*k1);
		k3 = f1(vn + (h / 2.0)*k2);
		k4 = f1(vn + h*(k1 - 2 * k2 + 2 * k3));
	}
	else
	{
		
			k1 = f2(x, vn);
			k2 = f2(x + (h / 4.0), vn + (h / 4.0)*k1);
			k3 = f2(x + (h / 2.0), vn + (h / 2.0)*k2);
			k4 = f2(x + h, vn + h*(k1 - 2 * k2 + 2 * k3));		
	}
	vnplus1 = vn + (h / 6.0)*(k1 + 4 * k3 + k4);

	return vnplus1;
}

double* RK4System(double x, double *vn, double h, double a, double c)
{
	double *vnplus1;
	double k1, k2, k3, k4, q1, q2, q3, q4;

	vnplus1 = new double[2];

	k1 = f3(vn[1]);
	q1 = f4(vn[0], vn[1], a, c);
	k2 = f3(vn[1] + (h / 4.0)*q1);
	q2 = f4(vn[0] + (h / 4.0)*k1, vn[1] + (h / 4.0)*q1, a, c);
	k3 = f3(vn[1] + (h / 2.0)*q2);
	q3 = f4(vn[0] + (h / 2.0)*k2, vn[1] + (h / 2.0)*q2, a, c);
	k4 = f3(vn[1] + h*(q1 - 2 * q2 + 2 * q3));
	q4 = f4(vn[0] + h*(k1 - 2 * k2 + 2 * k3), vn[1] + h*(q1 - 2 * q2 + 2 * q3), a, c);

	vnplus1[0] = vn[0] + (h / 6.0)*(k1 + 4 * k3 + k4);
	vnplus1[1] = vn[1] + (h / 6.0)*(q1 + 4 * q3 + q4);

	return vnplus1;
}

double f1(double u)
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

	vn12 = RK4(xn, vn, h / 2.0, m);
	xn12 = xInc(xn, h / 2.0);
	vn1cap = RK4(xn12, vn12, h / 2.0, m);

	return vn1cap;
}

double CS1(double _vn1cap, double _vn1)
{
	return (_vn1cap - _vn1) / 15.0;
}

int LPControl(double S, double Eps)
{
	if (abs(S) > Eps)
	{
		return -1;
	}
	else
	{
		if (abs(S) < Eps / 32.0)
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

double f3(double u2)
{
	return u2;
}

double f4(double u1, double u2, double a, double c)
{
	return -a*u2*u2 - c*u1;
}

double* Vn1capSystem(double xn, double *vn, double h, double a, double c)
{
	double *vn12, *vn1cap;
	double xn12;

	vn12 = new double[2];
	vn1cap = new double[2];

	vn12 = RK4System(xn, vn, h / 2.0, a, c);
	xn12 = xInc(xn, h / 2.0);
	vn1cap = RK4System(xn12, vn12, h / 2.0, a, c);

	return vn1cap;
}

int LPControlSystem(double *_S, double Eps)
{
	double maxS;
	if (abs(_S[0]) >= abs(_S[1]))
	{
		maxS = abs(_S[0]);
	}
	else
	{
		maxS = abs(_S[1]);
	}
	if (maxS > Eps)
	{
		return -1;
	}
	else
	{
		if (maxS < Eps / 32.0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}

double* CS(double *_vncap, double *_vnplus1)
{
	double *S;
	S = new double[2];

	S[0] = (_vncap[0] - _vnplus1[0]) / 15.0;
	S[1] = (_vncap[1] - _vnplus1[1]) / 15.0;

	return S;
}
