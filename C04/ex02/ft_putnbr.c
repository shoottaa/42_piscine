/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaudich <egaudich@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:17:30 by egaudich          #+#    #+#             */
/*   Updated: 2025/07/16 11:17:30 by egaudich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		// Cas spécial, on l'écrit directement
		write(1, "-2147483648", 11);
		return;
	}
	if (nb < 0)
	{
		ft_putchar('-');         // Dire "moins"
		nb = -nb;                // On le rend positif
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);      // On dit les chiffres avant
	}
	ft_putchar(nb % 10 + '0');  // On dit le dernier chiffre
}


// int	main(void)
// {
// 	ft_putnbr(26);
// 	return (0);
// }
