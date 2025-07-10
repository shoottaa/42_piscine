/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaudich <egaudich@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 12:34:14 by egaudich          #+#    #+#             */
/*   Updated: 2025/07/10 12:49:07 by egaudich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

//int	main(void)
//{
//	int	a;
//	int	b;
//	int	div;
//	int	mod;

//	a = 42;
//	b = 5;
//	ft_div_mod(a, b, &div, &mod);
//	printf("%i", div);
//	printf("%s", "\n");
//	printf("%i", mod);
//}
