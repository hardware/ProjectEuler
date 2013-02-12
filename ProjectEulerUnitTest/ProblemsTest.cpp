#include "stdafx.h"
#include <Problems.cpp>
#include <timer.cpp>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ProjectEulerUnitTest
{
	TEST_CLASS(ProblemsTest)
	{
		Problems problems;

	public:
		
		TEST_METHOD(Problem1) { Assert::AreEqual(233168, problems.problem1()); }
		TEST_METHOD(Problem2) { Assert::AreEqual(4613732, (int) problems.problem2()); }
		TEST_METHOD(Problem3) { Assert::AreEqual(6857, (int) problems.problem3()); }
		TEST_METHOD(Problem4) { Assert::AreEqual(906609, (int) problems.problem4()); }
		TEST_METHOD(Problem5) { Assert::AreEqual(232792560, (int) problems.problem5()); }
		TEST_METHOD(Problem6) { Assert::AreEqual(25164150, (int) problems.problem6()); }
		TEST_METHOD(Problem7) { Assert::AreEqual(104743, problems.problem7()); }
		TEST_METHOD(Problem8) { Assert::AreEqual(40824, problems.problem8()); }
		TEST_METHOD(Problem9) { Assert::AreEqual(31875000, problems.problem9()); }
		TEST_METHOD(Problem10) { Assert::AreEqual( (unsigned __int64) 142913828922, (unsigned __int64) problems.problem10()); }
		TEST_METHOD(Problem11) { Assert::AreEqual(70600674, problems.problem11()); }
		TEST_METHOD(Problem12) { Assert::AreEqual(76576500, problems.problem12()); }
		TEST_METHOD(Problem13) { Assert::AreEqual( (unsigned __int64) 5537376230, (unsigned __int64) problems.problem13()); }
	};
}