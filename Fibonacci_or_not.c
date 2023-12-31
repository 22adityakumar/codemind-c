#include <stdio.h>
#include <math.h>

int main() {
    int number;
    scanf("%d", &number);
    int term1 = 5 * number * number + 4;
    int term2 = 5 * number * number - 4;

    int sqrtTerm1 = sqrt(term1);
    int sqrtTerm2 = sqrt(term2);

    if ((sqrtTerm1 * sqrtTerm1 == term1) || (sqrtTerm2 * sqrtTerm2 == term2)) {
        printf("True
");
    } else {
        printf("False
");
    }

    return 0;
}
