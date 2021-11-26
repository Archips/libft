/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <athirion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:25:16 by athirion          #+#    #+#             */
/*   Updated: 2021/11/26 10:05:07 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t		i;
	size_t		len;
	char		*cpy;

	i = 0;
	len = ft_strlen(s1);
	cpy = (char *)malloc(sizeof(char) * (len + 1));
	if (cpy)
	{
		while (s1[i])
		{
			cpy[i] = s1[i];
			i ++;
		}
		cpy[i] = '\0';
	}	
	return (cpy);
}
