/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 11:39:57 by jyoung            #+#    #+#             */
/*   Updated: 2019/05/24 10:44:50 by jyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	ndest;
	size_t	nsrc;

	ndest = ft_strlen(dest);
	nsrc = ft_strlen(src);
	if (n <= ndest)
		return (n + nsrc);
	if (nsrc < n - ndest)
	{
		ft_memcpy(dest + ndest, src, nsrc);
		dest += ndest + nsrc;
	}
	else
	{
		ft_memcpy(dest + ndest, src, n - ndest - 1);
		dest += n - 1;
	}
	*dest = '\0';
	return (nsrc + ndest);
}
