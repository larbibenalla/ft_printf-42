/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexaupp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labenall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 21:15:25 by labenall          #+#    #+#             */
/*   Updated: 2021/12/05 17:04:37 by labenall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_aff(unsigned int un)
{
	if (un == 15)
		ft_printchar('F');
	else if (un == 14)
		ft_printchar('E');
	else if (un == 13)
		ft_printchar('D');
	else if (un == 12)
		ft_printchar('C');
	else if (un == 11)
		ft_printchar('B');
	else if (un == 10)
		ft_printchar('A');
	else
		ft_printchar(un + '0');
}

static void	my_ftprint_aupp(unsigned int un, int *ret)
{
	if (un >= 16)
	{
		my_ftprint_aupp(un / 16, ret);
		my_ftprint_aupp(un % 16, ret);
	}
	else
	{
		ft_print_aff(un);
		*ret = *ret + 1;
	}
}

int	ft_printhexaupp(unsigned int un)
{
	int	ret;

	ret = 0;
	my_ftprint_aupp(un, &ret);
	return (ret);
}
