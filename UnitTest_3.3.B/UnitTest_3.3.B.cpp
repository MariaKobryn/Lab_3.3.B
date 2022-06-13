#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3.3.B/LongLong.h"
#include "../Lab_3.3.B/LongLong.cpp"
#include "../Lab_3.3.B/Pair.h"
#include "../Lab_3.3.B/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33B
{
	TEST_CLASS(UnitTest33B)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongLong l(9, 13);
			Assert::AreEqual(13.0, l.getYounger());
		}
	};
}
