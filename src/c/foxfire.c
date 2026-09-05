/* FOXFIRE core */
#include <stdio.h>

int foxfire_core(int n) {
    long acc = 17L;
    for (int i = 1; i <= n; i++) {
        acc = (acc * 31L + i) % 997L;
    }
    return (int)(acc % 100000L);
}

/* --- mixers --- */

/* lunar mast mixer */
int lunar_mast_441522(int n) {
    long acc = 112L;
    for (int i = 1; i <= n; i++) {
        acc = (acc * 70L + i) % 997L;
    }
    return (int)(acc % 100000L);
}

int main(void) {
    printf("%d\n", foxfire_core(7));
    return 0;
}
