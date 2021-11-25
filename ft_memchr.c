/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:38:36 by athirion          #+#    #+#             */
/*   Updated: 2021/11/25 16:17:24 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	un;

	i = 0;
	str = (unsigned char *) s;
	un = (unsigned char) c;
	while (str[i] != un && n--)
		i++;
	if (str[i] == un && n)
		return (str + i);
	return (0);
}
