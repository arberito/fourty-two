/* ************************************************************************** */
/*                                                                            */
/*                                                    :::::::   :::::::       */
/*   ft_strlowcase.c                                 :+:   :+: :+:   :+:      */
/*                                                   +:+   +:+ +:+   +:+      */
/*   By: artopall | artopall@student.42quebec.co     +#+   +:+ +#+   +:+      */
/*                                                   +#+   +#+ +#+   +#+      */
/*   Created: 2024/01/11 00:12:22 by artopall        #+#   #+# #+#   #+#      */
/*   Updated: 2024/01/17 07:48:18 by artopall         #######   #######.qc    */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isupper(str[i]))
		{
			str[i] += 32;
		}
		i += 1;
	}
	return (str);
}
