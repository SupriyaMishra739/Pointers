#include <stdio.h>

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int *p = A;
    printf("the address of 1st element of array is: %d\n", A);
    printf("the address of 1st element of array is: %d\n", p);
    printf("the value of 1st element of array is: %d\n", *A);
    printf("the value of 1st element of array is: %d\n", *p);
}