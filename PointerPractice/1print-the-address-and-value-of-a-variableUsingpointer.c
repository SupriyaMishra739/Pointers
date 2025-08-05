#include <stdio.h>

// Q)Write a program to print the address and value of a variable using a pointer.

int main()
{
    int a = 5;
    int *p = &a;

    printf("the adddrees of a is :%d\n", &a);
    printf("the adddrees of a is :%d\n", p);

    printf("the value of a is :%d\n", *p);
}