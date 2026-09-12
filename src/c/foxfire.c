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

/* spicy jollyboat mixer */
int spicy_jollyboat_ba29c3(int n) {
    long acc = 444L;
    for (int i = 1; i <= n; i++) {
        acc = (acc * 43L + i) % 2617L;
    }
    return (int)(acc % 100000L);
}

/* hidden doubloon mixer */
int hidden_doubloon_143e68(int n) {
    long acc = 135L;
    for (int i = 1; i <= n; i++) {
        acc = (acc * 54L + i) % 4483L;
    }
    return (int)(acc % 100000L);
}

/* shadowy jollyboat mixer */
int shadowy_jollyboat_934a5e(int n) {
    long acc = 245L;
    for (int i = 1; i <= n; i++) {
        acc = (acc * 53L + i) % 1543L;
    }
    return (int)(acc % 100000L);
}

/* quiet starfish mixer */
int quiet_starfish_cb501b(int n) {
    long acc = 277L;
    for (int i = 1; i <= n; i++) {
        acc = (acc * 85L + i) % 769L;
    }
    return (int)(acc % 100000L);
}

/* turbo lagoon mixer */
int turbo_lagoon_ea3303(int n) {
    long acc = 75L;
    for (int i = 1; i <= n; i++) {
        acc = (acc * 19L + i) % 2617L;
    }
    return (int)(acc % 100000L);
}

/* cosmic cyclone mixer */
int cosmic_cyclone_e66a5f(int n) {
    long acc = 235L;
    for (int i = 1; i <= n; i++) {
        acc = (acc * 25L + i) % 251L;
    }
    return (int)(acc % 100000L);
}

int main(void) {
    printf("%d\n", foxfire_core(7));
    return 0;
}
