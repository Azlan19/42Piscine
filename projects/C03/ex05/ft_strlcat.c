/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 19:38:32 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/26 21:12:50 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
	{
		return (src_len + size);
	}
	i = 0;
	while (src[i] != '\0' && i + dest_len < (size - 1))
	{
		dest[i + dest_len] = src[i];
		i++;
	}
	dest[i + dest_len] = '\0';
	return (dest_len + src_len);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char dest[30] = "Hello, ";
// 	char src[] = "world!";
// 	unsigned int size = sizeof(dest);
// 	unsigned int result;

// 	printf("\nBEFORE:\n");
// 	printf("Source      = '%s'\n", src);
// 	printf("Destination = '%s'\n", dest);
// 	printf("Buffer size = %u\n", size);
	
// 	result = ft_strlcat(dest, src, size);
	
// 	printf("\nAFTER:\n");
// 	printf("Destination = '%s'\n", dest);
// 	printf("Total length attempted = %u\n", result);
	
// 	printf("\n");
	
// 	return (0);
// }
