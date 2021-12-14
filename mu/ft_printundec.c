/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printundec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labenall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 21:12:19 by labenall          #+#    #+#             */
/*   Updated: 2021/12/05 16:57:58 by labenall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	my_printf_num(unsigned int un, int *ret)
{
	if (un > 9)
	{
		my_printf_num(un / 10, ret);
		my_printf_num(un % 10, ret);
	}
	else
	{
		ft_printchar(un + '0');
		*ret = *ret + 1;
	}
}

int	ft_printundec(unsigned int un)
{
	int	ret;

	ret = 0;
	my_printf_num(un, &ret);
	return (ret);
}
