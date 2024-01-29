/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:07:48 by artopall          #+#    #+#             */
/*   Updated: 2024/01/28 22:35:19 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_H
# define FT_BSQ_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

// ft_utils
void	ft_putstr(char *str);
void	*ft_calloc(size_t n_elem, size_t size);

// ft_cat
void	ft_cat(int fd);

#endif
