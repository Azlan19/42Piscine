/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 09:49:36 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/01 16:50:32 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// void	ft_putstr(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		write(1, &str[i], 1);
// 		i++;
// 	}
// }

// int main()
// {
// 	char source[7] = "Copper";
// 	char destination[9] = "Platinum";

// 	printf("\nBefore:\n");
// 	ft_putstr(source);
// 	printf("\n");
// 	ft_putstr(destination);

// 	ft_strcpy(destination, source);

// 	printf("\n\nAfter:\n");
// 	ft_putstr(source);
// 	printf("\n");
// 	ft_putstr(destination);

// 	return 0;
// }
