/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cdalla-s <cdalla-s@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/05 13:42:53 by cdalla-s      #+#    #+#                 */
/*   Updated: 2022/04/05 13:45:37 by cdalla-s      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		index;

	index = 0;
	while (*(s + index))
	{
		if (s[index] == (char)c)
			return ((char *)s + index);
		index++;
	}
	if (s[index] == (char)c && (char)c == '\0')
		return ((char *)s + index);
	return (0);
}
