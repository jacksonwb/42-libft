/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_len.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbeall <jbeall@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 14:24:47 by jbeall            #+#    #+#             */
/*   Updated: 2018/12/12 19:30:23 by jbeall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	itoa_len(int n)
{
	unsigned int count;

	count = 0;
	if (n == 0)
		return(1);
	if (n < 0)
		++count;
	while (n != 0)
	{
		++count;
		n /= 10;
	}
	return (count);
}
