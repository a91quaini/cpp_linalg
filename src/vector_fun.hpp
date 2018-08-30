#ifndef VECTOR_FUN_HPP
#define VECTOR_FUN_HPP

#include <string>
#include <vector>

/*
Function:
print_vec

Description:
print a vector.
*/
void
print_vec
(
    const std::vector<double> &vec,
    const std::string vec_name
);


/*
Function:
scale_vec

Description:
scale a vector.
*/
std::vector<double>
scale_vec
(
    const std::vector<double> &vec,
    const double x
);

/*
Function: 
add_vec

Description: 
add two vectors.
*/
void
add_vec
(
    std::vector<double> &vec,
    const std::vector<double> &vec1,
    const std::vector<double> &vec2
);

#endif
