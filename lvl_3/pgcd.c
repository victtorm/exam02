/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 16:39:53 by vbritto-          #+#    #+#             */
/*   Updated: 2024/01/06 17:15:15 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	pgdc(int a, int b)
{
	int temp;

	while (a % b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return (b);

}

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%i", pgdc(atoi(argv[argc - 2]), atoi(argv[argc - 1])));
	printf("\n");
	return (0);
}
