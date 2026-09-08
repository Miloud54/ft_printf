/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edidier <edidier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:07:09 by edidier           #+#    #+#             */
/*   Updated: 2025/05/13 13:51:14 by edidier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexlow(unsigned int nb)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (nb >= 16)
		count += ft_printhexlow(nb / 16);
	count += ft_putchar_count(base[nb % 16]);
	return (count);
}

int	ft_printhexup(unsigned int nb)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789ABCDEF";
	if (nb >= 16)
		count += ft_printhexup(nb / 16);
	count += ft_putchar_count(base[nb % 16]);
	return (count);
}
