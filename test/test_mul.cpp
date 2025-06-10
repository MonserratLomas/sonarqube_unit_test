#include <cassert>
#include "../mul.h"

int main() {
    assert(mul(3, 4) == 12);
    assert(mul(0, 5) == 0);
    assert(mul(-2, 3) == -6);
    assert(mul(-3, -3) == 9);
    return 0;
}
