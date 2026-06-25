/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovehman <rovehman@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-22 19:18:26 by rovehman          #+#    #+#             */
/*   Updated: 2026-06-22 19:18:26 by rovehman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(const char format, unsigned long c)
{
	int		count;
	char	*base;
	int		r_value;

	base = NULL;
	count = 0;
	if (format == 'X')
		base = "0123456789ABCDEF";
	else if (format == 'x')
		base = "0123456789abcdef";
	if (!base)
		return (-1);
	if (c < 16)
		return (ft_print_char(base[c]));
	count = ft_print_hexa(format, c / 16);
	if (count == -1)
		return (-1);
	r_value = ft_print_hexa(format, c % 16);
	if (r_value == -1)
		return (-1);
	return (count + r_value);
}
