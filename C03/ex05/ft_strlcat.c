/* ************************************************************************** */
/*                                                                            */
/*                                                    :::::::   :::::::       */
/*   ft_strlcat.c                                    :+:   :+: :+:   :+:      */
/*                                                   +:+   +:+ +:+   +:+      */
/*   By: artopall | artopall@student.42quebec.co     +#+   +:+ +#+   +:+      */
/*                                                   +#+   +#+ +#+   +#+      */
/*   Created: 2024/01/12 06:59:12 by artopall        #+#   #+# #+#   #+#      */
/*   Updated: 2024/01/17 07:37:02 by artopall         #######   #######.qc    */
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
	unsigned int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	if (size <= dest_len)
	{
		return (dest_len + ft_strlen(src));
	}
	while (src[i] && dest_len + i < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i += 1;
	}
	dest[dest_len + i] = 0;
	return (dest_len + ft_strlen(src));
}
