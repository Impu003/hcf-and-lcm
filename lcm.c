#include <stdio.h>
int hcf(int a, int b) {
    if (b == 0)
        return a;
    return hcf(b, a % b);
}
int lcm(int a, int b) {
    return (a * b) / hcf(a, b);
}
