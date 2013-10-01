#include "ptest.h"

PT_SUITE(suite_basic) {
  
  PT_TEST(test_maths) {
    int x = 3;
    int y = 11;
  
    PT_ASSERT(1 + 1 == 2);
    PT_ASSERT(2 + 2 == 4);
    PT_ASSERT(y - x == 8);    
  }
  
  PT_TEST(test_strings) { 
    PT_ASSERT(strcmp("x", "x") == 0);
    PT_ASSERT_STR_EQ("x", "x");
  }
}

PT_SUITE(suite_other) {
  
  PT_TEST(test_stuff) { 
    PT_ASSERT(1);
    PT_ASSERT(!0);
    PT_ASSERT("string" != NULL);
  }
  
  PT_TEST(test_failure) {
    PT_ASSERT(0);
  }  
}

int main(int argc, char** argv) {
  pt_add_suite(suite_basic);
  pt_add_suite(suite_other);
  return pt_run();
}