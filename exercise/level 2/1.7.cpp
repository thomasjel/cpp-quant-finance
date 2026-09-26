
#include <math.h>
#include <iostream>
using namespace std;

double LeonardoPisa(double x)
{
   return 20.0/(x*x + 2.0*x + 10);
}

double SquareRoot(double x)
{
    return 0.5 * (x + 2.0/x);
}
double a=9.0;

double CubeRoot(double x)
{
    return (2.0*x + a/(x*x)) / 3.0;
}

double FPSolver(double (*f) (double x), double x0, double TOL)
{ // General 1 solver for a contraction mapping f in form x = f(x)

	double xnp1;
	double diff = 10.0 * TOL;

	while (diff >= TOL)
	{ // You should have a break if algorithm does not converge
		xnp1 = (*f)(x0);
		diff = fabs(xnp1 - x0);
		x0 = xnp1;
	}
	return x0;
}

int main()
{
     cout.precision(4);

    cout << "Cosine fixed point solver: "
         << FPSolver(cos, 0.12, 1.0e-2) << endl;

    double tol = 1.0e-10;
    double x0 = 100.0;
    cout << "x0 before SquareRoot = " << x0 << endl;

    cout << "Square root: "
         << FPSolver(SquareRoot, x0, tol) << endl;

    cout << "x0 after SquareRoot = " << x0 << endl;
    tol = 1.0e-10;
    x0 = 100.0;

    cout << "Root of cubic equation: "
         << FPSolver(LeonardoPisa, x0, tol) << endl;

    double (*myFunc)(double x);
    myFunc = SquareRoot;

    cout << "Square root, again: "
         << FPSolver(myFunc, x0, tol) << endl;

    myFunc = ::sin;

    cout << "Sine fixed point solver: "
         << FPSolver(myFunc, 0.12, 1.0e-2) << endl;
    
    cout << "CubeRoot: "
         << FPSolver(CubeRoot, x0, tol) << endl;

    return 0;

}