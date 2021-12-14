/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labenall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:23:37 by labenall          #+#    #+#             */
/*   Updated: 2021/12/14 01:53:30 by labenall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	my_print(va_list ap, char c)
{
	int	ret;

	ret = 0;
	if (c == 'c')
		ret += ft_printchar(va_arg(ap, int));
	else if (c == 's')
		ret += ft_printstr(va_arg(ap, char *));
	else if (c == 'p')
		ret += ft_printhexa(va_arg(ap, void *));
	else if (c == 'd' || c == 'i')
		ret += ft_printdecimal(va_arg(ap, int));
	else if (c == 'u')
		ret += ft_printundec(va_arg(ap, unsigned int));
	else if (c == 'x')
		ret += ft_printhexalow(va_arg(ap, unsigned int));
	else if (c == 'X')
		ret += ft_printhexaupp(va_arg(ap, unsigned int));
	else if (c == '%')
		ret += ft_printpercent();
	return (ret);
}

int	ft_printf(const char *s, ...)
{
	int		ret;
	size_t	i;
	va_list	ap;

	i = 0;
	ret = 0;
	if (!s)
		return (-1);
	va_start(ap, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			ret += my_print(ap, s[i + 1]);
			i++;
		}
		else
			ret += write(1, &s[i], 1);
		i++;
	}
	va_end(ap);
	return (ret);
}
/*#include <stdio.h>
#include <unistd.h>
int main()
{
	int a = ft_printf(" %p ", 1);
	printf("%d",a);
	printf("\n");
	int b = printf(" %p ", 1);
    printf("%d",b);
	return (0);
}*/
