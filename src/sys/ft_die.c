/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_die.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbeall <jbeall@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 13:19:26 by jbeall            #+#    #+#             */
/*   Updated: 2018/12/03 13:22:04 by jbeall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	die(char *str)
{
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
	exit(0);
}