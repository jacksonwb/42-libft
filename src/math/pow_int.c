/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pow_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbeall <jbeall@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 12:05:07 by jbeall            #+#    #+#             */
/*   Updated: 2018/12/03 13:21:39 by jbeall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int pow_int(int n, unsigned int pow)
{
	if (pow == 0)
		return (1);
	if (n == 0)
		return (0);
	while (--pow)
		n *= n;
	return (n);
}