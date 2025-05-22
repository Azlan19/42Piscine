/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 08:33:03 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/21 11:54:37 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	ptr = malloc((i * sizeof(char)) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*ptr;
	int					i;

	ptr = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		ptr[i].size = ft_strlen(av[i]);
		ptr[i].str = av[i];
		ptr[i].copy = ft_strdup(av[i]);
		if (ptr[i].copy == NULL)
		{
			while (--i >= 0)
				free(ptr[i].copy);
			free(ptr);
			return (NULL);
		}
		i++;
	}
	ptr[i].size = 0;
	ptr[i].str = NULL;
	ptr[i].copy = NULL;
	return (ptr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char				*str_arr[3];
// 	struct s_stock_str	*p_str;

// 	char *str1 = "Hola";
// 	char *str2 = "Disestablishmentarianism";
// 	char *str3 = "Phenomenon";
// 	str_arr[0] = str1;
// 	str_arr[1] = str2;
// 	str_arr[2] = str3;
// 	int size = 3;
// 	p_str = ft_strs_to_tab(size, str_arr);
// 	printf("%s\n", p_str[0].str);
// 	printf("%s\n", p_str[1].str);
// 	printf("%s\n", p_str[2].str);
// }