/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:23:06 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/25 21:41:59 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
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
		if (32 <= str[i] && str[i] <= 126)
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
// 	char *string_1 = "a1Af   ";
// 	char *string_2 = "a1Af\t";
	
// 	printf("\n1 = TRUE, 0 = FALSE\n\n");
// 	printf("'%s' is all printable? %d\n",string_1, ft_str_is_printable(string_1));
// 	printf("'%s' is all printable? %d\n",string_2, ft_str_is_printable(string_2));
	
// 	printf("\n");
	
// 	return 0;
// }
