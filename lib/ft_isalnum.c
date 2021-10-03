/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@42ABUDHABI.AE>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:24:05 by oumali            #+#    #+#             */
/*   Updated: 2021/09/26 17:27:33 by oumali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_isalnum(int c)
{
	if (c >= 65 && c <= 122 || c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int main()
{
	int a = ft_isalnum('b');

	if (a == 1)
	printf("true");
	else
	printf("false");
	return 0;
}