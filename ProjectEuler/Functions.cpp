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

int Functions::SieveOfEratosthenes(int n)
{
	int i, j;
	vector<bool> arr(n+1, false); // bool arr[N+1] = { 0 };

	for(i=2;i<=n;i++)
	{
		if(arr[i] == false) 
		{
			for(j=2;i*j<=n;j++)
			{
				arr[i*j] = 1;
			}

			// cout << i << endl;
		}
	}

	return 0;
}