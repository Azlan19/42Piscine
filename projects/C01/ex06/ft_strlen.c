/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 00:59:51 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/24 23:13:35 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter;
	
	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

// #include <stdio.h>
// int main()
// {
// 	char *word = "Bamboozle";
	
// 	printf("The string length of '%s' is %d characters\n", word, ft_strlen(word));
	
// 	return 0;
// }
