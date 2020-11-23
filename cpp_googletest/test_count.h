#pragma once

#include "gtest/gtest.h"


namespace test {

namespace googletest {

// �����̃e�X�g�œ����f�[�^�ݒ���g�����߂̃N���X
// (testing::Test���p������SetUp��override)
class TestCount : public testing::Test {

protected:
  // �e�X�g�̏���(�e�X�g�̒��O�ɌĂяo�����)
  virtual void SetUp() override;

  int test_value_1_;
  int test_value_2_;
  int test_value_3_;
  int initialize_value_;
};

}

}
