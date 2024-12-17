/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funcs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurganci <gurganci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:48:42 by gurganci          #+#    #+#             */
/*   Updated: 2024/11/10 17:51:09 by gurganci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchar(char c)
{
    write(1,&c,1);
    return 1;
}
int ft_putstr(char *str)
{
    int i;
    i=0;
    if(str == NULL)
        write(1,(null),6);
    while (str[i])
    {
        write(1,&str[i],1);
        i++;
    }
    return i;
}