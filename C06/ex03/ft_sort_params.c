/* ************************************************************************** */
/*                                                                            */
/*                                                    :::::::   :::::::       */
/*   ft_sort_params.c                                :+:   :+: :+:   :+:      */
/*                                                   +:+   +:+ +:+   +:+      */
/*   By: artopall | artopall@student.42quebec.co     +#+   +:+ +#+   +:+      */
/*                                                   +#+   +#+ +#+   +#+      */
/*   Created: 2024/01/14 21:50:06 by artopall        #+#   #+# #+#   #+#      */
/*   Updated: 2024/01/14 22:07:07 by artopall         #######   #######.qc    */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1 += 1;
		s2 += 1;
	}
	return (*s1 - *s2);
}

char	**ft_sort_str(char **array, int size)
{
	int		i;
	char	*temp;

	i = 1;
	while (i < size - 1)
	{
		if (ft_strcmp(array[i], array[i + 1]) > 0)
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			i = -1;
		}
		i += 1;
	}
	return (array);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str += 1;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	av = ft_sort_str(av, ac);
	while (i < ac)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i += 1;
	}
	return (0);
}
