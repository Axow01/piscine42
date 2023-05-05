/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:06:09 by mmarcott          #+#    #+#             */
/*   Updated: 2022/10/02 18:34:34 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	rem;

	rem = nb - 1;
	if (nb == 1 || nb == 0 || nb < 0)
		return (0);
	while (rem > 1)
	{
		if (nb % rem == 0)
			return (0);
		rem--;
	}
	return (1);
}