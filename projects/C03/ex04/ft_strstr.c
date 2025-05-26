/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 08:52:05 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/26 21:07:51 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*ptr;

	ptr = 0;
	if (*to_find == '\0')
	{
		return (str);
	}
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == 0)
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (ptr);
}

// #include <stdio.h>
// int main()
// {
// 	char *haystack = "Foo Bar Baz";
//     char *needle = "ar";

// 	printf("\n");
	
// 	printf("Needle       = '%s'\n", needle);
// 	printf("Haystack     = '%s'\n", haystack);
	
// 	printf("\n");
	
// 	printf("Final string = '%s'\n", ft_strstr(haystack, needle));
	
// 	printf("\n");
	
// 	return (0);
// }
