/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 23:22:26 by artopall          #+#    #+#             */
/*   Updated: 2024/02/03 00:08:10 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_tolower(int c)
{
	return (ft_isupper(c) && (c += 32));
}
