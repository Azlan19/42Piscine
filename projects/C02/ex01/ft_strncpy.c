/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:56:01 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/01 17:29:21 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
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
// 	char destination[9] = "";

// 	printf("\nBefore:\n");
// 	ft_putstr(source);
// 	printf("\n");
// 	ft_putstr(destination);

// 	ft_strncpy(destination, source, 9);

// 	printf("\n\nAfter:\n");
// 	ft_putstr(source);
// 	printf("\n");
// 	ft_putstr(destination);

// 	return 0;
// }
