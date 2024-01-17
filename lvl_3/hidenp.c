/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:16:05 by vbritto-          #+#    #+#             */
/*   Updated: 2024/01/16 19:09:12 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	hidenp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while ((s1[i] != '\0') && (s2[j] != '\0'))
	{
		if (s1[i] == s2[j])
			i++;
		j++;
	}
	if (s1[i] == '\0')
		return (1);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	if(argc == 3)
	{
		if (hidenp(argv[argc - 2], argv[argc - 1]) == 1)
			write (1 , "1", 1);
		else
			write (1 , "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}

