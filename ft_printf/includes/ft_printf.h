/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:52:40 by artopall          #+#    #+#             */
/*   Updated: 2024/02/02 19:51:17 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdint.h>

typedef struct s_list
{
	va_list	arg;
	int		len;
	void	*data;
	int		index;
	void	(*ptr[8])(void *);
}	t_list;

int		ft_printf(const char *format, ...);

//	ft_utils
int		ft_isformat(const char *s);
int		ft_getspecifier(char c);

// function ptr
void	ft_putchar(void *c);
void	ft_putstr(void *str);
void	ft_putaddy(void *addy);
void	ft_putdecimal(void *decimal);
void	ft_putinteger(void *integer);
void	ft_putuninteger(void *uninteger);
void	ft_putsmallhexa(void *hex);
void	ft_putbighexa(void *hex);

#endif
