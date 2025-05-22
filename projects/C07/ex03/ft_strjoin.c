/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 20:56:19 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/20 17:33:57 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_length(int size, char **strs)
{
	int	counter;
	int	i;
	int	j;

	counter = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			counter++;
			j++;
		}
		i++;
	}
	return (counter);
}

void	ft_concat(int size, char **strs, char *sep, char *strjoin)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		if (i > 0)
		{
			while (sep[j] != '\0')
			{
				strjoin[k++] = sep[j++];
			}
		}
		j = 0;
		while (strs[i][j] != '\0')
		{
			strjoin[k++] = strs[i][j++];
		}
		i++;
	}
	strjoin[k] = '\0';
	return ;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_len;
	int		sep_len;
	char	*fullstr;

	full_len = ft_length(size, strs);
	sep_len = ft_length(1, &sep);
	fullstr = malloc(sizeof(char) * (full_len + (sep_len * (size - 1)) + 1));
	ft_concat(size, strs, sep, fullstr);
	return (fullstr);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int		size;
// 	char	**strings;
// 	char	sep[] = "|||";

// 	size = 4;
// 	strings = malloc(1000 * sizeof(char));
// 	strings[0] = "I";
// 	strings[1] = "hope";
// 	strings[2] = "this";
// 	strings[3] = "works";
// 	printf("%s", ft_strjoin(size, strings, sep));
// }

// int	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// char	*ft_strcat(char *dest, char *src)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	while (dest[i] != '\0')
// 	{
// 		i++;
// 	}
// 	j = 0;
// 	while (src[j] != '\0')
// 	{
// 		dest[i] = src[j];
// 		i++;
// 		j++;
// 	}
// 	dest[i] = '\0';
// 	return (dest);
// }

// int	ft_full_length(int size, char **strs, char *sep)
// {
// 	int	i;
// 	int	length;

// 	i = 0;
// 	while (i < size)
// 	{
// 		length = length + ft_strlen(strs[i]);
// 		i++;
// 	}
// 	length = length + (ft_strlen(sep) * (size - 1));
// 	return (length);
// }

// char	*ft_strjoin(int size, char **strs, char *sep)
// {
// 	char	*full;
// 	int		i;

// 	if (size == 0)
// 	{
// 		full = (char *) malloc(sizeof(char));
// 		*full = 0;
// 		return (full);
// 	}
// 	full = (char *) malloc(sizeof(char) * ft_full_length(size, strs, sep));
// 	if (full == NULL)
// 	{
// 		return (full);
// 	}
// 	i = 0;
// 	while (i < size)
// 	{
// 		ft_strcat(full, strs[i]);
// 		if (i < size - 1)
// 		{
// 			ft_strcat(full, sep);
// 		}
// 		i++;
// 	}
// 	return (full);
// }
