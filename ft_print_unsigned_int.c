/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int_unsigned.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovehman <rovehman@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-22 21:10:48 by rovehman          #+#    #+#             */
/*   Updated: 2026-06-22 21:10:48 by rovehman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned_int(unsigned int nb)
{
	int	count;
	int	r_value;

	if (nb < 10)
		return (ft_print_char(nb + '0'));
	count = ft_print_unsigned_int(nb / 10);
	if (count == -1)
		return (-1);
	r_value = ft_print_unsigned_int(nb % 10);
	if (r_value == -1)
		return (-1);
	return (count + r_value);
}
