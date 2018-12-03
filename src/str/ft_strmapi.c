/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbeall <jbeall@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 16:41:21 by jbeall            #+#    #+#             */
/*   Updated: 2018/12/01 15:59:03 by jbeall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = 0;
	str = NULL;
	if (s && f)
	{
		if (!(str = (char*)malloc(ft_strlen(s) + 1)))
			return (NULL);
		while (*s)
		{
			str[i] = f(i, *s++);
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
