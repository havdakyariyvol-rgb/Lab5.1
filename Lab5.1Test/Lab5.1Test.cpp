#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.1/Lab5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab51Test
{
	TEST_CLASS(Lab51Test)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double t;
			t = k(1, 0);
			Assert::AreEqual(t, 1.841471, 1e-6);
		}
	};
}