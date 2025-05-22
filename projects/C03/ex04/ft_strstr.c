/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 08:52:05 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/17 16:37:42 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strstr() function locates the first occurrence of the null-terminated
string needle in the null-terminated string haystack.

If needle is an empty string, haystack is returned; if needle occurs
nowhere in haystack, NULL is returned; otherwise a pointer to the first
character of the first occurrence of needle is returned. */

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
// 	char *largestring = "Foo Bar Baz";
//     char *smallstring = " ";

// 	printf("%s", ft_strstr(largestring, smallstring));

// 	return (0);
// }
