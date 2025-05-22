/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:57:36 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/03 18:00:14 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*Add print statement before return str

printf("%s", str);
*/

// int main()
// {
// 	char sentence[] = "WhsidsfioWISDIODIOA";
// 	ft_strlowcase(sentence);

// 	return 0;
// }
