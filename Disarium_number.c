#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, digitCount, sum, temp;
    scanf("%d", &number);
    originalNumber = number;
    digitCount = 0;
    temp = number;
    while (temp > 0) {
        digitCount++;
        temp /= 10;
    }
    sum = 0;
    temp = number;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digitCount);
        temp /= 10;
        digitCount--;
    }
    if (sum == originalNumber) {
        printf("True
");
    } else {
        printf("False
");
    }

    return 0;
}
