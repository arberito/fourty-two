/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 22:09:02 by artopall          #+#    #+#             */
/*   Updated: 2024/01/25 22:09:10 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_TAIL_H
# define FT_TAIL_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <errno.h>

int		ft_atoi(char *str);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
char	*ft_strdup(char *buffer, char *s2);
void	ft_tail(int fd, char *filename, int bytes);

#endif
