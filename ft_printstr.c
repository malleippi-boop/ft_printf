/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmanett <frmanett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:19:54 by frmanett          #+#    #+#             */
/*   Updated: 2026/01/08 16:58:21 by frmanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *s)
{
	int	result;

	result = 0;
	if (!s)
		return (write (1, "(null)", 6));
	while (*s)
	{
		result += write(1, s, 1);
		s++;
	}
	return (result);
}
