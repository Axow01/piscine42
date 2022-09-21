/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:30:59 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/20 15:57:16 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	is_printable;

	is_printable = 0;
	if (*str == '\0' || *str == 0)
		is_printable = 1;
	while (*str != '\0')
	{
		if (*str == 0 || *str > 31 || *str < 1)
			is_printable = 1;
		str++;
	}
	return (is_printable);
}
