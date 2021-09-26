#include "profile.hpp"
extern profile foo_cpp;

void foo(int x) { foo_cpp.count(__LINE__,"foo");
    ++x; foo_cpp.count(__LINE__);
}

