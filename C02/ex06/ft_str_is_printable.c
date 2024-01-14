/* ************************************************************************** */
/*                                                                            */
/*                                                     :::::::   :::::::      */
/*   ft_str_is_printable.c                            :+:   :+: :+:   :+:     */
/*                                                    +:+  :+:+ +:+  :+:+     */
/*   By: artopall <artopall@student.42.qc>            +#+ + +:+ +#+ + +:+     */
/*                                                    +#+#  +#+ +#+#  +#+     */
/*   Created: 2024/01/11 00:04:11 by artopall         #+#   #+# #+#   #+#     */
/*   Updated: 2024/01/13 11:16:13 by artopall          #######   ####### .qc  */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
{
	while (*str && ft_isprint(*str))
	{
		str += 1;
	}
	return (*str == 0);
}
