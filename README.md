# gen_tsp
This is simple genetic algorithm for solving the Travelling salesman problem (TSP).

The problem is as follows. You are given a set of cities (represented as points in the plane with X and Y co-ordinates). The goal is to find the shortest tour that visits each city exactly once, returning in the end to its starting point. Finding the optimal tour is no simple matter. Given just 50 cities, there are more tours possible than the estimated number of atoms in the known universe! Even with the power of GA we are forced, by the difficulty of this NP-complete problem, to settle for "good" solutions instead of the optimum solution.

There are several types of crossover used: partially mapped crossover, injection crossover; and several types of mutation: one point, n-point (user specified) or random-template-based mutation. There is also one tournament selection mechanism based on ranks.
