/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_escaped.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdelardi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 15:36:36 by sdelardi          #+#    #+#             */
/*   Updated: 2016/03/14 15:37:10 by sdelardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <readline.h>

int	is_escaped(t_readline *r, int i)
{
	int	s;
	int	j;

	s = 0;
	if (i > 0 && (r->line)[i - 1] == '\\')
	{
		j = i - 1;
		while (j >= 0 && (r->line)[j] == '\\')
		{
			j--;
			s++;
		}
	}
	if (s % 2 == 0)
		s = 0;
	return (s);
}
