/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <athirion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:22:59 by athirion          #+#    #+#             */
/*   Updated: 2021/11/25 14:21:35 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			index;
	char			*temp;
	unsigned char	uc;

	uc = (unsigned int) c;
	if (!b)
		return (b);
	temp = b;
	index = 0;
	while (index < len)
		temp[index ++] = uc;
	return (b);
}
