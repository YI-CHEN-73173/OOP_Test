# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
# include <iostream>
# include <iomanip>
# define _USE_MATH_DEFINES
# include <cmath>

double Cylinder :: SurfaceArea(){
    double pi=3.141592653589793;
    double ans=0;
    double r=radius;
    double h=height;

    ans=pi*r*r*2+pi*r*h*2;

    return ans;
}

double Cylinder :: Volume(){
    double pi=3.141592653589793;
    double ans=0;
    double r=radius;
    double h=height;

    ans=pi*r*r*h;

    return ans;
}

double Cylinder :: Circumference(){
	double pi=3.141592653589793;
	double ans=0;
	double r=radius;

	ans=pi*r*2;

    return ans;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in>>cldr.radius>>cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out<<"Circumference: "<<fixed<<std::setprecision(3)<<cldr.Circumference()<<endl;
    out<<"SurfaceArea: "<<fixed<<std::setprecision(3)<<cldr.SurfaceArea()<<endl;
    out<<"Volume: "<<fixed<<std::setprecision(3)<<cldr.Volume()<<endl;
    return out;
}

# endif
