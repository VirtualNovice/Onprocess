/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@42ABUDHABI.AE>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 10:40:56 by oumali            #+#    #+#             */
/*   Updated: 2021/10/06 10:42:06 by oumali           ###   ########.fr       */
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
        cdest[a] = csrc[a];
        a++;
    }
    return dest;
}
