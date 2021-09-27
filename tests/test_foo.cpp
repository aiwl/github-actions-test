#include <cstdio>
#include <cstdlib>
#include <foo/foo.hpp>

#define ASSERT(expr) do { if (!(expr)) { std::fprintf(stderr, "Test failed\n"); exit(1); } } while(0)

static void
test_foo()
{
    ASSERT(42 == foo());
}

int
main(int argc, char **argv)
{
    test_foo();
    return 0;
}
