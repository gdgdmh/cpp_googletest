
#include "pch.h"
#include "count.h"


test::googletest::Count::Count() : count_(0) {}

void test::googletest::Count::set(int value) {
  count_ = value;
}

int test::googletest::Count::get() {
  return count_;
}

void test::googletest::Count::add(int value) {
  count_ += value;
}

void test::googletest::Count::sub(int value) {
  count_ -= value;
}
