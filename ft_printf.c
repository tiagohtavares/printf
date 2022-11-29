/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:28:37 by ttavares          #+#    #+#             */
/*   Updated: 2022/11/29 16:22:17 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_format(const char *converter, int i, va_list conv)
{

}

int ft_printf(const char *text, ...)
{
	va_list	conv;
	int	i;
	int	totalchar;

	va_start(conv, text);
	i = 0;
	totalchar = 0;
	while (text[i])
	{
		if (text[i] != '%' && !(ft_strchr("cspdiuxX%", text[i+1])))
			totalchar += write(1,&text[i],1);
		else
			totalchar += check_format(text, i + 1, conv);
		i++;
	}
	va_end(conv);
	return (totalchar);
}
