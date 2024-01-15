/* ************************************************************************** */
/*                                                                            */
/*                                                     :::::::   :::::::      */
/*   ft_strupcase.c                                   :+:   :+: :+:   :+:     */
/*                                                    +:+  :+:+ +:+  :+:+     */
/*   By: artopall <artopall@student.42.qc>            +#+ + +:+ +#+ + +:+     */
/*                                                    +#+#  +#+ +#+#  +#+     */
/*   Created: 2024/01/11 00:10:38 by artopall         #+#   #+# #+#   #+#     */
/*   Updated: 2024/01/13 11:16:10 by artopall          #######   ####### .qc  */
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

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_islower(str[i]))
		{
			str[i] -= 32;
		}
		i += 1;
	}
	return (str);
}
