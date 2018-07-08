#include <stdio.h>

int f(int x) {
    int i;
    char buf[100];
    buf[0] = 0;
    buf[100] = 0;
    for (i = 0; i < 101; i++) {
        buf[i] = 0;
    }
    buf[i] = 0;
    return 0;
}
