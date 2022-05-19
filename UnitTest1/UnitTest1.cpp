#include "pch.h"
#include "CppUnitTest.h"
#include "../4.2/4.2.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ofstream fout("test");
			string s = "dasd bfg s gfdg fgghf  fg bfg dg r dgfg";
			fout << s << endl;
			Assert::IsTrue(countWord("test") == 2);
		}
	};
}
