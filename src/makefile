CF = --std=c++11 -O3
CPP = g++

####

LA: test_fun.o vector_fun.o helping_fun.o
	$(CPP) $(CF) -o LA test_fun.o vector_fun.o helping_fun.o

####

test_fun.o: test_fun.cpp vector_fun.hpp helping_fun.cpp
	$(CPP) $(CF) -c test_fun.cpp

vector_fun.o: vector_fun.cpp
	$(CPP) $(CF) -c vector_fun.cpp

helping_fun.o: helping_fun.cpp
	$(CPP) $(CF) -c helping_fun.cpp

#### Clean ####

clean:
	rm LA *.o
