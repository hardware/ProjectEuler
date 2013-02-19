#include "Functions.h"

Functions::Functions(){}

// Find the Greatest Common Divisor (Euclidean algorithm implementation)
int Functions::gcd(int a, int b)
{
	int t;

	while (b != 0)
	{
		t = b;
		b = a%t;
		a = t;
	}

	return a;
}

// Find the Least Common Multiple (Reduction by the GCD)
int Functions::lcm(int a, int b)
{
	return a / gcd(a, b) * b;
}

int Functions::sumDivisibleBy(int n, int max)
{
	return n*(max/n)*((max/n)+1)/2;
}

bool Functions::isPalindromic(unsigned n)
{
	unsigned r = 0, t = n;

	while (t > 0) {
		r = r * 10 + (t % 10);
		t /= 10;
	}

	return r == n;
}

unsigned Functions::countDivisors(unsigned n)
{
	unsigned i, divs = 1;

	for(i=2;i<=n;i++)
	{
		unsigned c = 0;

		while(n%i == 0)
		{
			c++;
			n /= i;
		}

		divs *= c+1;
	}

	return divs;
}

bool Functions::isPrime(int n)
{
	if(n == 1)        return false;
	else if(n < 4)    return true;
	else if(n%2 == 0) return false;
	else if(n < 9)    return true;
	else if(n%3 == 0) return false;
	else
	{
		int r = (int) floor(sqrt( (double) n));
		int f = 5;

		while(f <= r)
		{
			if(n%f == 0) return false;
			if(n%(f+2) == 0) return false;
			f += 6;
		}

		return true;
	}
}

void Functions::PrimeList(int limit, vector<int> &primeList)
{
	vector<bool> arr(limit+1, true);

	for(int i=2;i<=limit;i++)
	{
		if(arr[i]) 
		{
			for(int j=2;i*j<=limit;j++)
			{
				arr[i*j] = false;
			}

			primeList.push_back(i);
		}
	}
}

void Functions::SieveOfEratosthenes(int limit, vector<int> &primeList)
{
	int sieveBound = (int)(limit - 1) / 2;
	int upperSqrt = ( (int) sqrt( (double) limit) - 1) / 2;

	vector<bool> arr(sieveBound+1, true);

	for(int i = 1; i <= upperSqrt; i++)
	{
		if(arr[i]) 
		{
			for (int j = i * 2 * (i + 1); j <= sieveBound; j += 2 * i + 1)
			{
				arr[j] = false;
			}
		}
	}

	primeList.push_back(2);

	for(int i = 1; i <= sieveBound; i++)
	{
		if(arr[i])
		{
			primeList.push_back(2 * i + 1);
		}
	}
}

void Functions::SieveOfAtkin(int limit, vector<int> &primeList)
{
	vector<bool> arr(limit+1, false);
	int upperSqrt = (int) sqrt( (double) limit);

	for (int i = 1; i <= upperSqrt; i++)
	{
		for (int j = 1; j <= upperSqrt; j++)
		{
			int n = 4 * i * i + j * j;
			if (n <= limit && (n % 12 == 1 || n % 12 == 5)) {
				arr[n] = !arr[n];
			}
			n = 3 * i * i + j * j;
			if (n <= limit && (n % 12 == 7)) {
				arr[n] = !arr[n];
			}
			n = 3 * i * i - j * j;
			if (i > j && n <= limit && (n % 12 == 11)) {
				arr[n] = !arr[n];
			}
		}
	}

	for (int i = 5; i <= upperSqrt; i++)
	{
		if (arr[i]) {
			for (int j = i * i; j <= limit; j += i * i)
			{
				arr[j] = false;
			}
		}
	}

	primeList.push_back(2);
	primeList.push_back(3);

	for (int i = 5; i <= limit; i += 2) {
		if (arr[i]) {
			primeList.push_back(i);
		}
	}
}