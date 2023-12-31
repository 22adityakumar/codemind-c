#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) {
        char currentChar = 'A'+ i-1 ;
        for (int j = 1; j <= i; j++) {
            printf("%c ", currentChar);
        }
        printf("
");
    }

    return 0;
}
