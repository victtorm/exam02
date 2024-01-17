/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:41:50 by vbritto-          #+#    #+#             */
/*   Updated: 2024/01/17 18:05:13 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



char	*ft_strpbrk(const char *s1, const char *s2)
{
	const char *tmp;

	while(*s1)
	{
		tmp = s2;
		while (*tmp)
		{
			if(s1[0] == tmp[0])
				return ((char *)s1);
			tmp++;
		}
		s1++;
	}
	return(0);

}
#include<string.h>
#include<stdio.h>

int main(int argc, char **argv)
{
	printf("%s\n", ft_strpbrk(argv[argc - 2], argv[argc - 1]));
	printf("%s", strpbrk(argv[argc - 2], argv[argc - 1]));
	return (0);
}
