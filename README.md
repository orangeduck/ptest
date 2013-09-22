ptest
=====

ptest is a DRY (Don't Repeat Yourself) Microtesting framework for C.

It must be compiled to GNU99 standard or any other standard that allows for nested function declarations.

Example
-------

```c
#include "ptest.h

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
    PT_ASSERT("string");
  }
  
  PT_TEST(test_failure) {
    PT_ASSERT(false);
  }  
}

int main(int argc, char** argv) {
  pt_add_suite(suite_basic);
  pt_add_suite(suite_other);
  pt_run();
}
```

Output
------

![Output](https://raw.github.com/orangeduck/ptest/master/output.png)

License
-------

Work is Licensed under BSD3

Copyright (c) 2013, Daniel Holden
All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
* Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
* Neither the name of the ptest nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.


