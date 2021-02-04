/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_pointer_specifiers.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrudy <wrudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:43:56 by wrudy             #+#    #+#             */
/*   Updated: 2020/07/21 19:23:45 by wrudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	case_with_minus(int width, int str_len, char *ptr_str)
{
	int		i;
	char	c;

	write(1, "0x", 2);
	i = 2;
	c = ' ';
	while (i < width)
	{
		if (i < str_len + 2)
			write(1, &ptr_str[i - 2], 1);
		else
			write(1, &c, 1);
		i++;
	}
}

static void	case_without_minus(int width, int str_len, char *ptr_str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	c = ' ';
	while (i < (width - str_len - 2))
	{
		write(1, &c, 1);
		i++;
	}
	write(1, "0x", 2);
	j = 0;
	while (j < str_len)
	{
		write(1, &ptr_str[j], 1);
		j++;
	}
}

int			ptrsp(char *sf, char *sw, char *sp, unsigned long long p)
{
	int		width;
	int		str_len;
	char	*pointer_string;

	pointer_string = pf_ptoa(p);
	if (sp != NULL && sp[0] == '\0' && p == 0)
		str_len = 0;
	else
		str_len = pf_strlen(pointer_string);
	if (sw == NULL)
		width = str_len + 2;
	else
	{
		width = pf_atoi(sw);
		if (width < (str_len + 2))
			width = str_len + 2;
	}
	if (sf != NULL && pf_strchr(sf, '-'))
		case_with_minus(width, str_len, pointer_string);
	else
		case_without_minus(width, str_len, pointer_string);
	free(pointer_string);
	return (width);
}
