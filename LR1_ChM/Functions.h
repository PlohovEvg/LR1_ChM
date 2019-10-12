#pragma once
double RK4(double x, double vn, double h, int m);
double f1(double u);
double f1Accurate(double u0, double x);
double xInc(double x, double h);
double Vn1cap(double xn, double vn, double h, int m);
double CS(double _vn1cap, double _vn1);
int LPControl(double S, double Eps);
double f2(double x, double u);
double RK4System(double x, double vn1, double vn2, double h, double a, double c, int m);
double PhP(double u1, double u2, double a, double c);
double f3(double u2);
double f4(double u1, double u2, double a, double c);
double Vn1capSystem(double xn, double vn1, double vn2, double h, double a, double c, int m);
int LPControlSystem(double S1, double S2, double Eps);