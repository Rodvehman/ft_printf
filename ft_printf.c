/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovehman <rovehman@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-19 17:24:10 by rovehman          #+#    #+#             */
/*   Updated: 2026-06-19 17:24:10 by rovehman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	size_t		i;
	int			count;
	va_list		args;
	int			r_value;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
			r_value = ft_check_format(&args, format[++i]);
		else
			r_value = ft_print_char(format[i]);
		if (r_value == -1)
			return (-1);
		count += r_value;
		i++;
	}
	va_end(args);
	return (count);
}
