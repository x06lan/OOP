#include <cmath>

class MathVector
{
private:
    int _dim;
    double *_arr; // uncertain size array
public:
    // Constructor
    MathVector() // default constructor
    {
    }
    MathVector(int dim, double *arr)
    {
        _dim = dim;
        _arr = new double[_dim];
        for (int i = 0; i < _dim; i++)
        {
            _arr[i] = arr[i];
        }
    }
    int getDim() // getter
    {
        return _dim;
    }
    double getIndex(int i)
    {
        return _arr[i];
    }
};