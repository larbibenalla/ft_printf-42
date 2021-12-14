/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labenall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:51:23 by labenall          #+#    #+#             */
/*   Updated: 2021/12/05 16:53:22 by labenall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_af(unsigned long long a)
{
	if (a == 10)
		ft_printchar('a');
	else if (a == 11)
		ft_printchar('b');
	else if (a == 12)
		ft_printchar('c');
	else if (a == 13)
		ft_printchar('d');
	else if (a == 14)
		ft_printchar('e');
	else if (a == 15)
		ft_printchar('f');
	else
		ft_printchar(a + '0');
}

static void	my_ft_print_hexa(unsigned long long a, int *ret)
{
	if (a >= 16)
	{
		my_ft_print_hexa(a / 16, ret);
		my_ft_print_hexa(a % 16, ret);
	}
	else
	{
		ft_print_af(a);
		*ret = *ret + 1;
	}
}

int	ft_printhexa(void *v)
{
	int					ret;
	unsigned long long	a;

	a = ((unsigned long long)v);
	ret = 0;
	ret += write(1, "0x", 2);
	my_ft_print_hexa(a, &ret);
	return (ret);
}
/*#include <stdio.h>
int main(int ac,char **av)
{
	int a = ft_printhexa(9223372036854775807);
	printf("%d", a);
	return 0;
}*/
