/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbeall <jbeall@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 16:07:06 by jbeall            #+#    #+#             */
/*   Updated: 2018/12/01 15:59:02 by jbeall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;

	src = (unsigned char*)s;
	while (n)
	{
		if (*src == (unsigned char)c)
			return ((void*)src);
		--n;
		++src;
	}
	return (NULL);
}
