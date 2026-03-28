// Stores and prints an integer's address
// A pointer is a variable that holds a memory address.
// int *p means "p is a pointer to an int".
#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;

    printf("%p\n", (void*)p);

    return 0;
}