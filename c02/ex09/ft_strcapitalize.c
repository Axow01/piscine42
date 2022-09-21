/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:46:19 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/20 21:10:54 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_letter(char c)
{
	int	is_letter;

	is_letter = 0;
	if (c >= 97 && c <= 122)
		is_letter = 1;
	return (is_letter);
}

int	alpha(char c)
{
	int	is_letter;

	is_letter = 1;
	if ((c < 65 || c > 90) && (c < 97 || c > 122))
		is_letter = 0;
	return (is_letter);
}

int	is_maj(char c)
{
	int	is_maj;

	is_maj = 0;
	if (c >= 'A' && c <= 'Z')
		is_maj = 1;
	return (is_maj);
}

char	*ft_strcapitalize(char *str)
{
	char	*cur;
	char	prev;
	int		i;

	i = 0;
	cur = str;
	prev = ' ';
	while (*cur != '\0')
	{
		if (!alpha(prev) && is_letter(*cur))
			*cur = *cur - 32;
		else if (alpha(prev) && is_maj(*cur))
			*cur = *cur + 32;
		prev = *cur;
		cur++;
		i++;
	}
	return (str);
}
