/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadiaman <yadiaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:42:36 by yadiaman          #+#    #+#             */
/*   Updated: 2024/04/10 13:15:11 by yadiaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return(1);
    else if ((c >= '0' && c <= '9'))
        return(1);
    else 
        return(0);
}

/* #include <stdio.h>

int main(void)
{
    char c = 'Z';
    printf("%d", ft_isalnum(c));
    return(0);
}
*/