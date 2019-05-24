/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 11:03:48 by jyoung            #+#    #+#             */
/*   Updated: 2019/05/21 10:29:31 by jyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	size_t j;
	size_t l;
	size_t k;

	i = 0;
	l = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (s1[i] && l <= len)
	{
		j = 0;
		k = i;
		while (s1[i] && s2[j] && s1[i] == s2[j] && i < len)
		{
			i++;
			j++;
		}
		if (s2[j] == '\0')
			return ((char *)&s1[k]);
		i = k;
		i++;
		l++;
	}
	return (NULL);
}
