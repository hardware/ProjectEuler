#pragma once

#include <math.h>
#include <vector>

using namespace std;

class Functions
{
public:
	Functions(void);
	static int gcd(int a, int b);
	static int lcm(int a, int b);
	static int sumDivisibleBy(int nb, int max);
	static bool isPalindromic(unsigned n);
	static unsigned countDivisors(unsigned n);
	static bool isPrime(int n);
	static void PrimeList(int limit, vector<int> &primeList);
	static void SieveOfEratosthenes(int limit, vector<int> &primeList);
};

