/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrudy <wrudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 14:30:52 by wrudy             #+#    #+#             */
/*   Updated: 2020/05/28 03:56:40 by wrudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t i;
	size_t len;

	if (!(len = ft_strlen(needle)))
		return ((char *)haystack);
	if ((size_t)ft_strlen(haystack) < len || n < len)
		return (NULL);
	i = 0;
	while (haystack[i] != '\0' && i <= n - len)
	{
		if (haystack[i] == needle[0])
		{
			if (ft_strncmp(haystack + i, needle, len) == 0)
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
