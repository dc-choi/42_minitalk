/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 18:23:20 by donchoi           #+#    #+#             */
/*   Updated: 2022/06/02 18:23:20 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	send_sig(pid_t pid, int signo)
{
	kill(pid, signo);
	usleep(30);
}

void	set_sig(int pid, char *str, int length)
{
	int	byte_index;
	int	bit_index;
	int	bit_temp;

	byte_index = 0;
	while (byte_index < length)
	{
		bit_index = 0;
		while (bit_index < 8)
		{
			bit_temp = str[byte_index] >> (7 - bit_index) & 1;
			if (bit_temp == 0)
				send_sig(pid, SIGUSR1);
			else if (bit_temp == 1)
				send_sig(pid, SIGUSR2);
			bit_index++;
		}
		usleep(300);
		byte_index++;
	}
}

void	get_str(int pid, char *str)
{
	int		length;
	char	*send;

	send = ft_strjoin(str, "\n");
	length = ft_strlen(send);
	set_sig(pid, send, length);
	free(send);
	exit(0);
}

int	main(int argc, char *argv[])
{
	pid_t	pid;

	if (argc != 3)
	{
		ft_putstr_fd("Argument is Wrong!!\n", 1);
		exit(1);
	}
	pid = ft_atoi(argv[1]);
	if (pid < 101 || pid > 99999)
	{
		ft_putstr_fd("Invalid PID...\n", 1);
		exit(1);
	}
	get_str(pid, argv[2]);
}
