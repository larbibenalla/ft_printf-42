/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexalow.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labenall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 21:14:21 by labenall          #+#    #+#             */
/*   Updated: 2021/12/05 16:56:34 by labenall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	my_ft_print_af(unsigned int un)
{
	if (un == 15)
		ft_printchar('f');
	else if (un == 14)
		ft_printchar('e');
	else if (un == 13)
		ft_printchar('d');
	else if (un == 12)
		ft_printchar('c');
	else if (un == 11)
		ft_printchar('b');
	else if (un == 10)
		ft_printchar('a');
	else
		ft_printchar(un + '0');
}

static void	my_ftprint_alow(unsigned int un, int *ret)
{
	if (un >= 16)
	{
		my_ftprint_alow(un / 16, ret);
		my_ftprint_alow(un % 16, ret);
	}
	else
	{
		my_ft_print_af(un);
		*ret = *ret + 1;
	}
}

int	ft_printhexalow(unsigned int un)
{
	int	ret;

	ret = 0;
	my_ftprint_alow(un, &ret);
	return (ret);
}
