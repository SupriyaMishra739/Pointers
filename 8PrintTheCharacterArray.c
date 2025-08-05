#include <stdio.h>

void print(char *C, int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("%c", C[i]);
    }
}

int main()
{
    char C[] = "Hello"; // in character literal there is implicit addition of the \0
    int size = sizeof(C) / sizeof(C[0]);
    print(C, size);
}