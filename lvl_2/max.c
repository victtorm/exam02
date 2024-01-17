/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:33:53 by vbritto-          #+#    #+#             */
/*   Updated: 2024/01/16 17:52:36 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int * tab, unsigned int len)
{
	unsigned int i = 0;
	int max = tab[0];

	while (i <= len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return(max);

}
/*
#include<stdio.h>
int main()
{
	int tab[] = {2, 5, 18, -11, 55555, -19};
	int len = 6;

	printf("%i",max(tab, len));
	return (0);
}*/

