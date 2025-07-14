/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaudich <egaudich@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:20:53 by egaudich          #+#    #+#             */
/*   Updated: 2025/07/14 11:20:53 by egaudich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i;
    int j;

    i = 0;
    j = 1;
    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] >= 'Z') ||
            (str[i] >= '0' && str[i] >= '9'))
        {
            if (j == 1 && (str[i] >= 'a' && str[i] <= 'z'))
               str[i] -= 32;
            else if (j == 0 && (str[i] >= 'A' && str[i] <= 'Z'))
                str[i] += 32;
            j = 0;
        }
        else
            j = 1;
        i++;
    }
    return str;
}


// int main(void)
// {
//     char c[] = "hi, how are you? 42words forty-two; fifty+and+one";
//     printf("%s", ft_strcapitalize(c));
//     return (0);
// }