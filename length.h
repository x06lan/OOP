#include <cmath>
#include "MathVector.h"

using namespace std;
double length(double x, double y)
{
    double i = 0;
    i = pow(x, 2) + pow(y, 2);
    return sqrt(i);
}
double length(double x, double y, double z)
{
    double i = 0;
    i = pow(x, 2) + pow(y, 2) + pow(z, 2);
    return sqrt(i);
}
double length(double *v, int dim) // double v[]
{
    double sum = 0;
    for (int i = 0; i < dim; i++)
    {
        sum += pow(v[i], 2);
    }
    return sqrt(sum);
}
// Function overloadding
double length(MathVector m)
{
    double sum = 0;
    for (int i = 0; i < m.getDim(); i++)
    {
        sum += pow(m.getIndex(i), 2);
    }
    return sqrt(sum);
}
