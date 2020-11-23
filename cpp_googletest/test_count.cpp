
#include "pch.h"
#include "test_count.h"
#include "count.h"

using namespace test::googletest;

void test::googletest::TestCount::SetUp() {
  test_value_1_ = 1;
  test_value_2_ = 10;
  test_value_3_ = 100;
  initialize_value_ = 0;
}

// 初期化後の値チェック(初期化値を使用しているのでフィクスチャを使用)
TEST_F(TestCount, CheckInitializeValue) {
  test::googletest::Count c;
  EXPECT_EQ(c.get(), initialize_value_);
}

TEST_F(TestCount, CheckSetValue1) {
  test::googletest::Count c;
  c.set(test_value_1_);
  EXPECT_EQ(c.get(), test_value_1_);
}

TEST_F(TestCount, CheckSetValue2) {
  test::googletest::Count c;
  c.set(test_value_2_);
  EXPECT_EQ(c.get(), test_value_2_);
}

TEST_F(TestCount, CheckSetValue3) {
  test::googletest::Count c;
  c.set(test_value_3_);
  EXPECT_EQ(c.get(), test_value_3_);
}

TEST_F(TestCount, CheckAdd1) {
  const int VALUE = 1;
  test::googletest::Count c;
  c.add(VALUE);
  EXPECT_EQ(c.get(), VALUE);
}

TEST_F(TestCount, CheckSub1) {
  const int VALUE = 1;
  test::googletest::Count c;
  c.sub(VALUE);
  EXPECT_EQ(c.get(), -VALUE);
}
