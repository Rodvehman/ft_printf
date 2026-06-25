/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovehman <rovehman@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-19 17:17:56 by rovehman          #+#    #+#             */
/*   Updated: 2026-06-19 17:17:56 by rovehman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_check_format(va_list *args, char specifier);
int		ft_print_char(char c);
int		ft_print_str(char *s);
int		ft_print_pointer(unsigned long value);
int		ft_print_hexa(const char format, unsigned long c);
int		ft_print_nbr(long nb);
size_t	ft_strlen(char *s);
int		ft_print_unsigned_int(unsigned int nb);

#endif
