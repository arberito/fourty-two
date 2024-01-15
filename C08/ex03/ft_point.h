/* ************************************************************************** */
/*                                                                            */
/*                                                    :::::::   :::::::       */
/*   ft_point.h                                      :+:   :+: :+:   :+:      */
/*                                                   +:+   +:+ +:+   +:+      */
/*   By: artopall | artopall@student.42quebec.co     +#+   +:+ +#+   +:+      */
/*                                                   +#+   +#+ +#+   +#+      */
/*   Created: 2024/01/15 11:40:23 by artopall        #+#   #+# #+#   #+#      */
/*   Updated: 2024/01/15 11:42:45 by artopall         #######   #######.qc    */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct	s_point
{
	int	x;
	int	y;
}	t_point;

void	set_point(t_point *point);

#endif
