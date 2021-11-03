#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab6.2.1\Main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[] = { -4, 0, -1, 4 };
			bool b = ModifyArray(A, 4);
			Assert::AreEqual(true, b);
		}
	};
}
