/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marparre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:28:34 by marparre          #+#    #+#             */
/*   Updated: 2022/07/24 16:23:23 by marparre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)

{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)

{
	int		i;
	char	*letnum;

	i = 0;
	letnum = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			print('\\');
			print(letnum[(unsigned char) str[i] / 16]);
			print(letnum[(unsigned char) str[i] % 16]);
		}
		else
			print(str[i]);
			i++;
	}
}
/*
int	main(void)

{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	write(1, "\n", 1);
	ft_putstr_non_printable("");
}*/
