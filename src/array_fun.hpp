#ifndef array_fun_hpp
#define array_fun_hpp

#include <array>
using namespace std;

template<size_t size>
void
add_1da
(
 array<double, size> &vec,
 const array<double, size> &vec1,
 const array<double, size> &vec2,
 const double x,
 const double y
);

#endif
