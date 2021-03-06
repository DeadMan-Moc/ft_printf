/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 09:43:56 by amokgohl          #+#    #+#             */
/*   Updated: 2018/08/19 12:09:37 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*stup(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		str[i] = ft_toupper(str[i]);
	}
	return (str);
}
