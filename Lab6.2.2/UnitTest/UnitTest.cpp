#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab6.2.2\Main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[] = { -4, 0, 3, 5 };
			ModifyArray(A, 4, 0);
			Assert::AreEqual(5, A[3]);
		}
	};
}
