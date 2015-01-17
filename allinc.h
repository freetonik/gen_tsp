#ifndef ALLINC
#define ALLINC

#include <stdio.h>
#include <time.h>
#include <cstdlib>
#include <iostream>

#define CITIES 52
#define POP_SIZE 300
#define TOURN_N 10
#define MUTATE_POINTS 1
#define MUTATEW_POINTS 4
#define SORT_LIMIT 10
#define FIT_LIMIT 20
#define GENERATIONS 2000
#define SELECTION_TYPE 0		// 0 - fixed rank, 1 - tournament
#define CROSSOVER_TYPE 1		// 0 - PM, 1 - INJ
#define MUTATION_TYPE 0

struct Individual{
	int route[CITIES];
	int fitness;
};

struct Population{
	Individual pop[POP_SIZE];
};

struct City{
	int name;
	int x;
	int y;
};

#endif
