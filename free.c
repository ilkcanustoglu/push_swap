/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iustoglu <iustoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 13:58:37 by iustoglu          #+#    #+#             */
/*   Updated: 2022/11/14 16:46:51 by iustoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_without_free(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

void	error(t_stack *data)
{
	ft_free(data);
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

void	ft_free(t_stack *data)
{
	int	i;

	i = 0;
	if (data->a_s)
		free (data->a_s);
	if (data->b_s)
		free (data->b_s);
	if (data->sorted)
		free (data->sorted);
	while (data->numbers[i])
	{
		free(data->numbers[i]);
		i++;
	}
	free(data->numbers);
	free (data);
}
