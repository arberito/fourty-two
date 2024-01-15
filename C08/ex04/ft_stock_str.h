/* ************************************************************************** */
/*                                                                            */
/*                                                    :::::::   :::::::       */
/*   ft_stock_str.h                                  :+:   :+: :+:   :+:      */
/*                                                   +:+   +:+ +:+   +:+      */
/*   By: artopall | artopall@student.42quebec.co     +#+   +:+ +#+   +:+      */
/*                                                   +#+   +#+ +#+   +#+      */
/*   Created: 2024/01/15 11:48:40 by artopall        #+#   #+# #+#   #+#      */
/*   Updated: 2024/01/15 11:50:10 by artopall         #######   #######.qc    */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct	s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

#endif
