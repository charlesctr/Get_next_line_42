/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chcoutur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:41:11 by chcoutur          #+#    #+#             */
/*   Updated: 2018/11/26 10:01:26 by chcoutur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t	i;
	char	*b_cpy;

	b_cpy = (char *)b;
	i = 0;
	while (i < n)
	{
		b_cpy[i] = (unsigned char)c;
		i++;
	}
	return (b_cpy);
}
