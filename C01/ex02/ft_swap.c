/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaudich <egaudich@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 12:16:37 by egaudich          #+#    #+#             */
/*   Updated: 2025/07/10 12:32:20 by egaudich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	last_a;
	int	last_b;

	last_a = *a;
	last_b = *b;
	*a = last_b;
	*b = last_a;
}

//int	main(void)
//{
//	int	d;
//	int	e;

//	d = 41;
//	e = 42;
//	ft_swap(&d, &e);
//	printf("%i", d);
//	printf("%i", e);
//	return (0);
//}
