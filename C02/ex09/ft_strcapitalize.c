/* ************************************************************************** */
/*                                                                            */
/*                                                     :::::::   :::::::      */
/*   ft_strcapitalize.c                               :+:   :+: :+:   :+:     */
/*                                                    +:+  :+:+ +:+  :+:+     */
/*   By: artopall <artopall@student.42.qc>            +#+ + +:+ +#+ + +:+     */
/*                                                    +#+#  +#+ +#+#  +#+     */
/*   Created: 2024/01/11 00:15:15 by artopall         #+#   #+# #+#   #+#     */
/*   Updated: 2024/01/14 17:50:10 by artopall          #######   ####### .qc  */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_isalpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	ft_isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strcapitalize(char *str)
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
	i = 0;
	while (str[i])
	{
		if (ft_isalpha(str[i]))
		{
			if (!ft_isalnum(str[i - 1]) && !ft_isalpha(str[i - 1]))
			{
				str[i] -= 32;
			}
		}
		i += 1;
	}
	return (str);
}
