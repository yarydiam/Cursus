/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadiaman <yadiaman@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 11:36:20 by yadiaman          #+#    #+#             */
/*   Updated: 2024/05/10 11:36:20 by yadiaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *cpy;
    size_t len;
    size_t i;

    len = ft_strlen(s1);
    cpy = (char *)malloc(sizeo(char) * (len + 1));
    if(!cpy)
        return (NULL);
    i = 0;
    while ( i < len )
    {
        cpy[i] = s1[i];
        i++;
    }
    cpy[len] = '\0';
    return (cpy);
}