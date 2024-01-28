/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 21:08:05 by artopall          #+#    #+#             */
/*   Updated: 2024/01/26 21:10:20 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (tab[i])
	{
		count += f(tab[i]);
		i += 1;
	}
	return (count);
}
