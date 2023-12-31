#include <stdio.h>
int isVowel(char c) 
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}
int countVowels(char *str) 
{
    int count = 0;
    while (*str) 
    {
        if (isVowel(*str)) 
        {
            count++;
        }
        str++;
    }

    return count;
}
int main() 
{
    char inputString[100];
    scanf("%[^
]s",inputString);
    int result = countVowels(inputString);
    printf("%d
",result);
    return 0;
}
