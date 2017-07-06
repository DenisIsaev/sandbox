#include "gtest/gtest.h"

// Статический класс.
class StaticClass {
private:
    StaticClass() {}

public:
    static bool func() { return true;}
};

// Класс с закрытыми копирующим конструктором и оператором копирования.
class PrivateCopiedConstructor {
private:
    explicit PrivateCopiedConstructor(const PrivateCopiedConstructor&) {
        int i = 0;
    }

    PrivateCopiedConstructor& operator=(const PrivateCopiedConstructor& rhs) {
        int i = 0;
    }

public:
    explicit PrivateCopiedConstructor() {
        int i = 0;
    }

    static bool func() { return true; }
};

// Пример использования статического класса.
TEST(Classes, StaticClass) {

    StaticClass::func();

    // Экхемпляр нельзя создать, так как конструктор закрыт.
    // StaticClass static_class;

    ASSERT_TRUE(true);
}

// Пример ограничения доступа к копирующему конструктору и оператору копирования.
TEST(Classes, PrivateCopiedConstructor) {

    PrivateCopiedConstructor i1;
    i1.func();

    // Копирующий конструктор закрыт.
    // PrivateCopiedConstructor i2 = i1;

    // Оператор копирования закрыт.
    // PrivateCopiedConstructor i3;
    // i3 = i1;

    ASSERT_TRUE(true);
}

