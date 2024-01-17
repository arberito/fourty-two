/* ************************************************************************** */
/*                                                                            */
/*                                                    :::::::   :::::::       */
/*   ft_strstr.c                                     :+:   :+: :+:   :+:      */
/*                                                   +:+   +:+ +:+   +:+      */
/*   By: artopall | artopall@student.42quebec.co     +#+   +:+ +#+   +:+      */
/*                                                   +#+   +#+ +#+   +#+      */
/*   Created: 2024/01/12 06:49:31 by artopall        #+#   #+# #+#   #+#      */
/*   Updated: 2024/01/17 07:26:12 by artopall         #######   #######.qc    */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	while (*str)
	{
		i = 0;
		while (to_find[i] && *(str + i) == to_find[i])
		{
			i += 1;
		}
		if (!to_find[i])
		{
			break ;
		}
		str += 1;
	}
	return (str);
}
