/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marparre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:45:38 by marparre          #+#    #+#             */
/*   Updated: 2022/07/24 20:44:36 by marparre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)

{
	int	i;
	int	ret;

	i = 0;
	ret = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
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

	ret = ft_str_is_alpha("yutJ");
	printf("%d\n", ret);
}*/
