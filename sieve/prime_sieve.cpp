#include <iostream>
#include <string>
//#include <cmath>
#include <vector>


//find the primes below top_prime
std::vector<long> sieve(long top_prime)
{
  std::vector<long> primes;
  primes.push_back(2);

  // skip even numbers, start at 3
  for (long i=3;i<top_prime;i+=2)
    {

      /* 
      // Assume its prime to start
      // Loop through currently known primes to check primality
       */
      bool is_prime = true;
      for (long p : primes)
        {
          //if (i mod p) is 0, p is a factor of i, and i is NOT prime 
          long rem = i%p;
          if (rem == 0)
            {
              is_prime=false;
              break;
            }
        }

      // If the value is prime, add it to the list for next time
      if (is_prime)
        {
          primes.push_back(i);
        }  
    }
  
  return primes;  
}


int main(int argc, char *argv[])
{  

  std::vector <std::string> args;
  std::vector <long> all_primes;
  long primes_max = 0;
  long n_primes = 0;
  
  // take all the arguments
  for (int i = 1; i < argc; ++i) 
    {
      args.push_back(argv[i]);
    }

  // check for extra inputs
  if (args.size() > 1)
    {
      std::cerr << "You can only input 1 number as an argument\n";
      return 1;
    }

  // convert to long
  primes_max = stol(args[0]);
  
  std::cout << "The maximum number we are checking is: " << primes_max << "\n";

  //find the primes
  all_primes = sieve(primes_max);
  n_primes = all_primes.size();
  std::cout << "There are " << n_primes << " below " << primes_max << "\n";
  
  /*
  for (long iter : all_primes)
    {
      std::cout << "The primes are " << iter << "\n";
    }
  */
  return 0;
}
