// Online C compiler to run C program online
#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_printhex(int value, int n)
{
    if (value < 0)
    {
        ft_putchar('-');
        value *= -1;
    }
    ft_putchar("0123456789abcdef"[(value / 16) % 16]);
    ft_putchar("0123456789abcdef"[value % 16]);
    if (n % 2 == 1)
    {
        ft_putchar(' ');
    }
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

void    ft_putstr(char *str)
{
    int i;
    
    i = 0;
    while (i < 16)
    {
        if (str[i] >= ' ' && str[i] <= 126)
        {
            ft_putchar(str[i]);
        }
        else
        {
            ft_putchar('.');
        }
        i += 1;
    }
}

void	*ft_print_memory(void *addr, unsigned int size)
{
    char            *data;
    unsigned int    i;
    unsigned int    copy;
    int             time;
    
    i = 0;
    time = 1;
    data = (char *)addr;
    while (i < size)
    {
        ft_printadd(&data[i]);
        copy = i;
        while (copy < (16 * time) && copy < size)
        {
            ft_printhex(data[copy], copy);
            copy += 1;
        }
		while (copy < (16 * time))
		{
			if (copy % 2 == 1)
    		{
        		ft_putchar(' ');
    		}
			ft_putchar(' ');
			ft_putchar(' ');
			copy += 1;
		}
        ft_putstr(data + i);
        ft_putchar('\n');
        time += 1;
        i += 16;
    }
    return addr;
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
	// ft_print_memory((char*)argv[1], (unsigned int)ft_strlen(argv[1]));
	ft_print_memory(tab, 56);
	return (0);
}
