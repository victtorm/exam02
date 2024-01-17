/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:16:41 by vbritto-          #+#    #+#             */
/*   Updated: 2024/01/15 12:45:56 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	*ft_range(int start, int end)
{
	int i = 1;
	int *arr;
	int len;

	if (start > end)
		len = start - end + 1;
	if (end > start)
		len = end - start + 1;
	arr = (int *)malloc(sizeof(int) * len);
	arr[0] = start;
	while (i < len)
	{
		if (start > end)
			arr[i] = start - i;
		if (end > start)
			arr[i] = start + i;
		i++;
	}
	return (arr);
}
/*
#include<stdio.h>
int main ()
{
	int s = -1;
	int e = 2;
	int *arr;
	int i = 0;
	int len = 3;

	arr = ft_range(s, e);
	while (len > i)
	{
		printf("%i ", arr[i]);
		i++;
	}
	return(0);
}*/
