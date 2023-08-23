#include <criterion/criterion.h>
#include <criterion/new/assert.h>


void setup() {}


void teardown() {}


Test(test_main, do_nothing_test, .init=setup, .fini=teardown)
{
    cr_assert(1 == 1, "I'm testing nothing");
}

