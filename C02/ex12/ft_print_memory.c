/* ************************************************************************** */
/*                                                                            */
/*                                                     :::::::   :::::::      */
/*   ft_print_memory.c                                :+:   :+: :+:   :+:     */
/*                                                    +:+  :+:+ +:+  :+:+     */
/*   By: artopall <artopall@student.42.qc>            +#+ + +:+ +#+ + +:+     */
/*                                                    +#+#  +#+ +#+#  +#+     */
/*   Created: 2024/01/12 09:17:59 by artopall         #+#   #+# #+#   #+#     */
/*   Updated: 2024/01/14 12:11:38 by artopall          #######   ####### .qc  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] && i < 16)
	{
		if (str[i] >= ' ' && str[i] <= '~')
			ft_putchar(str[i]);
		else
			ft_putchar('.');
		i += 1;
	}
}

void	ft_puthex(char *str)
{
	int	i;

	i = 0;
	while (str[i] && i < 16)
	{
		ft_putchar("0123456789abcdef"[(str[i] / 16) % 16]);
		ft_putchar("0123456789abcdef"[str[i] % 16]);
		if (i % 2 == 1)
		{
			ft_putchar(' ');
		}
		i += 1;
	}
	while (i < 17)
	{
		ft_putchar(' ');
		i += 1;
	}
}

void	ft_putaddy(unsigned long long addr)
{
	char	str[17];
	int		i;

	i = 15;
	str[16] = 0;
	while (addr)
	{
		str[i] = "0123456789abcdef"[addr % 16];
		addr /= 16;
		i -= 1;
	}
	while (i >= 0)
	{
		str[i] = '0';
		i -= 1;
	}
	ft_putstr(str);
	ft_putstr(": ");
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char *)addr;
	while (i < size)
	{
		ft_putaddy((unsigned long long)&str[i]);
		ft_puthex(str + i);
		ft_putstr(str + i);
		ft_putchar('\n');
		i += 15;
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
	//ft_print_memory((char*)argv[1], (unsigned int)ft_strlen(argv[1]));
	ft_print_memory(tab, 10);
	return (0);
}