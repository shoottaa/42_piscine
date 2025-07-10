/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_print_comb2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaudich <egaudich@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:25:55 by egaudich          #+#    #+#             */
/*   Updated: 2025/07/09 23:43:29 by egaudich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_numbers(int n)
{
	ft_putchar(n/10 + '0');
	ft_putchar(n%10 + '0');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;

	while (a <= 98 && a < b)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_numbers(a);
			ft_putchar(' ');
			ft_numbers(b);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

//int	main(void)
//{
//	ft_print_comb2();
//	return (0);
//}

