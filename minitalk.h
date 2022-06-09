/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:42:57 by donchoi           #+#    #+#             */
/*   Updated: 2022/06/03 14:42:57 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <stdio.h>
# include <signal.h>
# include "libft/libft.h"

void	get_sig(int sig);

void	get_str(int pid, char *str);
void	set_sig(int pid, char *str, int length);
void	send_sig(pid_t pid, int signo);

#endif