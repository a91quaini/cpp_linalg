#include <cmath>

// compare two doubles
bool 
dclose 
(
    const double x,
    const double y,
    const double eps = 1e-7
)
{
    if (fabs(x - y) < eps)
        return true;
    return false;
}

