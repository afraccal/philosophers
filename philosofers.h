/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosofers.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afraccal <afraccal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:49:18 by afraccal          #+#    #+#             */
/*   Updated: 2023/05/02 14:22:13 by afraccal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"
#include "pthread.h"
#include "unistd.h"
#include "sys/time.h"

typedef struct s_table
{
	int	n_philo;
	int	time_to_die;
	int	time_to_eat;
	int	time_to_sleep;
	int	n_times;
	int	forks;
}	t_table;

typedef struct s_philo
{
	int	number;
}	t_philo;

int	str_error(char *str);
int	is_number(char *str);
int	ft_atoi(const char *str);
int	get_time(void);
void ft_sleep(int time);
int	init_table(t_table *table, char **argv);
