#include <unistd.h>

void ft_is_negative(int n) 
{
    if (n < 0) {
        write(1, "N", 1);
        write(1, "\n", 1);

    } else {
        write(1, "P", 1);
        write(1, "\n", 1);
    }
}

int main() 
{
    ft_is_negative(5);
}