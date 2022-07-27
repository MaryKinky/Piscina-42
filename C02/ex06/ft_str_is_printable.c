/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marparre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 21:54:56 by marparre          #+#    #+#             */
/*   Updated: 2022/07/24 15:33:39 by marparre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)

{
	int	i;
	int	ret;

	i = 0;
	ret = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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

	ret = ft_str_is_printable("");
	printf("%d\n", ret);
}*/
