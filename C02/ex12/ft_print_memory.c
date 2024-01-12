/* ************************************************************************** */
/*                                                                            */
/*                                                    :::::::   :::::::       */
/*   ft_print_memory.c                               :+:   :+: :+:   :+:      */
/*                                                   +:+   +:+ +:+   +:+      */
/*   By: artopall | artopall@student.42quebec.co     +#+   +:+ +#+   +:+      */
/*                                                   +#+   +#+ +#+   +#+      */
/*   Created: 2024/01/12 09:17:59 by artopall        #+#   #+# #+#   #+#      */
/*   Updated: 2024/01/12 10:52:28 by artopall         #######   #######.qc    */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(unsigned long long n)
{
	if (n > 15)
	{
		ft_putnbr(n / 16);
	}
	ft_putchar("0123456789abcdef"[n % 16]);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char *)addr;
	while (i < size)
	{
		ft_putnbr((unsigned long long)&str[i]);
		i += 15;
	}
	return (addr);
}

int	main()
{
	ft_print_memory((void *)"Hello world", 11);
}