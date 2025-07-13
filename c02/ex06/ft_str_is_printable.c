/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaudich <egaudich@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 17:26:01 by egaudich          #+#    #+#             */
/*   Updated: 2025/07/13 17:26:01 by egaudich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        if (!(str[i] >= 32 && str[i] <= 126))
            return (0);
        i++;
    }
    return (1);
}

// int main(void)
// {
//     int test = ft_str_is_printable("test");
//     printf("%i", test);
//     return (0);
// }