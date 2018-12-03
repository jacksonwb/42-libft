/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pow_of_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbeall <jbeall@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 11:58:15 by jbeall            #+#    #+#             */
/*   Updated: 2018/12/03 12:02:47 by jbeall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int pow_of_2(int n)
{
	unsigned int pow;

	pow = 1;
	if (n == 0)
		return (1);
	while (n)
	{
		pow *= 2;
		n--;
	}
	return (pow);
}