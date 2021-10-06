/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@42ABUDHABI.AE>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 10:42:59 by oumali            #+#    #+#             */
/*   Updated: 2021/10/06 10:43:32 by oumali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t num)
{
    char *cdest; 
    char *csrc;
    size_t a;

    cdest = (char *) dest;
    csrc = (char *) src;
    if (dest < src)
    {
        a = 0;
        while (a != num)
        {
            cdest[a] = csrc[a];
            a++;
        }
    }
    else
    {
        a = num - 1;
        while (a > 0)
        {
            cdest[a] = csrc[a];
            a--;
        }
    }
    return dest;
}
