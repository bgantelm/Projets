/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoudan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 12:06:36 by jhoudan           #+#    #+#             */
/*   Updated: 2016/02/18 00:06:37 by jhoudan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putendl_fd(const char *s, int fd)
{
	int i;

	i = write(fd, s, ft_strlen(s));
	i += write(fd, "\n", 1);
	return (i);
}
