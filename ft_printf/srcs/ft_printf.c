/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:41:11 by artopall          #+#    #+#             */
/*   Updated: 2024/02/02 20:55:07 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	t_list	list;

	list.ptr[0] = ft_putchar;
	list.ptr[1] = ft_putstr;
	list.ptr[2] = ft_putaddy;
	list.ptr[3] = ft_putdecimal;
	va_start(list.arg, format);
	while (*format)
	{
		if (ft_isformat(format) == 1)
		{
			format += 1;
			list.index = ft_getspecifier(*format);
			if (list.index == 0)
				list.ptr[list.index]((void *)(intptr_t)va_arg(list.arg, int));
			else
				list.ptr[list.index](va_arg(list.arg, void *));
		}
		else
		{
			ft_putchar((void *)(intptr_t)*format);
		}
		format += 1;
	}
	va_end(list.arg);
	list.len = 0;
	return (list.len);
}
