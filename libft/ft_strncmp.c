/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:10:58 by donchoi           #+#    #+#             */
/*   Updated: 2021/12/14 13:10:58 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			idx;
	unsigned char	*b1;
	unsigned char	*b2;

	idx = 0;
	b1 = (unsigned char *)s1;
	b2 = (unsigned char *)s2;
	while (n)
	{
		if (b1[idx] != b2[idx] || b1[idx] == 0 || b2[idx] == 0)
			return (b1[idx] - b2[idx]);
		idx++;
		n--;
	}
	return (0);
}
