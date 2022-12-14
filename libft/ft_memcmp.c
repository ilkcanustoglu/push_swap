/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iustoglu <iustoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 18:26:12 by iustoglu          #+#    #+#             */
/*   Updated: 2022/11/14 17:00:32 by iustoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
-The memcmp() function compares byte string s1 against byte string s2.  
 Both strings are assumed to be n bytes long.
-The memcmp() function returns 0 if the two strings are identical, 
 otherwise returns the difference between the first two differing bytes.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	while (n > 0)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
		n--;
	}
	return (0);
}
