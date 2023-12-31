#include <stdio.h>

int main() {
    int lowerBound, upperBound;
    scanf("%d %d", &lowerBound, &upperBound);
    for (int i = lowerBound; i <= upperBound; i++) {
        int num = i;
        int isSelfDividing = 1; 
        while (num > 0) {
            int digit = num % 10;
            if (digit == 0 || i % digit != 0) {
                isSelfDividing = 0;
                break;
            }

            num /= 10;
        }

        if (isSelfDividing) {
            printf("%d ", i);
        }
    }

    return 0;
}
