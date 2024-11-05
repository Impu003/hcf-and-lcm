#include <stdio.h>
int hcf(int a, int b) {
    if (b == 0)
        return a;
    return hcf(b, a % b);
}
int lcm(int a, int b) {
    return (a * b) / hcf(a, b);
}
int main() {
    int num1, num2, h, l;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    h = hcf(num1, num2);
    l = lcm(num1, num2);
printf("HCF of %d and %d is: %d\n", num1, num2, h);
    printf("LCM of %d and %d is: %d\n", num1, num2, l);
    return 0;
}
