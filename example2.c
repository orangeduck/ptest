#include <stdbool.h>

#include "ptest.h"

void test_maths(void) {
  int x = 3;
  int y = 11;

  PT_ASSERT(1 + 1 == 2);
  PT_ASSERT(2 + 2 == 4);
  PT_ASSERT(y - x == 8);    
}

void test_strings(void) { 
  PT_ASSERT(strcmp("x", "x") == 0);
  PT_ASSERT_STR_EQ("x", "x");
}

void test_stuff(void) { 
  PT_ASSERT(1);
  PT_ASSERT(!0);
  PT_ASSERT("string" != NULL);
}

void test_failure(void) {
  PT_ASSERT(false == true);
}

void suite_basic(void) {
  pt_add_test(test_maths, "Test Maths", "Suite Basic");
  pt_add_test(test_strings, "Test Strings", "Suite Basic");
}

void suite_other(void) {
  pt_add_test(test_stuff, "Test Stuff", "Suite Other");
  pt_add_test(test_failure, "Test Failure", "Suite Other");
}

int main(int argc, char** argv) {
  pt_add_suite(suite_basic);
  pt_add_suite(suite_other);
  return pt_run();
}
