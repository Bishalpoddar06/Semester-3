/*
Create struct Op { const char *name; int (*fn)(int,int); }. Build an array of
operations (add, sub, mul, max) and call them via pointers. Print results.
*/

#include <stdio.h>

struct Op {
    const char *name;
    int (*fn)(int, int);
};

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int max(int a, int b) { return a > b ? a : b; }

int main() {
    struct Op ops[] = {{"add", add}, {"sub", sub}, {"mul", mul}, {"max", max}};
    int x = 10, y = 5;
    for (int i = 0; i < 4; i++) {
        printf("%s(%d, %d) = %d\n", ops[i].name, x, y, ops[i].fn(x, y));
    }
    return 0;
}

/* OUTPUT
add(10, 5) = 15
sub(10, 5) = 5
mul(10, 5) = 50
max(10, 5) = 10
*/