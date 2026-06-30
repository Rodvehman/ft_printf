/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovehman <rovehman@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-23 19:17:09 by rovehman          #+#    #+#             */
/*   Updated: 2026-06-23 19:17:09 by rovehman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(long nb)
{
	size_t	nbr;
	int		count;
	int		r_value;

	count = 0;
	if (nb < 0)
	{
		if (ft_print_char('-') == -1)
			return (-1);
		nbr = (size_t) - nb;
		count++;
	}
	else
		nbr = (size_t) nb;
	if (nbr > 9)
	{
		r_value = ft_print_nbr(nbr / 10);
		if (r_value == -1)
			return (-1);
		count += r_value;
	}
	r_value = ft_print_char(nbr % 10 + '0');
	if (r_value == -1)
		return (-1);
	return (count + r_value);
}
