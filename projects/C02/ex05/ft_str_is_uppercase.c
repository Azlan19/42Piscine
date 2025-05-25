/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:20:01 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/25 21:36:28 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	statement;

	if (*str == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			statement = 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (statement);
}

// #include <stdio.h>
// int main()
// {
// 	char *string_1 = "ABCDEFGHIJK";
// 	char *string_2 = "ABCDEFGhIJK";
	
// 	printf("\n1 = TRUE, 0 = FALSE\n\n");
// 	printf("'%s' is all uppercase? %d\n",string_1, ft_str_is_uppercase(string_1));
// 	printf("'%s' is all uppercase? %d\n",string_2, ft_str_is_uppercase(string_2));
	
// 	printf("\n");
	
// 	return 0;
// }
