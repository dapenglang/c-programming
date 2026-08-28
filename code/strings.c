/* Week 3: arrays, strings, and the '\0' terminator.
   Build: gcc -Wall -Wextra code/strings.c -o strings && ./strings
*/
#include <stdio.h>
#include <string.h>

/* length the C way: walk until the terminating NUL */
size_t my_strlen(const char *s) {
    size_t n = 0;
    while (s[n] != '\0')
        ++n;
    return n;
}

/* copy safely given a known buffer size (note the simpler, standard way is strncpy) */
void my_strcpy(char *dst, size_t cap, const char *src) {
    size_t i = 0;
    while (src[i] != '\0' && i + 1 < cap) {
        dst[i] = src[i];
        ++i;
    }
    dst[i] = '\0';
}

int main(void) {
    char word[] = "harbin";
    printf("len(\"%s\") = %zu  (strlen gives %zu)\n",
           word, my_strlen(word), strlen(word));

    /* off-by-one: 's' needs 2 bytes, dst has room for exactly 4 incl. NUL */
    char buf[4];
    my_strcpy(buf, sizeof buf, "hi");
    printf("buf = \"%s\"\n", buf);

    /* vim: no trailing whitespace in cleaned s*/
    return 0;
}