/* ************************************************************************** */
/*                                                                            */
/*                                                     :::::::   :::::::      */
/*   ft_strlowcase.c                                  :+:   :+: :+:   :+:     */
/*                                                    +:+  :+:+ +:+  :+:+     */
/*   By: artopall <artopall@student.42.qc>            +#+ + +:+ +#+ + +:+     */
/*                                                    +#+#  +#+ +#+#  +#+     */
/*   Created: 2024/01/11 00:12:22 by artopall         #+#   #+# #+#   #+#     */
/*   Updated: 2024/01/13 19:21:19 by artopall          #######   ####### .qc  */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isupper(str[i]))
		{
			str[i] += 32;
		}
		i += 1;
	}
	return (str);
}
