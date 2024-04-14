/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadiaman <yadiaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:08:13 by yadiaman          #+#    #+#             */
/*   Updated: 2024/04/14 15:20:20 by yadiaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

size_t ft_strlen(const char *str)
{
    size_t i;

    i = 0;

    while(str[i] != '\0')
    {
        i++;   
    }
    return(i);   
}


/* int main()
{
    const char *cadena1 = "Que pasa tronco";

    printf("Longitud de cadena1: %zu", ft_strlen(cadena1));
}
*/