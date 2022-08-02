/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmunoz-a <fmunoz-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:05:04 by fmunoz-a          #+#    #+#             */
/*   Updated: 2022/05/30 12:13:15 by fmunoz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(char const *input, ...);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *str);
void	ft_putchar(char c);
int		ft_putstr(char *s, int tc);
int		ft_putnbr(int n, int tc);
int		base10(unsigned int i, int tc);
int		lchex(unsigned int i, int tc);
int		uchex(unsigned int i, int tc);
int		pnt(unsigned long i, int tc, int boolean);

#endif