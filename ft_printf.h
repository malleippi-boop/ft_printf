/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmanett <frmanett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:47:40 by frmanett          #+#    #+#             */
/*   Updated: 2026/01/08 16:58:49 by frmanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <ctype.h>
# include <strings.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_printchar(char c);
int		ft_printnbr(int n);
int		ft_printhexa(unsigned int n, char c);
int		ft_printptr(unsigned long long n, short flag);
int		ft_printstr(char *s);
int		ft_printunsignednbr(unsigned int n);

#endif