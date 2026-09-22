#include <math.h>
#include <iostream>
using namespace std;

double f(double x)
{
 return exp(-x);
}
// Preprocessor directives; effectively global variables


double ftp_I(double x_0, double TOL, long MAXITER)
{
	double xcurrent;
	long counter = 0;
   while ( counter < MAXITER)
    {
        xcurrent = f(x_0);
        if (fabs(xcurrent - x_0) < TOL)
            return xcurrent;
        x_0 = xcurrent;
        counter++;
    }
    return xcurrent;
}

int main()
{
    const double TOL = 1.0e-5;
    const long MAXITER = 1000;
	
    double xInit = 0.5;
    
	cout << "Fixed point (method I) is: " << ftp_I(xInit, TOL, MAXITER) << endl;

	cout << MAXITER << endl;

	return 0;
}