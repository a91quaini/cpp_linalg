/*********************************************
array_fun.cpp
 
Collection of c++ Linear Algebra functions
usign the std::array template.

09/2018 - Alberto Quaini
*********************************************/

// LIBRARIES
#include <array>
using namespace std;

// FUNCTIONS

/*
Function: add_1da

Description: add two scaled 1d arrays

Parameters:
array<double, size> &arr
const array<double, size> &arr1
const array<double, size> &arr2
const double x
const double y

Returns:
array<double, size> arr = x*arr1 + y*arr2
 */
template<size_t size>
void
add_1da
(
 array<double, size> &arr,
 const array<double, size> &arr1,
 const array<double, size> &arr2,
 const double x,
 const double y
)
{
    for (unsigned i=0; i<arr.size(); i++)
        arr[i] = x * arr1[i] + y * arr2[i];
}
