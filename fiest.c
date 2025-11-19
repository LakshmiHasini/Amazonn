#include <stdio.h>
int main() {
    int x = -3, y = 6, z = -9;

x = ++y - z-- + x++ - --z + ++x - y++ + --x;
y = x-- + ++z - y++ + --x - ++y + z-- - --z;
z = ++x + --y - z++ + x-- - ++z + y++ - --x;

printf("x = %d\ny = %d\nz = %d\n", x, y, z);

    return 0;
}