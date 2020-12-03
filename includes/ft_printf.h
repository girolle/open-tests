/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rczarfun <rczarfun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 17:52:26 by rczarfun          #+#    #+#             */
/*   Updated: 2020/12/03 21:46:57 by rczarfun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define SPECIFIERS "scSCdDiuUoOxXbp%"
# define FLAGS "-+ 0#"
# define LENGTHS "lhjz"

# include "../srcs/libft/libft.h"
# include <ctype.h>
# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include <stdlib.h>

typedef struct	s_printf
{
	const char	*raw_string;
	va_list		args;
	int			ret;
	size_t		i;
	long int	precision;
	long int	width;
	char		type;
	char		flags[6];
	char		length[2];
}				t_printf;

int				ft_printf(const char *raw_string, ...);
int				dissection(t_printf *tab);
int				handler(t_printf *tab);

t_printf		*init(t_printf *tab);
t_printf		*reinit(t_printf *tab);

t_printf		*parse_flags(t_printf *tab);
t_printf		*parse_width(t_printf *tab);
t_printf		*parse_precision(t_printf *tab);
t_printf		*parse_length(t_printf *tab);
t_printf		*parse_type(t_printf *tab);

t_printf		*handle_hub(t_printf *tab);
t_printf		*handle_d(t_printf *tab);
t_printf		*handle_s(t_printf *tab);
t_printf		*handle_c(t_printf *tab);
t_printf		*handle_u(t_printf *tab);
t_printf		*handle_x(t_printf *tab);
t_printf		*handle_o(t_printf *tab);
t_printf		*handle_p(t_printf *tab);
t_printf		*handle_ws(t_printf *tab);
t_printf		*handle_other(t_printf *tab);
void			put_wchar_ret(wint_t c, t_printf *tab);
void			put_filling(t_printf *tab, char c, int len, int update_len);

#endif
