/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutuzov <mbutuzov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 18:08:57 by mbutuzov          #+#    #+#             */
/*   Updated: 2024/08/01 19:47:17 by mbutuzov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft.h"
# include <stdarg.h>

int	ft_putchar_count(char s, int *ptr);
int	ft_putnumber_base(long long number, char *radix);
int	ft_printf(const char *format, ...);
int	ft_ptr_handler(unsigned long num);
int	ft_putstr(char *s);
#endif
