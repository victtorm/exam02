/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:02:15 by vbritto-          #+#    #+#             */
/*   Updated: 2024/01/16 18:12:09 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	if(n == 0)
		return (0);
	if(n == 1)
		return (1);
	while (n != 1)
	{
		if(n % 2 != 0)
			return (0);
		n /= 2;
	}
	return (1);
}
/*
#include<stdio.h>

int main()
{
	unsigned int pwr = 1;

	printf("%i", is_power_of_2(pwr));
	return (0) ;
}
*/
