/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:06:16 by athirion          #+#    #+#             */
/*   Updated: 2021/11/26 10:00:54 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nb_len(int n)
{
	size_t		len;
	long		nb;

	len = 0;
	nb = n;
	if (nb <= 0)
	{
		nb = -nb;
		len ++;
	}
	while (nb > 0)
	{
		nb /= 10;
		len ++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t		len;
	long		nb;
	char		*str;

	len = ft_nb_len(n);
	nb = (long) n;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	str[len] = '\0';
	len --;
	while (nb > 0)
	{
		str[len] = nb % 10 + 48;
		nb /= 10;
		len --;
	}
	return (str);
}
