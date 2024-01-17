/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:48:33 by vbritto-          #+#    #+#             */
/*   Updated: 2024/01/15 17:54:57 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ulstr(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if(str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		else if(str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		write(1, &str[i], 1);
		i++;
	}
	return;
}

int main(int argc, char **argv)
{
	if(argc == 2)
		ulstr(argv[argc -1]);
	write(1, "\n", 1);
	return (0);
}
