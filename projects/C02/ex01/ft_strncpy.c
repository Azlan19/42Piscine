/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:56:01 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/25 21:19:53 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// #include <stdio.h>
// int main()
// {
// 	char source[] = "Copper";
// 	char destination[] = "Platinum";
// 	int copy_size = 4;

// 	printf("\nBEFORE:\n");
// 	printf("Source      = %s\n", source);
// 	printf("Destination = %s\n", destination);
	
// 	ft_strncpy(destination, source, copy_size);
	
// 	printf("\nAFTER:\n");
// 	printf("Source      = %s\n", source);
// 	printf("Destination = %s\n", destination);
	
// 	printf("\n");
	
// 	return 0;
// }
