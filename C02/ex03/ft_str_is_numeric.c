/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marparre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 20:52:42 by marparre          #+#    #+#             */
/*   Updated: 2022/07/24 15:27:48 by marparre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)

{
	int	i;
	int	ret;

	i = 0;
	ret = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
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

	ret = ft_str_is_numeric("98");
	printf("%d\n", ret);
}*/
