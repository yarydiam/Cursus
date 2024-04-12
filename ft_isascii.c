/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadiaman <yadiaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:30:35 by yadiaman          #+#    #+#             */
/*   Updated: 2024/04/12 12:43:30 by yadiaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int c)
{
    if ((c >= 0 && c <= 127))
        return(1);
    else 
        return(0);
}

/* #include <stdio.h>
int main(void)
{
    char c = 'ƒ';
    printf("%d", ft_isascii(c));
    return(0);
}
*/
