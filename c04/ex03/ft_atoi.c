/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mick <mick@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 06:42:57 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/24 22:01:31 by mick             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	operator;
	int	number;

	operator = 1;
	number = 0;
	while (*str)
	{
		if (*str == '-')
			operator *= -1;
		else if (*str >= '0' && *str <= '9')
		{
			while (*str >= '0' && *str <= '9')
			{
				number = (10 * number) + (*str - '0'); 
				str++;
			}
			break;
		}
		str++;
	}
	return (operator * number);
}
