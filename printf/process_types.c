/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_types.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrudy <wrudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 22:47:04 by wrudy             #+#    #+#             */
/*   Updated: 2020/07/21 18:52:12 by wrudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	process_int(t_placehold *plh, va_list *arg)
{
	int		len;
	char	*nbr_s;
	char	*out;

	if (plh->type == 'd' || plh->type == 'i')
		nbr_s = pf_itoa(va_arg(*arg, int));
	else if (plh->type == 'u')
		nbr_s = pf_utoa(va_arg(*arg, unsigned int));
	else
		nbr_s = pf_xtoa(va_arg(*arg, unsigned int), plh->type);
	out = pr_int_spec(plh->flag, plh->width, plh->precision, nbr_s);
	if (out == NULL)
		return (0);
	len = pf_strlen(out);
	write(1, out, len);
	free(nbr_s);
	free(out);
	return (len);
}

int	process_char(t_placehold *plh, va_list *arg)
{
	int				len;
	unsigned char	c;

	c = (unsigned char)va_arg(*arg, int);
	len = pr_char_spec(plh->flag, plh->width, c);
	return (len);
}

int	process_string(t_placehold *plh, va_list *arg)
{
	int		len;
	char	*s;
	int		flag;

	flag = 0;
	s = va_arg(*arg, char *);
	if (s == NULL)
	{
		s = pf_strdup("(null)");
		flag = 1;
	}
	len = pr_str_spec(plh->flag, plh->width, plh->precision, s);
	if (flag == 1)
		free(s);
	return (len);
}

int	process_pointer(t_placehold *plh, va_list *arg)
{
	int					len;
	unsigned long long	p;

	p = va_arg(*arg, unsigned long long);
	len = ptrsp(plh->flag, plh->width, plh->precision, p);
	return (len);
}
