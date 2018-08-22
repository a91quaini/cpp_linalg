/*********************************************
vector_fun.cpp
 
Collection of c++ Linear Algebra functions
usign the std::vector template.

09/2018 - Alberto Quaini
*********************************************/

// LIBRARIES and NAMESPACES
#include <cstdlib>
#include <vector>
#include <stdio.h>
using namespace std;

// FUNCTIONS

/*
Function: add_vec

Description: add two scaled vectors.
throw error if vector sizes do not match.

Parameters:
vector<double> &vec
const vector<double> &vec1
const vector<double> &vec2
const double x
const double y

Returns:
vector<double> vec = x*vec1 + y*vec2
 */
void
add_vec
(
 vector<double> &vec,
 const vector<double> &vec1,
 const vector<double> &vec2,
 const double x,
 const double y
)
{
    if ( vec.size() != vec1.size() || vec.size() != vec2.size() )
    {
        printf("ERROR : add_vec : vector sizes do not match");
        exit(1);
    }
    
    for (unsigned i=0; i<vec.size(); i++)
        vec[i] = x * vec1[i] + y * vec2[i];
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
