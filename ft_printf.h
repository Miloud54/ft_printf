/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edidier <edidier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 17:26:23 by edidier           #+#    #+#             */
/*   Updated: 2025/05/16 14:01:38 by edidier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);

int		ft_printchar(char c);
int		ft_printstring(char *s);
int		ft_printptr(void *ptr);
int		ft_printint(int nb);
int		ft_printunsigned(unsigned int nb);
int		ft_printhexlow(unsigned int nb);
int		ft_printhexup(unsigned int nb);

int		ft_putchar_count(char c);
int		ft_putstr_count(char *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

#endif
