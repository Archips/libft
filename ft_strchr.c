/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:46:44 by athirion          #+#    #+#             */
/*   Updated: 2021/11/26 10:04:49 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				index;
	unsigned char	un;

	index = 0;
	un = (unsigned char) c;
	while (s[index])
	{
		if (s[index] == un)
			return ((char *)(s + index));
		index ++;
	}
	if (s[index] == '\0' && un == '\0')
		return ((char *)(s + index));
	return (0);
}
