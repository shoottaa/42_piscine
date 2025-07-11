#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int lastA = *a;
    int lastB = *b;

    *a = lastB;
    *b = lastA;
}

int main(void)
{
    int d = 5;
    int e = 10;

    ft_swap(&d, &e);
    printf("%i", d);
    printf("%i", e);
    return (0);
}