/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marparre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 21:11:27 by marparre          #+#    #+#             */
/*   Updated: 2022/07/24 15:29:52 by marparre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)

{
	int	i;
	int	ret;

	i = 0;
	ret = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
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

	ret = ft_str_is_lowercase("");
	printf("%d\n", ret);
}*/
