/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:17:50 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/25 21:32:09 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
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
		if ('a' <= str[i] && str[i] <= 'z')
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
// 	char *string_1 = "abcdefghijk";
// 	char *string_2 = "abcdefgHijk";
	
// 	printf("\n1 = TRUE, 0 = FALSE\n\n");
// 	printf("'%s' is all lowercase? %d\n",string_1, ft_str_is_lowercase(string_1));
// 	printf("'%s' is all lowercase? %d\n",string_2, ft_str_is_lowercase(string_2));
	
// 	printf("\n");
	
// 	return 0;
// }
