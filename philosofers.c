/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosofers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afraccal <afraccal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:57:25 by afraccal          #+#    #+#             */
/*   Updated: 2023/05/02 14:24:52 by afraccal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosofers.h"

int	main(int argc, char **argv)
{
	int		i;
	t_table	table;

	i = 1;
	if (argc != 5 && argc != 6)
		return (str_error("Numero argomenti sbagliato\n"));
	while (i < argc)
	{
		if (!is_number(argv[i]) || !ft_atoi(argv[i])
			|| argv[i][0] == '-')
			return (str_error("Argomenti non validi\n")); 
	}
	init_table(&table, argv);
	if (!&table)
		return (1);
	return (0);
}
