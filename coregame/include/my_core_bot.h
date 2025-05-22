/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_core_bot.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seaydemi <seaydemi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 18:10:13 by seaydemi          #+#    #+#             */
/*   Updated: 2025/05/18 18:10:18 by seaydemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_CORE_BOT_H
# define MY_CORE_BOT_H

# include "/core/con_lib.h"
# include <stdio.h>

int		no_of_workers(void);
int		number_of_warriors(void);
void	spawner(void);
void	warrior_capability(t_obj *curr, t_obj *enemy_core);
void	worker_capability(t_obj *curr, t_obj *enemy_core);

#endif
