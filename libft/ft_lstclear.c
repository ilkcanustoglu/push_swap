/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iustoglu <iustoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:44:06 by iustoglu          #+#    #+#             */
/*   Updated: 2022/11/14 16:58:55 by iustoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*a;
	t_list	*tmp;

	a = (*lst);
	while (a != NULL)
	{
		tmp = a->next;
		ft_lstdelone(a, del);
		a = tmp;
	}
	(*lst) = NULL;
}
