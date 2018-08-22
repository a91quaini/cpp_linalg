CF = --std=c++11 -O3
CPP = g++

LA: test_fun.o vector_fun.o #array_fun.o
	$(CPP) $(CF) -o LA test_fun.o vector_fun.o #array_fun.o


test_fun.o: test_fun.cpp vector_fun.hpp #array_fun.hpp
	$(CPP) $(CF) -c test_fun.cpp

# array_fun.o: array_fun.cpp
#     $(CPP) $(CF) -c array_fun.cpp

vector_fun.o: vector_fun.cpp
	$(CPP) $(CF) -c vector_fun.cpp

#### Clean ####

clean:
	rm LA *.o
