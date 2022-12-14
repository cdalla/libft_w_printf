/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cdalla-s <cdalla-s@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/05 13:41:12 by cdalla-s      #+#    #+#                 */
/*   Updated: 2022/04/05 13:41:13 by cdalla-s      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	index;
	char	*ptr;

	index = 0;
	ptr = (char *)malloc(count * size);
	if (ptr == 0)
		return (0);
	while (index < count * size)
	{
		ptr[index] = 0;
		index++;
	}
	return (ptr);
}
