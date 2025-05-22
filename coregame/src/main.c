/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seaydemi <seaydemi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 18:29:01 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/18 18:11:06 by seaydemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/my_core_bot.h"

void	ft_init_func(void *data);
void	ft_user_loop(void *data);

int	main(int argc, char **argv)
{
	int	won;

	ft_enable_debug();
	ft_init_con("seaydemi", &argc, argv);
	won = ft_loop(&ft_init_func, &ft_user_loop, NULL, NULL);
	ft_close_con();
	if (won)
		return (0);
	return (1);
}

void	ft_init_func(void *data)
{
	(void)data;
	printf("Init CORE Bot\n");
}

void	ft_user_loop(void *data)
{
	t_obj	**units;
	t_obj	*enemy_core;
	t_obj	*curr;
	int		i;

	(void)data;
	units = ft_get_my_units();
	enemy_core = ft_get_first_opponent_core();
	spawner();
	i = 0;
	while (units[i])
	{
		curr = units[i];
		if (curr->s_unit.type_id == UNIT_WARRIOR)
		{
			warrior_capability(curr, enemy_core);
		}
		else if (curr->s_unit.type_id == UNIT_WORKER)
		{
			worker_capability(curr, enemy_core);
		}
		i++;
	}
	free(units);
}
