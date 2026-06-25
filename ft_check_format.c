/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovehman <rovehman@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-22 14:48:13 by rovehman          #+#    #+#             */
/*   Updated: 2026-06-22 14:48:13 by rovehman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(va_list *args, char specifier)
{
	if (specifier == 'c')
		return (ft_print_char(va_arg(*args, int)));
	else if (specifier == 's')
		return (ft_print_str(va_arg(*args, char *)));
	else if (specifier == 'p')
		return (ft_print_pointer(va_arg(*args, unsigned long)));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_print_nbr(va_arg(*args, int)));
	else if (specifier == 'u')
		return (ft_print_unsigned_int(va_arg(*args, unsigned int)));
	else if (specifier == 'x' || specifier == 'X')
		return (ft_print_hexa(specifier, va_arg(*args, unsigned int)));
	else if (specifier == '%')
		return (ft_print_char('%'));
	return (-1);
}
