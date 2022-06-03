/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:09:55 by donchoi           #+#    #+#             */
/*   Updated: 2021/12/14 16:11:27 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t n)
{
	void	*mem;

	mem = malloc(nmemb * n);
	if (!(mem))
		return (NULL);
	ft_bzero(mem, (nmemb * n));
	return (mem);
}
