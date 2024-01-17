/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 15:36:51 by vbritto-          #+#    #+#             */
/*   Updated: 2024/01/06 16:37:54 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	last_word(char *str)
{
	int	i = 0;
	int j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			j++;
		i++;
	}
	if (j == 0)
	{
		while (str[j] != '\0')
		{
			write (1, &str[j], 1);
			j++;
		}
		return ;
	}
	i--;
	while (str[i] == ' ' || str[i] == '\t')
		i--;
	while (i >= 0)
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			i++;
			while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
			{
				write (1, &str[i], 1);
				i++;
			}
			return ;
		}
		i--;
	}
	return ;
}


int	main (int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[argc -1]);
	write (1, "\n", 1);
	return (0);
}
