#include <array>
#include <valarray>
#include <vector>
#include <stdio.h>
#include <time.h>
#include "vector_fun.hpp"
#include "../../../eigen/Eigen/Dense"
//#include "array_fun.hpp"

using namespace std;

int
main ()
{
    const size_t size {1000000};
    clock_t etime;
    
    // c dynamic array
    etime = -clock();
    double * dynarr = new double [size];
    double * dynarr1 = new double [size];
    double * dynarr2 = new double [size];
    
    for (unsigned i=0; i<size; i++)
    {
        dynarr1[i] = 2.0;
        dynarr2[i] = 4.0;
    }

    for (unsigned i=0; i<size; i++)
    {
        dynarr[i] = 1.0*dynarr1[i] + 1.0*dynarr2[i];
    }
    
    delete[] dynarr;
    delete[] dynarr1;
    delete[] dynarr2;

    etime += clock();
    printf("c dynamic array took \t%lfs\n", (double)etime/CLOCKS_PER_SEC);
    
    // c++ valarray
    etime = -clock();
    valarray<double> varr(size), varr1(2.0, size), varr2(4.0, size);

    varr = 1.0 * varr1 + 1.0 * varr2;
    
    etime += clock();
    printf("c++ valarray took \t%lfs\n", (double)etime/CLOCKS_PER_SEC);

    // c++ vector
    etime = -clock();
    vector<double> vec(size), vec1(size, 2.0), vec2(size, 4.0);

    add_vec(vec, vec1, vec2, 1.0, 1.0);
    
    etime += clock();
    printf("c++ vector took \t%lfs\n", (double)etime/CLOCKS_PER_SEC);

    // eigen vector
    etime = -clock();
    Eigen::VectorXd evec(size), evec1(size), evec2(size);
    evec1.setConstant(size, 2.0);
    evec2.setConstant(size, 4.0);

    evec = 1.0 * evec1 + 1.0 * evec2;

    etime += clock();
    printf("eigen vector took \t%lfs\n", (double)etime/CLOCKS_PER_SEC);

    return 0;
}
