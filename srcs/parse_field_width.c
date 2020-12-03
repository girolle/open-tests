/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_field_width.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rczarfun <rczarfun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 19:45:09 by dhojt             #+#    #+#             */
/*   Updated: 2020/12/03 20:57:10 by rczarfun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_printf	*parse_width(t_printf *tab)
{
	while (tab->f_treat[tab->i] >= '0' && tab->f_treat[tab->i] <= '9')
	{
		tab->width *= 10;
		tab->width += (tab->f_treat[tab->i] - 48);
		tab->i++;
	}
	return (tab);
}
