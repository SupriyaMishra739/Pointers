#include <stdio.h>

// Q)Count the number of vowels in a string using a character pointer.

int countVowels(char *p)
{
    int count = 0;
    printf("the value of p is %c\n", *p);
    while (*p != '\0')
    {
        if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u')
        {
            count++;
        }
        p = p + 1;
    }
    return count;
}

int main()
{
    char str[] = "hellouuip";
    char *p;
    p = str;
    int res = countVowels(p);

    printf("the result  is %d\n", res);
}