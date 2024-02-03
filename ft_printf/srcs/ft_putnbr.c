/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:52:18 by artopall          #+#    #+#             */
/*   Updated: 2024/02/02 19:57:59 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putaddy(void *addy)
{
	(void)addy;
}

void	ft_putdecimal(void *nbr)
{
	long	copy;

	copy = (long)nbr;
	if (copy < 0)
	{
		ft_putchar((void *)'-');
		copy *= -1;
	}
	if (copy > 9)
	{
		ft_putdecimal((void *)(copy / 10));
	}
	ft_putchar((void *)((intptr_t)"0123456789"[copy % 10]));
}
