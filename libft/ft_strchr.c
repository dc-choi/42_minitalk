/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:27:15 by donchoi           #+#    #+#             */
/*   Updated: 2021/12/13 17:27:15 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int i)
{
	char	find;
	int		idx;

	find = (unsigned char)i;
	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] == find)
			return ((char *)str + idx);
		idx++;
	}
	if (str[idx] == find)
		return ((char *)str + idx);
	return (0);
}
