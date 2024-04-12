/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadiaman <yadiaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:57:37 by yadiaman          #+#    #+#             */
/*   Updated: 2024/04/12 13:06:03 by yadiaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int c)
{
    if ((c >= 32 && c <= 126))
        return(1);
    else
        return(0);
}

/* #include <stdio.h>
int main(void)
{
    char c = 'z';
    printf("%d", ft_isprint(c));
    return(0);
} */