#include "gtest/gtest.h"

// Примеры использования модификатора const при объявлении\определении переменной.
TEST(Consts, DefineAndDeclareConsts) {
    // Константные данные
    const int a = 1;
    int const b = 2;
    //(a = 10, b = 10); // значения изменить нельзя

    // Неконстантный указатель на константные данные
    const int* c = new int(3);
    int const* f = new int(4);
    c = new int(4); // переопределить указатель можно
    // *c = 5; // изменить значение по указателю нельзя

    // Константный указатель на неконстантные данные
    int* const d = new int(5);
    // d = new int(6); // переопределить указатель нельзя
    *d = 7; // изменить значение по указателю можно

    // Константный указатель на константные данные
    const int* const e = new int(8);
    // e = new int(9); // переопределить указатель нельзя
    // *e = 10; // изменить значение по указателю нельзя

    ASSERT_TRUE(true);
}


