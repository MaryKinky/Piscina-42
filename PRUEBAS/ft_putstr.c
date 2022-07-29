/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marparre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 22:59:00 by marparre          #+#    #+#             */
/*   Updated: 2022/07/28 23:02:56 by marparre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	int i = 0;
	
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(void)

{
	char	str[] = "make";

	ft_putstr(str);
}
