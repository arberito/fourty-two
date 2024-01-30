/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 09:31:59 by artopall          #+#    #+#             */
/*   Updated: 2024/01/30 13:30:49 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(char *str)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (i < ft_strlen(str))
		{
			write(1, &"0123456789abcdef"[str[i] / 16], 1);
			write(1, &"0123456789abcdef"[str[i] % 16], 1);
		}
		else
		{
			ft_putstr("  ");
		}
		if (i + 1 == 8)
		{
			ft_putstr(" ");
		}
		ft_putstr(" ");
		i += 1;
	}
}

void	ft_nums(int num)
{
	char	str[8];
	int		i;

	i = 0;
	while (num)
	{
		str[i] = "0123456789abcdef"[num % 16];
		num /= 16;
		i += 1;
	}
	while (i < 7)
	{
		str[i] = '0';
		i += 1;
	}
	str[i] = '0';
	while (i >= 0)
	{
		ft_putchar(str[i]);
		i -= 1;
	}
}

void	ft_print(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] && i < ft_strlen(str))
	{
		j = 0;
		ft_nums(i);
		ft_putstr("  ");
		ft_puthex(str + i);
		ft_putstr(" |");
		while (j < 16 && str[i])
		{
			ft_putchar(ft_issprint(str[i]));
			j += 1;
			i += 1;
		}
		ft_putstr("|\n");
	}
	ft_nums(i);
	ft_putstr("\n");
}

char	*ft_hexdump(int fd, char *filename, char *content)
{
	int		tty;
	char	buffer[42];

	if (fd >= 0)
	{
		tty = read(fd, buffer, sizeof(buffer));
		while (tty)
		{
			buffer[tty] = 0;
			content = ft_strdup(buffer, content);
			tty = read(fd, buffer, sizeof(buffer));
		}
		close(fd);
	}
	else
	{
		ft_putstr("hexdump: ");
		ft_putstr(filename);
		ft_putstr(": No such file or directory\n");
		ft_putstr("hexdump: all input file arguments failed\n");
	}
	return (content);
}
