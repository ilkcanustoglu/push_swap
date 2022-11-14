/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iustoglu <iustoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 19:24:53 by iustoglu          #+#    #+#             */
/*   Updated: 2022/11/14 17:03:08 by iustoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		n;
	int		l;

	l = ft_strlen(s1);
	n = 0;
	ptr = malloc(sizeof(char) * l + 1);
	if (ptr == NULL)
		return (NULL);
	while (s1[n])
	{
		if (s1[n] != 13)
			ptr[n] = s1[n];
		else
		{
			ptr[n] = '\n';
			ptr[n + 1] = '\0';
			return (ptr);
		}
		n++;
	}
	ptr[n] = '\0';
	return (ptr);
}
