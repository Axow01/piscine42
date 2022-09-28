/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:19:21 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/27 20:41:49 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	factorial(int *nbr, int *i)
{
	*nbr *= *i;
	*i = *i - 1;
	if (*i != 1)
	{
		factorial(nbr, i);
	}
}

int	ft_recursive_factorial(int nb)
{
	int	i;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	i = nb - 1;
	factorial(&nb, &i);
	return (nb);
}