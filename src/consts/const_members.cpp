#include "gtest/gtest.h"

class ConstMembers {
private:
    int i = 0;

public:
    int logical_const_member() const {
        // Ошибка. Член i мы не можем изменить с модификатором const.
        // i = 10;
        return value;
    }
};

// Пример использования модификатора const для обеспечения побитовой константности класса при работе члена класса.
TEST(Consts, ConstMembers) {
    ConstMembers i;
    i.logical_const_member();

    ASSERT_TRUE(true);
}