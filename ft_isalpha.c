/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadiaman <yadiaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:40:34 by yadiaman          #+#    #+#             */
/*   Updated: 2024/04/09 21:23:49 by yadiaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    return (1);

    return (0);
}

/* #include <stdio.h>

int main(void)
{
    char c = 'a';
    printf("%d", ft_isalpha(c));
    return(0);

}
*/