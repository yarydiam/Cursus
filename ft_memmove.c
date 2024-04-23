/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadiaman <yadiaman@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:54:13 by yadiaman          #+#    #+#             */
/*   Updated: 2024/04/23 12:54:13 by yadiaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;
    char *dest;
    char *source;

    dest = (char *)dst;
    source = (char *)src;

    if ( !dst && !src)
        return (NULL);
    if (dest > source)
    {
        while (len-- > 0)
        dest[len] = source[len];
    }
    else
    {
        while (i < len)
        {
            dest[i] = source[i];
            i++;
        }
    }
    return (dst);
}

int main() {
    // Definimos un array de caracteres de prueba
    char src[] = "Hello, world!";
    
    // Creamos un buffer de destino donde copiaremos los datos
    char dest[20];

    // Copiamos los primeros 5 caracteres de src a dest usando la función ft_memmove
    ft_memmove(dest, src, 5);

    // Agregamos un terminador nulo para imprimirlo correctamente
    dest[5] = '\0';

    // Imprimimos el resultado
    printf("Resultado: %s\n", dest);

    return 0;
}

