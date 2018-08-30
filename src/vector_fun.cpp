/*********************************************
vector_fun.cpp
 
Collection of c++ Linear Algebra functions
usign the std::vector template.

09/2018 - Alberto Quaini
*********************************************/

// LIBRARIES and NAMESPACES
#include <cstdlib>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

// FUNCTIONS

/*
Function:
print_vec

Descritpion:
print vector.
If the vector size is > 10, print the first 5 and last 5 values.
*/
void
print_vec
(
    const vector<double> &vec,
    const string vec_name
)
{
    size_t size {vec.size()};
    printf("%s = ", vec_name.c_str());
    printf("[ ");
    if (size <= 10)
    {
        for (double elem : vec)
            printf("%lf ", elem);
    } else {
        for (unsigned short i=0; i<6; ++i)
            printf("%lf ", vec[i]);
        printf("... ");
        for (unsigned short i=6; i>0; --i)
            printf("%lf ", vec[size-i]);

    }

    printf("]\n");
    printf("%s.size() = %lu\n", vec_name.c_str(), vec.size());
}

/*
Function: 
scale_vec

Description: 
scale vector.

Parameters:
vector<double> &vec
double x

Computes:
vec *= x

Returns:
void 
 */
vector<double>
scale_vec
(
    const vector<double> &vec,
    const double x
)
{
    vector<double> vecc {vec};
    for (double &elem : vecc)
        elem *= x;
    return vecc;
}

/*
Function: 
add_vec

Description: 
add two vectors.
throw error if vector sizes do not match.

Parameters:
vector<double> &vec
const vector<double> &vec1
const vector<double> &vec2

Computes:
vec = vec1 + vec2

Returns:
vector<double>
 */
void
add_vec 
(
    vector<double> &vec,
    const vector<double> &vec1,
    const vector<double> &vec2
)
{
    if ( vec.size() != vec1.size() && vec.size() != vec2.size() )
    {
        printf("ERROR : add_vec : vectors sizes do not match");
        exit(1);
    }
    
    for (unsigned i=0; i<vec1.size(); ++i)
        vec[i] = vec1[i] + vec2[i];
}

/*
Function: add_mat

Description: add two scaled matrices (implemented via mapping):

Parameters:
vector<double> &mat
const vector<double> &mat1
const vector<double> &mat2
const size_t size
const double x
const double y

Returns:
vector<double> mat = x*mat1 + y*mat2
void
add_mat
(
 vector<double> &mat,
 const vector<double> &mat1,
 const vector<double> &mat2,
 const double x,
 const double y
)
{
}
*/
