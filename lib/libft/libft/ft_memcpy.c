/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <apple@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 10:40:56 by oumali            #+#    #+#             */
/*   Updated: 2021/10/06 18:59:13 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t num)
{
    char *cdest = (char *) dest;
    char *csrc = (char *) src;
    size_t a;

    a = 0;
    while (a != num)
    {
        if ((cdest[a] != '\0') || (csrc[a] != '\0'))
        {
            cdest[a] = csrc[a];
            a++;
        }
    }
    return dest;
}
