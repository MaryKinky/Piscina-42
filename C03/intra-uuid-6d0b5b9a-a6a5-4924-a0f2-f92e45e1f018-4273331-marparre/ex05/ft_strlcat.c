/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marparre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 21:21:06 by marparre          #+#    #+#             */
/*   Updated: 2022/07/26 15:51:04 by marparre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)

{
	unsigned int	x;

	x = 0;
	while (str[x])
	{
		x++;
	}
	return (x);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)

{
	unsigned int	j;
	unsigned int	i;
	unsigned int	ldest;
	unsigned int	lsrc;

	lsrc = ft_strlen(src);
	ldest = ft_strlen(dest);
	i = 0;
	j = ft_strlen(dest);
	if (size != '\0')
	{	
		while (src[i] != '\0' && (j < size - 1))
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		dest[j] = '\0';
		if (size > j)
			return (ldest + lsrc);
	}
	return (size + lsrc);
}
/*
int	main(void)

{
	char	dest[20] = "Te ";
	char	src[20] = "quiero";
	char	d[20] = "Te ";
	char	s[20] = "quiero";

	printf("%i\n", ft_strlcat(dest, src, 2));
	printf("%s\n", dest);

	printf("%lu\n", strlcat(d, s, 2));
	printf("%s\n", d);
}*/
