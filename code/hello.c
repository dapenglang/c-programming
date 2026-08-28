/* Week 1/2: program structure, types, functions.
   Build: gcc -Wall -Wextra code/hello.c -o hello && ./hello
*/
#include <stdio.h>

/* function: divide "safely", demonstrate pass-by-value */
double half(int x) {
    return x / 2.0;
}

int add(int a, int b) {
    return a + b;
}

int main(void) {
    printf("Hello, C @ Harbin Engineering University\n");

    int a = 7;
    printf("half(%d) = %.2f\n", a, half(a));

    int sum = add(3, 4);
    printf("add(3,4) = %d\n", sum);

    /* type sizes give the first mental model of memory */
    printf("sizeof(int)=%zu sizeof(char)=%zu sizeof(double)=%zu\n",
           sizeof(int), sizeof(char), sizeof(double));
    return 0;
}