/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 13:44:47 by jyoung            #+#    #+#             */
/*   Updated: 2019/05/20 14:24:37 by jyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	size_t		index1;
	size_t		index2;

	index1 = 0;
	while (dest[index1] != '\0')
		index1 = index1 + 1;
	index2 = 0;
	while (src[index2] != '\0' && index2 < nb)
	{
		dest[index1] = src[index2];
		index2 = index2 + 1;
		index1 = index1 + 1;
	}
	dest[index1] = '\0';
	return (dest);
}
