/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edidier <edidier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:42:40 by edidier           #+#    #+#             */
/*   Updated: 2025/05/13 13:51:22 by edidier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsigned(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb >= 10)
		count += ft_printunsigned(nb / 10);
	count += ft_putchar_count((nb % 10) + '0');
	return (count);
}
