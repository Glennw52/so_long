/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwinnink <gwinnink@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:38:52 by gwinnink          #+#    #+#             */
/*   Updated: 2022/02/09 17:02:42 by gwinnink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	trgb(int t, int r, int g, int b)
{
	return ((t << 24) | (r << 16) | (g << 8) | b);
}

void	my_pixel_put(t_img *img, int x, int y, unsigned int colour)
{
	char	*dst;
	int		offset;

	if (colour == 0xFF000000)
		return ;
	offset = y * img->l_size + x * (img->bits_ppx / 8);
	dst = img->addr + offset;
	*(unsigned int *)dst = colour;
}

void	fill_vect(t_vector *vect, int x, int y)
{
	vect->x = x;
	vect->y = y;
}
