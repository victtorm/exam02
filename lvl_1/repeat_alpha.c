/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:16:28 by vbritto-          #+#    #+#             */
/*   Updated: 2024/01/15 11:42:48 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int rep_l(char a)
{
	int i = 0;
	char alp[] = "abcdefghijklmnopqrstuvwxyz";
	char alp_u[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (alp[i] != '\0')
	{
		if(a == alp[i] || a == alp_u[i])
			return (i);
		i++;
	}
	return (0);
}

void	rep_aplha(char *str)
{
	int i = 0;
	int l;

	while(str[i] != '\0')
	{
		l = rep_l(str[i]);
		while (l >= 0)
		{
			write (1, &str[i], 1);
			l--;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rep_aplha(argv[argc - 1]);
	write(1, "\n", 1);
	return (0);
}
