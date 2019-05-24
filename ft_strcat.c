/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 13:32:11 by jyoung            #+#    #+#             */
/*   Updated: 2019/05/17 13:22:32 by jyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int index1;
	int index2;

	index1 = 0;
	while (dest[index1] != '\0')
		index1 = index1 + 1;
	index2 = 0;
	while (src[index2] != '\0')
	{
		dest[index1] = src[index2];
		index2 = index2 + 1;
		index1 = index1 + 1;
	}
	dest[index1] = '\0';
	return (dest);
}
