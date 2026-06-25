/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovehman <rovehman@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-22 16:21:04 by rovehman          #+#    #+#             */
/*   Updated: 2026-06-22 16:21:04 by rovehman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(unsigned long value)
{
	int		cont;

	cont = 0;
	if (value == 0)
		return (write(1, "(nil)", 5));
	cont += write(1, "0x", 2);
	cont += ft_print_hexa('x', value);
	return (cont);
}
