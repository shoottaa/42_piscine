/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaudich <egaudich@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 12:50:00 by egaudich          #+#    #+#             */
/*   Updated: 2025/07/10 12:57:19 by egaudich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	last_a;
	int	last_b;

	last_a = *a;
	last_b = *b;
	*a = last_a / last_b;
	*b = last_a % last_b;
}

//int	main(void)
//{
//	int	a;
//	int	b;

//	a = 42;
//	b = 5;
//	ft_ultimate_div_mod(&a, &b);
//	printf("%i", a);
//	printf("%s", "\n");
//	printf("%i", b);

//}