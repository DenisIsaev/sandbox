#include "gtest/gtest.h"

// Объявление статического константного члена класса.
class ConstMethodsExample
{
public:
    ConstMethodsExample(int i = 0) : non_static_const_var(i) {}

    static const int static_const_var = 10;
    const int non_static_const_var;
};

// Пример использования констант в классах.
TEST(Consts, StaticConstMethods)
{
ConstMethodsExample A(10);
ConstMethodsExample B(20);

int i = A.static_const_var;
int j = B.static_const_var;
int h = ConstMethodsExample::static_const_var;

int m = A.non_static_const_var;
int n = B.non_static_const_var;

ASSERT_TRUE(true);
}

// Особенность объявления статических членов классов в некоторых старых компиляторах.
class OldCompilerStaticVarHack {
private:

    // Некоторые старые компиляторы не позволяют задавать значения статических членов внутри класса.
    // const int size = 5;
    // int array[size];

    // Поэтому можно использовать трюк с перечислениями
    enum { size = 2 };
    int array[size] = {0, 0};
};

// Пример использования статических константных
TEST(Consts, ConstStaticHack)
{
    OldCompilerStaticVarHack a;

    ASSERT_TRUE(true);
}