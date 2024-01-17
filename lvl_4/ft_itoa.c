/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:47:49 by vbritto-          #+#    #+#             */
/*   Updated: 2024/01/15 17:22:14 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int lnbr(int nbr)
{
	int i = 0;
	if(nbr == 0)
		i++;
	while (nbr != 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	char *str;
	int sin = 1;
	int len;

	len = lnbr(nbr);
	if(nbr < 0)
	{
		sin *= -1;
		len += 1;
		nbr *= -1;
	}
	str = (char *)malloc(sizeof(char) * len + 1);
	if(!str)
		return(NULL);
	str[len] = '\0';
	len --;
	if (nbr == 0)
	{
		str[len] = '0';
		return (str);
	}
	while (nbr)
	{
		str[len] = nbr % 10 + '0';
		nbr /= 10;
		len--;
	}
	if (sin < 0)
		str[len] = '-';
	return (str);
}

#include <stdio.h>
#include <unistd.h>
int main(int argc, char **argv)
{
	int s;
	int i = 0;
	char *str;

	s = atoi(argv[argc -1]);
	str = ft_itoa(s);
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}
