#include "doctest.h"
#include "BinaryTree.hpp"
using namespace ariel;

TEST_CASE("Root")
{
    BinaryTree<int> r;
    CHECK(r.get_root() == nullptr);
    CHECK_NOTHROW(r.add_root(2));
    CHECK(r.get_root()->value == 2);
    CHECK_NOTHROW(r.add_root(9));
    CHECK(r.get_root()->value == 9);
    CHECK_NOTHROW(r.add_root(10));
    CHECK(r.get_root()->value == 10);
}
TEST_CASE("Left")
{
    BinaryTree<int> t;
    CHECK_NOTHROW(t.add_root(6));
    CHECK_NOTHROW(t.add_left(6, 8));
    CHECK(t.get_root()->left->value == 8);
    CHECK_NOTHROW(t.add_left(6, 9));
    CHECK(t.get_root()->left->value == 9);
    CHECK_NOTHROW(t.add_left(6, 20));
    CHECK(t.get_root()->left->value == 20);
    CHECK_THROWS(t.add_left(3, 5));
}
TEST_CASE("Right")
{
    BinaryTree<int> t;
    CHECK_NOTHROW(t.add_root(6));
    CHECK_NOTHROW(t.add_right(6, 8));
    CHECK(t.get_root()->right->value == 8);
    CHECK_NOTHROW(t.add_right(6, 9));
    CHECK(t.get_root()->right->value == 9);
    CHECK_THROWS(t.add_right(3, 5));
}