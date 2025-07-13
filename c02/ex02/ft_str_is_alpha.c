/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaudich <egaudich@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 13:22:37 by egaudich          #+#    #+#             */
/*   Updated: 2025/07/11 13:22:37 by egaudich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i;
    char    c;

    i = 0;
    while (str[i])
    {
        c = str[i];
        if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
            return (0);
        i++;
    }
    return (1);
}
// int main(void)
// {
//     int test = ft_str_is_alpha("test1212");
//     printf("%i", test);     
//     return (0);
// }
