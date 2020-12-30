#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\User\Desktop\Політех\АТП\лаби\5 тема\5.4\5.4\5.4\5.4.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double  c;
			int f = 0;
			c = S1(0, f, 1);
			Assert::AreEqual(c, 0.);
		}
	};
}