#include <stdio.h>
int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    while (num1 != num2) {
        if (num1 > num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }
    }
    printf("%d
", num1);

    return 0;
}
