/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:19:03 by vbritto-          #+#    #+#             */
/*   Updated: 2024/01/15 18:54:29 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int i = 1;
	int temp;

	if (a >= 2147493647 || b >= 2147493647)
		return(0);
	while ((a) && (b))
	{
		temp = a * i;
		if (temp % b == 0)
			return (temp);
		i++;
	}
	return (a);
}/*
#include<stdio.h>
int main()
{
	unsigned int a = -13;
	unsigned int b = 2147493648;

	printf("%i", lcm(a, b));
	return(0);
}*/
