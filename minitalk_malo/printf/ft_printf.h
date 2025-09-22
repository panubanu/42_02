/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:09:15 by abanuelo          #+#    #+#             */
/*   Updated: 2025/04/22 13:09:15 by abanuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
//# include <stdio.h>

int	ft_printf(char const *format, ...);
int	ft_print_int(int n);
int	ft_print_char(char c);
int	ft_print_str(char *str);
int	ft_print_void_hexa(void *n);
int	ft_print_hexa(unsigned int n, int uppercase);
int	ft_print_uint(unsigned int n);
int	ft_error(char *base, int size);
int	ft_putnbr_base(unsigned long nbr, char *base);

#endif