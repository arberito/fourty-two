/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 21:34:08 by artopall          #+#    #+#             */
/*   Updated: 2024/01/18 22:26:29 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i])
	{
		i += 1;
	}
	while (*src)
	{
		dest[i] = *src;
		i += 1;
		src += 1;
	}
	dest[i] = 0;
	return (dest);
}
