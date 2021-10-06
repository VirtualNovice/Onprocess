/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@42ABUDHABI.AE>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 09:41:35 by oumali            #+#    #+#             */
/*   Updated: 2021/10/06 10:51:27 by oumali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void	*ft_memset(void *b, int c, size_t len)
{
    unsigned char *ptr = b;
    size_t a;

    a = 0;
    while(a < len)
    {
        ptr[a] = (unsigned char) c;
        a++;
    }
    return (b);
}
