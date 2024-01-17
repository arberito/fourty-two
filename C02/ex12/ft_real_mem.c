/* ************************************************************************** */
/*                                                                            */
/*                                                    :::::::   :::::::       */
/*   ft_real_mem.c                                   :+:   :+: :+:   :+:      */
/*                                                   +:+   +:+ +:+   +:+      */
/*   By: artopall | artopall@student.42quebec.co     +#+   +:+ +#+   +:+      */
/*                                                   +#+   +#+ +#+   +#+      */
/*   Created: 2024/01/16 19:34:52 by artopall        #+#   #+# #+#   #+#      */
/*   Updated: 2024/01/16 20:22:30 by artopall         #######   #######.qc    */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_printadd(unsigned long long addy)
{
    char    str[17];
    int     i;
    
    str[16] = 0;
    i = 15;
    while (addy)
    {
        str[i] = "0123456789abcdef"[addy % 16];
        i -= 1;
        addy /= 16;
    }
    while (i >= 0)
    {
        str[i] = '0';
        i -= 1;
    }
    while (str[++i])
        ft_putchar(str[i]);
    ft_putchar(':');
    ft_putchar(' ');
}

void	ft_hex_str(char *str, unsigned int size, char todo)
{
	int	i;

	i = 0;
	while (i < 16 && i < size)
	{
		if (todo == 'c')
		{
			if (str[i] >= ' ' && str[i] <= 126)
				ft_putchar(str[i]);
			else
				ft_putchar('.');
		}
		else
		{
			ft_putchar("0123456789abcdef"[str[i] / 16]);
			ft_putchar("0123456789abcdef"[str[i] % 16]);
			if (i % 2 == 1)
				ft_putchar(' ');
		}
		i += 1;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	char			*data;

	i = 0;
	data = (char *)addr;
	while (i < size)
	{
		ft_printadd((unsigned long long)&data[i]);
		ft_hex_str(data + i, size, 'h');
		ft_hex_str(data + i, size, 'c');
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}

#include <stdlib.h>

int	main(int argc, char *argv[])
{
	argv[1] = "Salut les aminches c'est cool show mem on fait de truc terrible\n\n\n\n\t\v\t\t\t\t\t\t\t\t\t6666666666666666666666666666666666666666666699999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999\t";
	int	*tab;
	tab = malloc(sizeof(int) * 10);
	tab[0] = 4;
	tab[1] = 22;
	tab[2] = 10;
	tab[3] = 8;
	tab[4] = 9;
	tab[5] = 0;
	tab[6] = 34;
	tab[7] = 16;
	tab[8] = 4533;
	tab[9] = 35;
	ft_print_memory((void *)"bonjour", 10);
	// ft_print_memory(tab, 19);
	return (0);
}
