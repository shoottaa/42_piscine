/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaudich <egaudich@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 14:13:41 by egaudich          #+#    #+#             */
/*   Updated: 2025/07/10 15:02:19 by egaudich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	z;
	int	t;

	a = 0;
	z = size - 1;

	while (a < z)
	{
		t = tab[a];
		tab[a] = tab[z];
		tab[z] = t;
		a++;
		z--;
	}
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4};
	int size = 4;
	int	i = 0;
	ft_rev_int_tab(&tab[i], size);

	while (i < size)
	{
		printf("%i", tab[i]);
		i++;
	}
	return (0);
}
