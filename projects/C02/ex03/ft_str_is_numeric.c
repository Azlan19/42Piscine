/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 13:01:55 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/25 21:33:06 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
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
		if ('0' <= str[i] && str[i] <= '9')
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
// 	char *string_1 = "1234567890";
// 	char *string_2 = "12345a7890";
	
// 	printf("\n1 = TRUE, 0 = FALSE\n\n");
// 	printf("'%s' is all numerical? %d\n",string_1, ft_str_is_numeric(string_1));
// 	printf("'%s' is all numerical? %d\n",string_2, ft_str_is_numeric(string_2));
	
// 	printf("\n");
	
// 	return 0;
// }
