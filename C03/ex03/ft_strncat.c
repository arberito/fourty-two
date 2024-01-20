/* ************************************************************************** */
/*                                                                            */
<<<<<<< HEAD
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artopall <artopall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 06:08:57 by artopall          #+#    #+#             */
/*   Updated: 2024/01/18 22:05:15 by artopall         ###   ########.fr       */
=======
/*                                                     :::::::   :::::::      */
/*   ft_strncat.c                                     :+:   :+: :+:   :+:     */
/*                                                    +:+  :+:+ +:+  :+:+     */
/*   By: artopall <artopall@student.42.qc>            +#+ + +:+ +#+ + +:+     */
/*                                                    +#+#  +#+ +#+#  +#+     */
/*   Created: 2024/01/12 06:08:57 by artopall         #+#   #+# #+#   #+#     */
/*   Updated: 2024/01/18 11:09:28 by artopall          #######   ####### .qc  */
>>>>>>> b6ad5963a7422daba4d3989707b3ba1b1132bc23
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i += 1;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (*src && i < nb)
	{
<<<<<<< HEAD
		*dest = *src;
=======
		
		dest[dest_len + i] = *src;
>>>>>>> b6ad5963a7422daba4d3989707b3ba1b1132bc23
		i += 1;
		src += 1;
	}
<<<<<<< HEAD
	*dest = 0;
	return (temp);
=======
	dest[dest_len + i] = 0;
	return (dest);
>>>>>>> b6ad5963a7422daba4d3989707b3ba1b1132bc23
}
