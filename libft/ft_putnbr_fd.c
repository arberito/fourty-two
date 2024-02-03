/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 09:33:43 by artopall          #+#    #+#             */
/*   Updated: 2024/02/03 09:35:10 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	copy;

	copy = (long)n;
	if (copy < 0)
	{
		ft_putchar_fd('-', fd);
		copy *= -1;
	}
	if (copy > 9)
	{
		ft_putnbr_fd(copy / 10, fd);
	}
	ft_putchar_fd("0123456789"[copy % 10], fd);
}
