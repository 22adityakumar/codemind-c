#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    scanf("%[^
]s", str1);
    while (getchar() != '
');
    scanf("%[^
]s", str2);
    if (strcmp(str1, str2) == 0) {
        printf("Strings are Equal
");
    } else {
        printf("Strings are not Equal
");
    }

    return 0;
}
