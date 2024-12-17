/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurganci <gurganci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:25:10 by gurganci          #+#    #+#             */
/*   Updated: 2024/11/10 18:53:12 by gurganci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char c, va_list arg)
{
	int	value;

	value = 0;
	if (c = 'c')
		value += ft_putchar(va_arg(arg, int));
	else if (c = 's')
		value += ft_putstr(va_arg(arg, char *));
	else if (c = '%')
		value += ft_putchar('%');
	else if (c = 'd')
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		value;

	va_start(arg, str);
	i = 0;
	value = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
		}
	}
}
