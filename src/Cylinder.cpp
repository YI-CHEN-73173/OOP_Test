# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
# define _USE_MATH_DEFINES
# include <cmath>

double Cylinder :: SurfaceArea(){
    double pi=M_PI;
    double ans=0;
    
    ans=r*r*pi*2+r*2*pi*h;

    return ans;
}

double Cylinder :: Volume(){
    double pi=M_PI;
    double ans=0;

    ans=r*r*pi*h;

    return ans;
}

double Cylinder :: Circumference(){
	double pi=M_PI;
	double ans=0;

	ans=r*2*pi*2;

    return ans;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in>>cldr.r>>cldr.h;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out<<"Circumference: "<<Circumference()<<endl;
    out<<"SurfaceArea: "<<SurfaceArea()<<endl;
    out<<"Volume: "<<Volume()<<endl;
    return out;
}

# endif
