#include <vector>
#include <stdio.h>
#include "vector_fun.hpp"
#include "helping_fun.hpp"
#include "../../../eigen/Eigen/Dense"

using namespace std;

// MAIN
int
main ()
{
    const size_t size {1000000};
    
    // c++ vector
    vector<double> vec(size), vec1(size, 1.0), vec2(size, 3.0);

    vec1 = scale_vec(vec1, 2.0);
    print_vec(vec1, "vec1");
    if ( !dclose(vec1[0], 2.0) )
        exit(1);
    add_vec(vec, scale_vec(vec1, 2.0), scale_vec(vec2, 2.0) );
    print_vec(vec, "vec");
    if ( !dclose(vec[0], 10.0) )
        exit(1);
    
    /*
    // eigen vector
    etime = -clock();
    Eigen::VectorXd evec(size), evec1(size), evec2(size);
    evec1.setConstant(size, 2.0);
    evec2.setConstant(size, 4.0);

    evec = evec1 + evec2;
    if ( !dclose(evec[0], 6.0) )
        exit(1);
    evec *= x;
    if ( !dclose(evec[0], 12.0) )
        exit(1);


    etime += clock();
    printf("eigen vector took \t%lfs\n", (double)etime/CLOCKS_PER_SEC);
    */
    return 0;
}
