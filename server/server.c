/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 18:22:27 by donchoi           #+#    #+#             */
/*   Updated: 2022/06/04 18:12:55 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	get_sig(int sig)
{
	static char	temp;
	static int	bit;

	if (sig == SIGUSR1)
	{
		temp |= 0;
		if (bit < 7)
			temp <<= 1;
	}
	else if (sig == SIGUSR2)
	{
		temp |= 1;
		if (bit < 7)
			temp <<= 1;
	}
	bit++;
	if (bit == 8)
	{
		write(1, &temp, 1);
		bit = 0;
		temp = 0;
	}
}

int	main(void)
{
	ft_putstr_fd("pid: ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putchar_fd('\n', 1);
	signal(SIGUSR1, get_sig);
	signal(SIGUSR2, get_sig);
	while (1)
		pause();
}
