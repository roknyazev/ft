/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrudy <wrudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 16:54:38 by wrudy             #+#    #+#             */
/*   Updated: 2020/05/31 10:16:53 by wrudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	k;
	size_t	len_s;
	size_t	len_sub;

	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	if (len_s < start)
		return (ft_strdup(""));
	k = len_s - start;
	if (k < len)
		len_sub = k;
	else
		len_sub = len;
	if ((substr = malloc((len_sub + 1) * sizeof(char))) == NULL)
		return (NULL);
	k = 0;
	while (len_sub--)
		substr[k++] = s[start++];
	substr[k] = '\0';
	return (substr);
}
