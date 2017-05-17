#include <iostream>
#include <cmath>


//condiciones iniciales
const double R0= 0.257453;
const double z0= 0.314687;
const double u= 5*std::M_PI/4;
const double gama= -0.5;
const double r0= std::sqrt(R0*R0+z0*z0);
const double Q0= 1-std::pow((2*gama/R0+R0/pow(r0,3)),2);
const double Rv0= std::sqrt(Q0)*std::cos(u);
const double zv0= std::sqrt(Q0)*std::sin(u);

 
