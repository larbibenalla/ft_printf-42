/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdecimal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labenall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 19:47:07 by labenall          #+#    #+#             */
/*   Updated: 2021/12/05 16:43:12 by labenall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	my_ft_print(unsigned int un, int *ret)
{
	char	c;

	if (un >= 10)
	{
		my_ft_print(un / 10, ret);
		my_ft_print(un % 10, ret);
	}
	else
	{
		c = un + '0';
		write(1, &c, 1);
		*ret = *ret +1;
	}
}

int	ft_printdecimal(int n)
{
	unsigned int	un;
	int				ret;

	ret = 0;
	if (n < 0)
	{
		un = n * (-1);
		write(1, "-", 1);
		ret++;
	}
	else
		un = n;
	my_ft_print(un, &ret);
	return (ret);
}
/*#include <stdio.h>
int main(int ac,char **av)
{
	int a = ft_printdecimal(atoi(av[1]));
	printf("\n%d",a);
}*/
