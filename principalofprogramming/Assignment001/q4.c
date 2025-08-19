/*
Create struct Op { const char *name; int (*fn)(int,int); }. 
Build an array of operations (add, sub, mul, max) and call them via pointers. Print results.
*/
#include <stdio.h>


struct Op {
    const char *name;
    int (*fn)(int, int);
};


int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int max(int a, int b) { return (a > b) ? a : b; }

int main() {

    struct Op operations[] = {
        {"Addition", add},
        {"Subtraction", sub},
        {"Multiplication", mul},
        {"Maximum", max}
    };

    int x = 10, y = 5;
    int numOps = sizeof(operations) / sizeof(operations[0]);


    for (int i = 0; i < numOps; i++) {
        printf("%s of %d and %d = %d\n",
               operations[i].name,
               x, y,
               operations[i].fn(x, y));
    }

    return 0;
}

/*
------OUTPUT------
Addition of 10 and 5 = 15
Subtraction of 10 and 5 = 5
Multiplication of 10 and 5 = 50
Maximum of 10 and 5 = 10
*/
