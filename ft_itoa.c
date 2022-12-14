/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cdalla-s <cdalla-s@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/05 13:41:38 by cdalla-s      #+#    #+#                 */
/*   Updated: 2022/04/05 13:41:39 by cdalla-s      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	static	ft_size(int n);

char	*ft_itoa(int n)
{
	char	*itoa;
	int		index;
	int		size;
	int		sign;

	sign = 1;
	index = 0;
	size = ft_size(n);
	itoa = (char *)malloc(size * sizeof(char) + 1);
	if (itoa == 0)
		return (0);
	if (n < 0)
	{
		itoa[index] = '-';
		index++;
		sign = -1;
	}
	itoa[size] = '\0';
	while (size > index)
	{
		size--;
		itoa[size] = n % 10 * sign + 48;
		n = n / 10;
	}
	return (itoa);
}

int	static	ft_size(int n)
{
	int	size;

	size = 0;
	if (n < 0)
		size++;
	if (n == 0)
		size++;
	while (n != 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}
