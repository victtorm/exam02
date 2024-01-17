/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:08:08 by vbritto-          #+#    #+#             */
/*   Updated: 2024/01/16 15:25:38 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	isprime(int n)
{
	int i = 2;

	while (i <= n / i)
	{
		if(n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	fprime(int n)
{
	int div = 2;

	while(div <= n)
	{
		if (isprime(div))
			while (n % div == 0)
			{
				printf("%i", div);
				if (n != div)
					printf("*");
				n /= div;
			}
		div++;
	}

}

int	main(int argc, char **argv)
{
	if(argc == 2)
		fprime(atoi(argv[argc - 1]));
	printf("\n");
	return (0);
}
