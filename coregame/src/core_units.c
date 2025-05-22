/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_units.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamrouss <mamrouss@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 17:18:38 by mamrouss          #+#    #+#             */
/*   Updated: 2025/05/18 17:19:04 by mamrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/my_core_bot.h"

int	no_of_workers(void)
{
	t_obj	**units;
	t_obj	*curr;
	int		counter;
	int		i;

	units = ft_get_my_units();
	counter = 0;
	i = 0;
	while (units[i])
	{
		curr = units[i];
		if (curr->s_unit.type_id == UNIT_WORKER)
		{
			counter++;
		}
		i++;
	}
	free(units);
	return (counter);
}

int	number_of_warriors(void)
{
	t_obj	**units;
	t_obj	*curr;
	int		counter;
	int		i;

	units = ft_get_my_units();
	counter = 0;
	i = 0;
	while (units[i])
	{
		curr = units[i];
		if (curr->s_unit.type_id == UNIT_WARRIOR)
		{
			counter++;
		}
		i++;
	}
	free(units);
	return (counter);
}

void	spawner(void)
{
	t_obj	**units;
	t_obj	*curr;
	t_obj	*resource;
	int		i;

	i = 0;
	units = ft_get_my_units();
	curr = units[i];
	resource = ft_get_nearest_resource(curr);
	if (no_of_workers() < 4 && resource != 0)
	{
		ft_create_unit(UNIT_WORKER);
	}
	else if (no_of_workers() < 4 && resource != 0 && number_of_warriors() > 1)
	{
		ft_create_unit(UNIT_WORKER);
	}
	else
	{
		ft_create_unit(UNIT_WARRIOR);
	}
}

void	warrior_capability(t_obj *curr, t_obj *enemy_core)
{
	t_obj	*enemy;

	enemy_core = ft_get_first_opponent_core();
	enemy = ft_get_nearest_opponent_unit(curr);
	if (enemy)
	{
		ft_travel_attack(curr, enemy);
	}
	else
	{
		ft_travel_attack(curr, enemy_core);
	}
}

void	worker_capability(t_obj *curr, t_obj *enemy_core)
{
	t_obj	*enemy;
	t_obj	*resource;

	enemy_core = ft_get_first_opponent_core();
	enemy = ft_get_nearest_opponent_unit(curr);
	resource = ft_get_nearest_resource(curr);
	if (resource != 0)
	{
		ft_travel_attack(curr, resource);
	}
	else if (enemy)
	{
		ft_travel_attack(curr, enemy);
	}
	else
	{
		ft_travel_attack(curr, enemy_core);
	}
}
