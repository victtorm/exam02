/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:56:27 by vbritto-          #+#    #+#             */
/*   Updated: 2024/01/15 18:14:36 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int i = 0;
	int sin = 1;
	int res = 0;

	if(str[i] == 45)
	{
		sin *= -1;
		i++;
	}
	while (str[i] == 45 || str[i] == 43)
		i++;
	while ((str[i] != '\0') && (str[i] >= 48 && str[i] <= 57))
	{
			res *= 10;
			res += str[i] - '0';
			i++;
	}
	return (res * sin);
}
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char **argv)
{
	printf("%i\n", ft_atoi(argv[argc - 1]));
	printf("%i", atoi(argv[argc - 1]));
}

