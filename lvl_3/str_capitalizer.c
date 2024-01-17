/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:28:53 by vbritto-          #+#    #+#             */
/*   Updated: 2024/01/16 15:01:37 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	str_cap(char *str)
{
	int i = 0;

	if (str[i] >= 97 && str[i] <= 122)
	{
		str[i] -= 32;
		write (1, &str[i], 1);
		i++;
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122) && (str[i - 1] == ' ' || str[i - 1] == '\t'))
		{
			str[i] -= 32;
			write (1, &str[i], 1);
		}
		else if ((str[i] >= 65 && str[i] <= 90) && (str[i - 1] != 32 && str[i - 1] != '\t') && (i != 0))
		{
			str[i] += 32;
			write(1, &str[i], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return;
}

int	main(int argc, char **argv)
{
	int i = 1;

	if (argc >= 2)
	{
		while(i < argc)
		{
			str_cap(argv[i]);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
