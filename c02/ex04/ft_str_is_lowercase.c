/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaudich <egaudich@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:52:40 by egaudich          #+#    #+#             */
/*   Updated: 2025/07/13 16:52:40 by egaudich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (!(str[i] >= 'a' && str[i] <= 'z'))
            return (0);
        i++;
    }
    return (1);
}

// int main(void)
// {
//     int test = ft_str_is_lowercase("TEST12");
//     printf("%i", test);
//     return (0);
// }