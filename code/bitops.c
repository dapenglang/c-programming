/* Week 6: bit tricks — the foundation of flags, permission bits, and compact state.
   Build: gcc -Wall -Wextra code/bitops.c -o bitops && ./bitops
*/
#include <stdio.h>

#define FLAG_A (1u << 0)   /* 0b0001 */
#define FLAG_B (1u << 1)   /* 0b0010 */
#define FLAG_C (1u << 2)   /* 0b0100 */

int main(void) {
    unsigned flags = 0;

    flags |= FLAG_A | FLAG_C;   /* set A and C */
    printf("flags after set = 0x%x\n", flags);

    flags &= ~FLAG_A;           /* clear A */
    printf("flags after clear A = 0x%x\n", flags);

    int has_b = (flags & FLAG_B) != 0;
    printf("has B? %s\n", has_b ? "yes" : "no");

    /* count bits set in a byte (Brian Kernighan's trick) */
    unsigned x = 0b11011000u, count = 0;
    for (unsigned t = x; t; t &= t - 1)
        ++count;
    printf("popcount(0x%x) = %u\n", x, count);
    return 0;
}