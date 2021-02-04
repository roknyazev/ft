/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrudy <wrudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 14:14:42 by wrudy             #+#    #+#             */
/*   Updated: 2020/05/28 03:56:40 by wrudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;

	if (c == '\0')
		return ((char *)(s + ft_strlen(s)));
	i = 1;
	while (s[i] != c)
	{
		if (s[i] == '\0')
		{
			if (s[0] == c)
				return ((char *)(s));
			else
				return (NULL);
		}
		i++;
	}
	return (ft_strrchr(s + i, c));
}
