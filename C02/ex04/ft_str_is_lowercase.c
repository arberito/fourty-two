/* ************************************************************************** */
/*                                                                            */
/*                                                     :::::::   :::::::      */
/*   ft_str_is_lowercase.c                            :+:   :+: :+:   :+:     */
/*                                                    +:+  :+:+ +:+  :+:+     */
/*   By: artopall <artopall@student.42.qc>            +#+ + +:+ +#+ + +:+     */
/*                                                    +#+#  +#+ +#+#  +#+     */
/*   Created: 2024/01/11 00:01:30 by artopall         #+#   #+# #+#   #+#     */
/*   Updated: 2024/01/13 11:16:19 by artopall          #######   ####### .qc  */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	while (*str && ft_islower(*str))
	{
		str += 1;
	}
	return (*str == 0);
}
