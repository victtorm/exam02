/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:52:23 by vbritto-          #+#    #+#             */
/*   Updated: 2024/01/16 17:32:22 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char *ft_strncpy(char *a, char *b, int n)
{
	int i = 0;

	while (i < n && b[i])
	{
		a[i] = b[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}

size_t	count_w(char *str)
{
	size_t wc = 0;

	while (*str)
	{
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		if (*str && (*str != ' ' || *str != '\t' || *str != '\n'))
			wc++;
		while (*str && (*str != ' ' && *str != '\t' && *str != '\n'))
			str++;
	}
	return (wc);
}

char **ft_split(char *str)
{
	char **spl;
	int i = 0;
	int j;
	int k = 0;

	spl = (char **)malloc(sizeof(char) * count_w(str) + 1);
	if (!spl)
		return (NULL);
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if(j < i)
		{
			spl[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(spl[k++], &str[j], (i - j));
		}
	}
	spl[k] = NULL;
	return (spl);
}
/*
#include<unistd.h>
#include<stdio.h>


int main(int argc, char **argv)
{
	char **arr;

	arr = ft_split(argv[argc - 1]);

	int i = 0;
	int j = 0;

	while(arr[j] != NULL)
	{
		while (arr[j][i] != '\0')
		{
			write(1, &arr[j][i], 1);
			i++;
		}
		write (1, "\n", 1);
		i = 0;
		j++;
	}
	return (0);
}
/*
int main(int argc, char **argv)
{
	printf("%s", *ft_split(argv[argc - 1]));
}*/
