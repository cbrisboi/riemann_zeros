This folder contains a simple prime sieve code written in C++. The code is slightly different
from most prime sieves in that it does not begin with a list of numbers whose primality is
not known, but rather starts with a list (a vector) with 2 in it, and checks each number in
series up to N (skipping even numbers) and adds prime numbers to the list as they are found.


== Compilation ==
You can compile this program using the included Makefile (by running `make`), which executes the following:

`c++ -o sieve -Ofast -march=native --std=c++17 prime_sieve.cpp`


== Usage ==

Running the program for finding the primes up to 100 is done by running `./sieve 100`. The
output is given below:

```
$ ./sieve 100
The maximum number we are checking is: 100
There are 25 below 100

````

It is possible to get the primes themselves by commenting out the loop at the bottom of
`prime_sieve.cpp`, which displays them in sequence. This can be somewhat combersome for large
values for N, and is commented out be default.  