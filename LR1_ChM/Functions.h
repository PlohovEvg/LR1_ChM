#pragma once
double RK4(double x, double vn, double h, int m);
double f1(double x, double u);
double f1Accurate(double u0, double x);
double xInc(double x, double h);
double Vn1cap(double xn, double vn, double h, int m);
double CS(double _vn1cap, double _vn1);
int LPControl(double S, double Eps);