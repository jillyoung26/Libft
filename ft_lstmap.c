/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 10:23:46 by jyoung            #+#    #+#             */
/*   Updated: 2019/05/24 15:10:47 by jyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*prem;

	if (lst && f)
	{
		prem = NULL;
		new = f(lst);
		prem = new;
		while (lst->next != NULL)
		{
			new->next = f(lst->next);
			new = new->next;
			lst = lst->next;
		}
		return (prem);
	}
	return (NULL);
}
