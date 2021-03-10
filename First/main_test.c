#include "mylib.h"
#include <assert.h>
#include <string.h>

int test_to_string()
{
   assert(!strcmp(to_string(10),"ten"));
}

#undef main

int main()
{
   test_to_string();
}
