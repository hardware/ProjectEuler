#include "stdafx.h"
#include <Functions.cpp>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ProjectEulerUnitTest
{		
	TEST_CLASS(FunctionsTest)
	{
	public:

		TEST_METHOD(gcd)
		{
			Assert::AreEqual(6, Functions::gcd(54, 24), 0.0, L"GCD TEST 1 FAIL", LINE_INFO());
			Assert::AreEqual(31, Functions::gcd(124, 589), 0.0, L"GCD TEST 2 FAIL", LINE_INFO());
			Assert::AreEqual(100, Functions::gcd(1000, 100), 0.0, L"GCD TEST 3 FAIL", LINE_INFO());
		}

		TEST_METHOD(lcm)
		{
			Assert::AreEqual(216, Functions::lcm(54, 24), 0.0, L"LCM TEST 1 FAIL", LINE_INFO());
			Assert::AreEqual(2356, Functions::lcm(124, 589), 0.0, L"LCM TEST 2 FAIL", LINE_INFO());
			Assert::AreEqual(1000, Functions::lcm(1000, 100), 0.0, L"LCM TEST 3 FAIL", LINE_INFO());
		}

		TEST_METHOD(SumDivisibleBy)
		{
			Assert::AreEqual(550, Functions::sumDivisibleBy(10, 100), 0.0, L"sumDivisibleBy TEST 1 FAIL", LINE_INFO());
			Assert::AreEqual(5500, Functions::sumDivisibleBy(100, 1000), 0.0, L"sumDivisibleBy TEST 2 FAIL", LINE_INFO());
			Assert::AreEqual(55000, Functions::sumDivisibleBy(1000, 10000), 0.0, L"sumDivisibleBy TEST 3 FAIL", LINE_INFO());
		}
		
		TEST_METHOD(isPalindromic)
		{
			Assert::IsTrue(Functions::isPalindromic(404), L"isPalindromic TEST 1 FAIL", LINE_INFO());
			Assert::IsTrue(Functions::isPalindromic(7887), L"isPalindromic TEST 2 FAIL", LINE_INFO());
			Assert::IsTrue(Functions::isPalindromic(960069), L"isPalindromic TEST 3 FAIL", LINE_INFO());

			Assert::IsFalse(Functions::isPalindromic(123), L"isPalindromic TEST 4 FAIL", LINE_INFO());
			Assert::IsFalse(Functions::isPalindromic(5687), L"isPalindromic TEST 5 FAIL", LINE_INFO());
			Assert::IsFalse(Functions::isPalindromic(852456), L"isPalindromic TEST 6 FAIL", LINE_INFO());
		}

		TEST_METHOD(countDivisors)
		{
			Assert::AreEqual(6, Functions::countDivisors(45), 0.0, L"countDivisors TEST 1 FAIL", LINE_INFO());
			Assert::AreEqual(9, Functions::countDivisors(100), 0.0, L"countDivisors TEST 2 FAIL", LINE_INFO());
			Assert::AreEqual(12, Functions::countDivisors(1550), 0.0, L"countDivisors TEST 3 FAIL", LINE_INFO());
		}

		TEST_METHOD(isPrime)
		{
			Assert::IsTrue(Functions::isPrime(11), L"isPrime TEST 1 FAIL", LINE_INFO());
			Assert::IsTrue(Functions::isPrime(29), L"isPrime TEST 2 FAIL", LINE_INFO());
			Assert::IsTrue(Functions::isPrime(283), L"isPrime TEST 3 FAIL", LINE_INFO());

			Assert::IsFalse(Functions::isPrime(4), L"isPrime TEST 4 FAIL", LINE_INFO());
			Assert::IsFalse(Functions::isPrime(24), L"isPrime TEST 5 FAIL", LINE_INFO());
			Assert::IsFalse(Functions::isPrime(224), L"isPrime TEST 6 FAIL", LINE_INFO());
		}
	};
}