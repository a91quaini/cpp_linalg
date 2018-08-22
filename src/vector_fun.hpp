#ifndef vector_fun_hpp
#define vector_fun_hpp

#include <vector>
using namespace std;

/*
Function: add_vec

Description: add two scaled vectors:
vec = x * vec1 + y * vec2.
*/
void
add_vec
(
 vector<double> &vec,
 const vector<double> &vec1,
 const vector<double> &vec2,
 const double x,
 const double y
);

#endif
