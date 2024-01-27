/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 06:59:12 by artopall          #+#    #+#             */
/*   Updated: 2024/01/27 16:03:59 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i += 1;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	i;

	i = 0;
	dest_len = ft_strlen(dest);
	if (size <= dest_len)
	{
		return (ft_strlen(src) + size);
	}
	while (src[i] && i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i += 1;
	}
	dest[dest_len + i] = 0;
	return (ft_strlen(src) + dest_len);
}
