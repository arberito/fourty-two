/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 21:45:35 by artopall          #+#    #+#             */
/*   Updated: 2024/01/27 14:24:03 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
	{
		i += 1;
	}
	return i;
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_putnbr(int nbr)
{
	long	n;

	n = nbr;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar((n % 10) + '0');
}

int	ft_isspace(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

int	ft_issign(int c)
{
	return (c == '-' || c == '+');
}

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	nb;
	int	sign;

	sign = 1;
	nb = 0;
	while (*str && ft_isspace(*str))
		str += 1;
	while (*str && ft_issign(*str))
	{
		if (*str == '+')
			sign *= -1;
		str += 1;
	}
	while (ft_isdigit(*str))
	{
		nb = nb * 10 + (*str - '0');
		str += 1;
	}
	return (nb * sign);
}

int	ft_addition(int a, int b)
{
	return (a + b);
}

int	ft_substract(int a, int b)
{
	return (a - b);
}

int	ft_multiply(int a, int b)
{
	return (a * b);
}

int	ft_divide(int a, int b)
{
	return (a / b);
}

int	ft_modulo(int a, int b)
{
	return (a % b);
}

int	ft_getopepartor(char *op)
{
	if (!op[1])
	{
		if (*op == '+')
			return 0;
		else if (*op == '-')
			return 1;
		else if (*op == '*')
			return 2;
		else if (*op == '/')
			return 3;
		else if (*op == '%')
			return 4;
	}
	return -1;
}

int	main(int ac, char **av)
{
	int	(*ft_funptr[5])(int a, int b) = {ft_addition, ft_substract, ft_multiply, ft_divide, ft_modulo};
	int	op;
	
	if (ac == 4)
	{
		op = ft_getopepartor(av[2]);
		if (op != -1)
		{
			if ((op == 3 || op == 4) && ft_atoi(av[3]) == 0)
			{
				ft_putstr("Stop : ");
				if (op == 3)
					ft_putstr("division ");
				if (op == 4)
					ft_putstr("modulo ");
				ft_putstr("by zero\n");
				return 1;
			}
			ft_putnbr(ft_funptr[op](ft_atoi(av[1]), ft_atoi(av[3])));
		}
		else
			ft_putstr("0");
		ft_putstr("\n");
	}
	return 0;
}
