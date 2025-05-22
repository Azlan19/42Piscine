/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 20:30:18 by oazlan            #+#    #+#             */
/*   Updated: 2025/05/21 07:43:57 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char *str)
{
	if (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f'
		|| *str == '\r' || *str == ' ')
	{
		return (1);
	}
	return (0);
}

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

int	basecheck(char *base)
{
	char	temp;
	int		i;
	int		j;

	i = 0;
	while (base[i] != '\0')
	{
		temp = base[i];
		if (temp == '+' || temp == '-' || temp == ' ' || (9 <= temp
				&& temp <= 13))
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (temp == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

int	position(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;

	result = 0;
	if (!basecheck(base))
		return (0);
	i = 0;
	while (ft_isspace(str))
		str++;
	sign = 1;
	while (position(*str, base) == -1)
	{
		if (!((*str == '-') || (*str == '+')))
			return (0);
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (position(*str, base) >= 0)
	{
		result = result * ft_strlen(base) + position(*str, base);
		str++;
	}
	return (sign * result);
}

// #include <stdio.h>

// int	main()
// {
// 	char str[] = "101010";
// 	char base[] = "01";

// 	printf("%d\n", ft_atoi_base(str, base));

// 	return (0);
// }