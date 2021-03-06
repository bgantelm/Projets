/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_digit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgantelm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 16:03:32 by bgantelm          #+#    #+#             */
/*   Updated: 2016/03/21 16:03:34 by bgantelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	str_digit(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (str[i] == '.')
		{
			if (j == 1)
				return (1);
			j = 1;
			i++;
		}
		if (str[i] > 57 || str[i] < 48)
			return (1);
		i++;
	}
	return (0);
}
