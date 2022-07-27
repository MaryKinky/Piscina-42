/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marparre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:22:23 by marparre          #+#    #+#             */
/*   Updated: 2022/07/24 16:17:35 by marparre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_long(char *str)

{
	unsigned int	c;

	c = 0;
	while (str[c] != 0)
	{
		c++;
	}
	return (c);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)

{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = ft_long(src);
	if (size == 0)
	{
		return (x);
	}
	while (src[i] != 0 && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (x);
}
/*
int	main(void)

{
	char	src[] = "mariposa";
	char	dest[] = "";
	int	size;

	size = 3;
	printf("%d", ft_strlcpy(dest, src, size));
	printf("%s\n", dest);
}*/
