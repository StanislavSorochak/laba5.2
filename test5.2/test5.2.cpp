#include "pch.h"
#include "CppUnitTest.h"
#include "../laba5.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test52
{
	TEST_CLASS(test52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			double x = 0;
			double n = 0;
			double a = 1;
			t = A(x, n, a);
			Assert::AreEqual(t, 0.);

		}
	};
}
