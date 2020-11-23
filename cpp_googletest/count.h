#pragma once

namespace test {

namespace googletest {

class Count {
public:
  Count();

  void set(int value);
  int get();
  void add(int value);
  void sub(int value);

private:
  int count_;

};

}

}
