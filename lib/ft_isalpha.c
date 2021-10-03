/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@42ABUDHABI.AE>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:23:09 by oumali            #+#    #+#             */
/*   Updated: 2021/09/26 17:09:55 by oumali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include
int	ft_isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
int main()
{
	int a = ft_isalpha('.');

	if (a == 1)
	printf("true");
	else
	printf("false");
	return 0;
}