/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marparre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:54:13 by marparre          #+#    #+#             */
/*   Updated: 2022/07/24 16:07:29 by marparre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] >= 65 && str[i] <= 90)
		{	
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_first(char *str)
{
	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] = str[0] - 32;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)

{
	int	i;

	i = 0;
	ft_strlowcase(str);
	ft_first(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (str[i - 1] < 65 || str[i - 1] > 90)
			{
				if (str[i - 1] < 97 || str[i - 1] > 122)
				{
					if (str[i - 1] < 48 || str[i - 1] > 57)
					{	
						str[i] = str[i] - 32;
					}
				}
			}
		}
		i++;
	}
	return (str);
}
/*
int	main(void)

{
	char	str[] = "salUt, comMent tu vas ? 42moTs quarAnte-deux; cinquAnte+et+un";

	ft_strcapitalize(str);
	printf("%s\n", str);
}*/
