/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:31:44 by ttavares          #+#    #+#             */
/*   Updated: 2022/12/05 16:49:56 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include<stdio.h>
# include<unistd.h>
# include<stdlib.h>

int		ft_printf(const char *text, ...);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putstr(char *str);
char	*ft_strchr(const char *str, int c);
char	*ft_itoa(int n);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlen(const char *s);
int		ft_putnbr_unsigned(unsigned int n);
char	*ft_itoa_unsigned(unsigned int n);
int		ft_puthex_lower(unsigned int num);
int		ft_puthex_upper(unsigned int num);
int		ft_putptr(unsigned long long num);

#endif
