#include "pch.h"
#include "CppUnitTest.h"
#include "../Labor6.1ITER/lab61i.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
	TEST_CLASS(UnitTest61)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int a = 5;
			int b[a] = { -12, 30, 10, -8, 12 };
			int c;
			c = Sum(b, a);
			Assert::AreEqual(-20, c);
		}
	};
}
