/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iustoglu <iustoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:40:31 by iustoglu          #+#    #+#             */
/*   Updated: 2022/11/14 16:58:37 by iustoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (new == NULL)
		return ;
	if ((*lst) == NULL)
	{
		(*lst) = new;
		return ;
	}
	tmp = (*lst);
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
}
