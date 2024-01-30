/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 09:27:44 by artopall          #+#    #+#             */
/*   Updated: 2024/01/30 12:59:16 by artopall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEXDUMP_H
# define FT_HEXDUMP_H

# include <unistd.h>
# include <errno.h>
# include <stdlib.h>
# include <fcntl.h>

//	ft_utils
char	ft_issprint(char c);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
char	*ft_strdup(char *buffer, char *s1);

//	ft_hexdump
char	*ft_hexdump(int fd, char *filename, char *content);
void	ft_print(char *str);

#endif
