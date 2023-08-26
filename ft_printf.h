/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-a <dmoura-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:39:43 by dmoura-a          #+#    #+#             */
/*   Updated: 2022/07/29 12:33:35 by dmoura-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_putchar(char c);
int		ft_putstr(const char *str);
int		ft_putnbr(int n);
int		ft_putnbr_u(unsigned int n);
int		ft_printif(const char a, va_list listpa);
int		ft_printf(const char *a, ...);
int		ft_putstr(const char *str);
int		free_function(char *p);
char	*mallocation(size_t size);
int		ft_printhex(unsigned int n, char *str);
int		ft_printptr(void *p, char *str);

#endif