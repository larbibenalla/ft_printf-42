/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labenall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:38:12 by labenall          #+#    #+#             */
/*   Updated: 2021/12/14 02:00:13 by labenall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *s, ...);
int	ft_printstr(char *s);
int	ft_printhexa(void *a);
int	ft_printdecimal(int n);
int	ft_printchar(int c);
int	ft_printundec(unsigned int un);
int	ft_printpercent(void);
int	ft_printhexaupp(unsigned int n);
int	ft_printhexalow(unsigned int n);

#endif
