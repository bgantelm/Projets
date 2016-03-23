/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgantelm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 15:11:52 by bgantelm          #+#    #+#             */
/*   Updated: 2016/03/21 15:36:29 by bgantelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rtv1.h>

t_pos	*vectorcopy(t_pos *v1)
{
	t_pos	*result;

	result = malloc(sizeof(t_pos));
	result->x = v1->x;
	result->y = v1->y;
	result->z = v1->z;
	return (result);
}

void	vectornorm(t_pos *v)
{
	double	tmp;

	tmp = 1 / sqrt((v->x * v->x) + (v->y * v->y) + (v->z * v->z));
	v->x = v->x * tmp;
	v->y = v->y * tmp;
	v->z = v->z * tmp;
}
