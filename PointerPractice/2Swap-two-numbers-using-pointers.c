#include <stdio.h>

// Q)Swap two numbers using pointers.

void swapNums(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 5;
    int b = 6;
    printf("the value of a and b is : %d ,%d\n", a, b);
    swapNums(&a, &b);
    printf("the value of a and b is : %d ,%d\n", a, b);
}