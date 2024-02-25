/* ************************************************************************** */
/*                                                                            */
/*                                                 -- ··················      */
/*   get_next_line_utils.c                         1- :██╗  ██╗██████╗ :      */
/*                                                 0- :██║  ██║╚════██╗:      */
/*   By: artopall | github/arberito                1- :███████║ █████╔╝:      */
/*                                                 0- :╚════██║██╔═══╝ :      */
/*   Created: 2024/02/03 12:24:25 by artopall      1- :     ██║███████╗:      */
/*   Updated: 2024/02/15 09:50:12 by artopall      0- :     ╚═╝╚══════╝.qc    */
/*                                                 -- ··················      */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str, char c)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		return (0);
	}
	while (str[i] && str[i] != c)
	{
		i += 1;
	}
	return (i);
}

char	*ft_get_line(t_list *lst, char *buffer)
{
	int		i;
	int		len;
	char	*temp;

	i = 0;
	len = 0;
	if (buffer == NULL)
		return (NULL);
	while (buffer[len] && buffer[len] != '\n')
	{
		len += 1;
	}
	lst->line = malloc(sizeof(char) * (len + 2));
	if (lst->line == NULL)
		return (NULL);
	while (i < len)
	{
		lst->line[i] = buffer[i];
		i += 1;
	}
	lst->line[i] = 0;
	if (buffer[i] == '\n')
	{
		lst->line[i] = '\n';
		lst->line[i + 1] = 0;
	}
	free(buffer);
	return (buffer);
}

int	ft_isline(char *str)
{
	if (str == NULL)
	{
		return (0);
	}
	while (*str && *str != '\n')
	{
		str += 1;
	}
	return (*str == '\n');
}

char	*ft_strcpy(char *dst, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i += 1;
	}
	dst[i] = 0;
	return (dst);
}

char	*ft_strdup(char *buffer, char *tokeep)
{
	char	*dupe;

	dupe = malloc(sizeof(char) * (ft_strlen(buffer, 0) + ft_strlen(tokeep, 0) + 1));
	if (dupe == NULL)
	{
		return (NULL);
	}
	dupe[0] = 0;
	if (tokeep != NULL)
	{
		dupe = ft_strcpy(dupe, tokeep, ft_strlen(tokeep, 0));
	}
	return (ft_strcpy(dupe + ft_strlen(dupe, 0), buffer, ft_strlen(buffer, 0)));
}
