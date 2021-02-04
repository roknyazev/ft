/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrudy <wrudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 17:17:26 by wrudy             #+#    #+#             */
/*   Updated: 2020/05/29 04:39:53 by wrudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	left;
	size_t	right;
	char	*s2;

	i = 0;
	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return ((char *)s1);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	if (s1[i] != '\0')
		left = i;
	else
		return (ft_strdup("\0"));
	i = ft_strlen(s1);
	while (i != 0 && ft_strchr(set, s1[i]))
		i--;
	right = i;
	if ((s2 = malloc(right - left + 2)) == NULL)
		return (NULL);
	ft_strlcpy(s2, s1 + left, right - left + 2);
	return (s2);
}
