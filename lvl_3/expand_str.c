/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:05:10 by vbritto-          #+#    #+#             */
/*   Updated: 2024/01/15 16:46:00 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	expand(char *str)
{
	int i = 0;
	int l = 0;

	while (str[l] != '\0')
		l++;
	l--;
	while ((str[l] == ' ' || str[l] == '\t') && l >= 0)
		l--;
	while ((str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
		i++;
	while (str[i] != '\0')
	{
		while ((str[i] != 32 && str[i] != '\t') && str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
		}
		if (i < l)
			write (1, "   ", 3);
		while ((str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
			i++;
	}
	return;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		expand(argv[argc - 1]);
	write(1, "\n", 1);
	return (0);
}
