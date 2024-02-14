/* ************************************************************************** */
/*                                                                            */
/*                                                 -- ··················      */
/*   ft_split.c                                    1- :██╗  ██╗██████╗ :      */
/*                                                 0- :██║  ██║╚════██╗:      */
/*   By: artopall | github/arberito                1- :███████║ █████╔╝:      */
/*                                                 0- :╚════██║██╔═══╝ :      */
/*   Created: 2024/02/03 08:46:29 by artopall      1- :     ██║███████╗:      */
/*   Updated: 2024/02/13 13:05:15 by artopall      0- :     ╚═╝╚══════╝.qc    */
/*                                                 -- ··················      */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dst, char *src, char set)
{
	int	i;

	i = 0;
	while (*src && *src != set)
	{
		dst[i] = *src;
		i += 1;
		src += 1;
	}
	dst[i] = 0;
	return (src);
}

static int	ft_slen(char *s1, char set)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] != set)
	{
		i += 1;
	}
	return (i);
}

static int	ft_getsize(char *s1, char set)
{
	int	size;

	size = 0;
	while (*s1)
	{
		while (*s1 && *s1 == set)
		{
			s1 += 1;
		}
		if (*s1 != 0)
		{
			size += 1;
			while (*s1 && *s1 != set)
			{
				s1 += 1;
			}
		}
	}
	return (size);
}

static char	**ft_freeall(char **array, int index)
{
	while (index > 0)
	{
		free(array[index - 1]);
		index -= 1;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char *s, char c)
{
	char	**split;
	int		index;

	if (s == NULL)
		return (NULL);
	split = malloc(sizeof(char *) * (ft_getsize(s, c) + 1));
	if (split == NULL)
		return (NULL);
	index = 0;
	while (*s)
	{
		while (*s && *s == c)
			s += 1;
		if (*s != 0)
		{
			split[index] = malloc(sizeof(char) * (ft_slen(s, c) + 1));
			if (split[index] == NULL)
				return (ft_freeall(split, index));
			s = ft_strcpy(split[index], s, c);
			index += 1;
		}
	}
	split[index] = NULL;
	return (split);
}
