/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrudy <wrudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 14:33:10 by wrudy             #+#    #+#             */
/*   Updated: 2020/05/29 03:09:28 by wrudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = dst_len;
	if (size < dst_len || size == 0)
		return (src_len + size);
	while ((i < size - 1) != 0 && src_len != 0 && *src)
	{
		dst[i] = *src++;
		i++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
