/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afraccal <afraccal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:05:49 by afraccal          #+#    #+#             */
/*   Updated: 2023/05/02 14:12:46 by afraccal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosofers.h"

int	get_time(void)
{
	struct timeval tv;
	gettimeofday(&tv, NULL);
	return(tv.tv_sec * 1000 + tv.tv_usec / 1000);
}

void ft_sleep(int time)
{
	int start;

	start = 0;
	start = get_time();
	while ((get_time() - start) < time)
		usleep (time / 10);
}