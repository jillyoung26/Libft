/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 12:18:08 by jyoung            #+#    #+#             */
/*   Updated: 2019/05/22 17:04:33 by jyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			*des;
	const char		*source;

	i = 0;
	des = (char *)dest;
	source = (char *)src;
	if (n != 0 && !des && !source)
		return (NULL);
	while (i < n)
	{
		des[i] = source[i];
		i++;
	}
	return (dest);
}
