/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:25:18 by donchoi           #+#    #+#             */
/*   Updated: 2021/12/14 15:56:51 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	b_len;
	size_t	l_len;
	size_t	size;

	if (*little == '\0')
		return ((char *)big);
	b_len = ft_strlen(big);
	l_len = ft_strlen(little);
	if (b_len < l_len || n < l_len)
		return (0);
	if (b_len > n)
		size = n;
	else
		size = b_len;
	while (size >= l_len)
	{
		if (ft_memcmp(big, little, l_len) == 0)
			return ((char *)big);
		big++;
		size--;
	}
	return (0);
}
