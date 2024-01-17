/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:24:50 by vbritto-          #+#    #+#             */
/*   Updated: 2024/01/15 15:02:25 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while(reject[j] != '\0')
		{
			if(s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
/*
#include<stdio.h>

int main(int argc, char **argv)
{
	printf("%lu\n", ft_strcspn(argv[argc - 2], argv[argc -1]));
	printf("%lu\n", strcspn(argv[argc - 2], argv[argc -1]));
}
*/
