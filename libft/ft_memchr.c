/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwinnink <gwinnink@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:43:54 by gwinnink          #+#    #+#             */
/*   Updated: 2022/03/02 12:13:28 by gwinnink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char		*strbuff;
	unsigned int	i;

	strbuff = str;
	i = 0;
	while (n--)
	{
		if (strbuff[i] == c)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}
