CXXFLAGS=-Wall -Wextra --std=c++20 -O3 -march=native -g -I/home/pseyfert/coding/explore-rangev3/install-range-v3/include

all: main

main: main.o parts.o intermediate.o

main : CC = ${CXX}

intermediate.o : CXXFLAGS += -fopt-info-vec-all

%.s : %.cpp
	${CXX} ${CXXFLAGS} ${CPPFLAGS} -S ${OUTPUT_OPTION} $<

