
#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

// Функція з основного проєкту
extern int Count(const char* str);

namespace Lab81IterativeTests
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(Test1)
        {
            Assert::AreEqual(3, Count("aabbcc"));
        }

        TEST_METHOD(Test2)
        {
            Assert::AreEqual(0, Count("abc"));
        }

        TEST_METHOD(Test3)
        {
            Assert::AreEqual(2, Count("aaxbb"));
        }

        TEST_METHOD(Test4)
        {
            Assert::AreEqual(1, Count("abccab"));
        }
    };
}
