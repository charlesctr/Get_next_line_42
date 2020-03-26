/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chcoutur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:35:56 by chcoutur          #+#    #+#             */
/*   Updated: 2018/11/26 09:59:17 by chcoutur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_len(int n)
{
	int		i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = ft_len(n);
	str = NULL;
	if (n != -2147483648)
	{
		if (!(str = (char*)malloc(sizeof(char) * (i + 1))))
			return (NULL);
		if (n < 0)
		{
			str[0] = '-';
			n = -n;
		}
		if (n == 0)
			str[0] = '0';
		str[i] = '\0';
		while (n)
		{
			str[--i] = n % 10 + '0';
			n = n / 10;
		}
		return (str);
	}
	return (ft_strdup("-2147483648"));
}
