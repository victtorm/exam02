/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:32:24 by vbritto-          #+#    #+#             */
/*   Updated: 2024/01/17 17:40:17 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int do_op(int a, char b, int c)
{
	int res;

	if (b == '+')
		res = a + c;
	if (b == '-')
		res = a - c;
	if (b == '*')
		res = a * c;
	if (b == '/')
		res = a / c;
	return (res);
}


int	main(int argc, char **argv)
{
	if (argc == 4)
		printf("%i", do_op(atoi(argv[argc - 3]), argv[argc - 2][0], atoi(argv[argc - 1])));
	printf("\n");
	return (0);
}
