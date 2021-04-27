#include "pch.h"
#include "CppUnitTest.h"
#include "../LongLong.cpp"
#include "../LongLong.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongLong a(444, 231);
			int f = a.GetLONG1();
			Assert::AreEqual(f, 444);
		}
	};
}
