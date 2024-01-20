/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 06:08:57 by artopall          #+#    #+#             */
/*   Updated: 2024/01/18 22:05:15 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*temp;

	i = 0;
	temp = dest;
	while (*dest)
	{
		dest += 1;
	}
	while (*src && i < nb)
	{
		*dest = *src;
		i += 1;
		src += 1;
		dest += 1;
	}
	*dest = 0;
	return (temp);
}
