/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 09:49:36 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/25 21:16:20 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// #include <stdio.h>
// int main()
// {
// 	char source[] = "Copper";
// 	char destination[] = "Platinum";

// 	printf("\nBEFORE:\n");
// 	printf("Source      = %s\n", source);
// 	printf("Destination = %s\n", destination);
	
// 	ft_strcpy(destination, source);
	
// 	printf("\nAFTER:\n");
// 	printf("Source      = %s\n", source);
// 	printf("Destination = %s\n", destination);
	
// 	printf("\n");
	
// 	return 0;
// }
