/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marparre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 21:37:40 by marparre          #+#    #+#             */
/*   Updated: 2022/07/24 15:31:56 by marparre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)

{
	int	i;
	int	ret;

	i = 0;
	ret = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
		{
			ret = 0;
		}
		i++;
	}
	return (ret);
}
/*
int	main(void)

{
	int	ret;

	ret = ft_str_is_uppercase("");
	printf("%d\n", ret);
}*/
