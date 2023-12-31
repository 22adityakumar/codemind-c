#include <stdio.h>
#include <ctype.h>
int countWords(char *str) {
    int wordCount = 0;
    int inWord = 0;
    while (*str) 
    {
        if (isspace(*str)) 
        {
            if (inWord) 
            {
                wordCount++;
                inWord = 0; 
            }
        } 
        else 
        {
            inWord = 1;
        }

        str++;
    }

    if (inWord) 
    {
        wordCount++;
    }

    return wordCount;
}

int main() {
    char inputString[100];
    scanf("%[^
]s", inputString);
    int result = countWords(inputString);
    printf("%d
", result);
    return 0;
}
