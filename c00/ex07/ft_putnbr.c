#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	count_digits(int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

void	ft_div_print(int nb)
{
	int	arr[12];
	int	i;
	int	j;
	int	digits;

	digits = count_digits(nb);
	i = digits - 1;
	while (nb)
	{
		arr[i] = nb % 10;
		nb /= 10;
		i--;
	}
	j = 0;
	while (j < digits)
	{
		ft_putchar(arr[j] + '0');
		j++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb < 10)
		ft_putchar(nb + '0');
	else
		ft_div_print(nb);
}
