/* ************************************************************************** */
/*                                                                            */
/*                                                     :::::::   :::::::      */
/*   ft_strncpy.c                                     :+:   :+: :+:   :+:     */
/*                                                    +:+  :+:+ +:+  :+:+     */
/*   By: artopall <artopall@student.42.qc>            +#+ + +:+ +#+ + +:+     */
/*                                                    +#+#  +#+ +#+#  +#+     */
/*   Created: 2024/01/10 23:55:06 by artopall         #+#   #+# #+#   #+#     */
/*   Updated: 2024/01/13 19:21:04 by artopall          #######   ####### .qc  */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i += 1;
	}
	while (i < n)
	{
		dest[i] = 0;
		i += 1;
	}
	return (dest);
}
