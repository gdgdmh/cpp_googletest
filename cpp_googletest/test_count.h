#pragma once

#include "gtest/gtest.h"


namespace test {

namespace googletest {

// 複数のテストで同じデータ設定を使うためのクラス
// (testing::Testを継承してSetUpをoverride)
class TestCount : public testing::Test {

protected:
  // テストの準備(テストの直前に呼び出される)
  virtual void SetUp() override;

  int test_value_1_;
  int test_value_2_;
  int test_value_3_;
  int initialize_value_;
};

}

}
