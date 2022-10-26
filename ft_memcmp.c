/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cdalla-s <cdalla-s@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/05 13:42:24 by cdalla-s      #+#    #+#                 */
/*   Updated: 2022/04/05 13:42:25 by cdalla-s      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				index;
	const unsigned char	*x1;
	const unsigned char	*x2;

	x1 = s1;
	x2 = s2;
	index = 0;
	if (n == 0)
		return (0);
	while (index < n)
	{
		if (x1[index] != x2[index])
			return (x1[index] - x2[index]);
		index++;
	}
	return (0);
}
