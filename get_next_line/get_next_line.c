/* ************************************************************************** */
/*                                                                            */
/*                                                 -- ··················      */
/*   get_next_line.c                               1- :██╗  ██╗██████╗ :      */
/*                                                 0- :██║  ██║╚════██╗:      */
/*   By: artopall | github/arberito                1- :███████║ █████╔╝:      */
/*                                                 0- :╚════██║██╔═══╝ :      */
/*   Created: 2024/02/03 12:24:25 by artopall      1- :     ██║███████╗:      */
/*   Updated: 2024/02/15 09:51:33 by artopall      0- :     ╚═╝╚══════╝.qc    */
/*                                                 -- ··················      */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_line(t_list *lst, char *buffer)
{
	if (buffer == NULL)
		return (NULL);
	lst->line = malloc(sizeof(char) * (ft_strlen(buffer, '\n') + 1));
	if (lst->line == NULL)
		return (NULL);
	lst->line = ft_strcpy(lst->line, buffer, (ft_strlen(buffer, '\n')));
	return (lst->line);
}

char	*get_next_line(int fd)
{
	static char	*tokeep = NULL;
	t_list		list;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	list.line = NULL;
	list.tty = read(fd, list.data, BUFFER_SIZE);
	while (list.tty > 0 && ft_isline(tokeep) == 0)
	{
		list.data[list.tty] = 0;
		tokeep = ft_strdup(list.data, tokeep);
		if (ft_isline(tokeep) == 0)
		{
			list.tty = read(fd, list.data, BUFFER_SIZE);
		}
	}
	tokeep = ft_get_line(&list, tokeep);
	return (list.line);
}
