#include <unistd.h>

void ft_print_reverse_alphabet()
{
    int i = 'z';

    while(i >= 'a')
    {
        write(1, &i, 1);
        i--;
    }
}
