/* ************************************************************************** */
/*                                                                            */
/*                                                    :::::::   :::::::       */
/*   ft_strlcat.c                                    :+:   :+: :+:   :+:      */
/*                                                   +:+   +:+ +:+   +:+      */
/*   By: artopall | artopall@student.42quebec.co     +#+   +:+ +#+   +:+      */
/*                                                   +#+   +#+ +#+   +#+      */
/*   Created: 2024/01/12 06:59:12 by artopall        #+#   #+# #+#   #+#      */
/*   Updated: 2024/01/12 07:27:10 by artopall         #######   #######.qc    */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i += 1;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	char			*temp;

	i = 0;
	temp = dest;
	while (*dest)
	{
		dest += 1;
	}
	while (src[i] && i < size)
	{
		*dest = src[i];
		dest += 1;
		i += 1;
	}
	*dest = 0;
	return (ft_strlen(temp));
}