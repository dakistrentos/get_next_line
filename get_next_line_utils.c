/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: Vtrentos <Vtrentos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/28 13:10:01 by Vtrentos      #+#    #+#                 */
/*   Updated: 2021/03/04 12:22:40 by Vtrentos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char	*str1;
	char	*str2;

	if (!dest && !src)
		return (NULL);
	str1 = dest;
	str2 = (char *)src;
	while (len > 0)
	{
		*str1 = *str2;
		str1++;
		str2++;
		len--;
	}
	return (dest);
}

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	len;

	if (!src || !dst)
		return (0);
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	else if (size > len + 1)
		ft_memcpy(dst, src, len + 1);
	else if (len != 0)
		ft_memcpy(dst, src, size - 1);
	dst[size - 1] = '\0';
	return (len);
}

void	ft_bzero(void *s, size_t n)
{
	char	*str1;

	str1 = s;
	while (n > 0)
	{
		*str1 = '\0';
		str1++;
		n--;
	}
}

char	*ft_strchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
		len--;
	}
	return (NULL);
}
