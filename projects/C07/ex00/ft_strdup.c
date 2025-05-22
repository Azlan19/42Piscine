/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 14:10:32 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/14 13:22:30 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
The strdup() function allocates sufficient memory for a copy of the
string s1, does the copy, and returns a pointer to it.  The pointer may
subsequently be used as an argument to the function free(3).

If insufficient memory is available, NULL is returned and errno is set to
ENOMEM.
*/
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	ptr = (char *)malloc((i * sizeof(char)) + 1);
	i = 0;
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// #include <stdio.h>
// int main()
// {
// 	char *string = "Hello World";
// 	printf("%s\n", ft_strdup(string));
// 	return 0;
// }
