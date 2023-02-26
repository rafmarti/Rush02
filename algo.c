/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:08:34 by llapage           #+#    #+#             */
/*   Updated: 2023/02/26 10:04:04 by rafaemar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	algo(unsigned int())
{
	if (num >= 1000000000)
	{
		algo(num / 1000000000);
		write (1, " billion", 8);
		num %= 1000000000;
	}
	if (num >= 1000000)
	{
		algo(num / 1000000);
		write (1, " million", 8);
		num %= 1000000;
	}
	if (num >= 1000)
	{
		algo(num / 1000);
		write (1, " thousand", 9);
		num %= 1000;
	}
	if (num >= 100)
	{
		algo(num / 100);
		write (1, " hundred", 8);
		num %= 100;
	}
	if (num >= 20)
	{
		algo(num/10 * 10);
		write (dizaine);
		num % (num/10 * 10);
	}
	if (num > 0)
	{
		write(num);
	}
	else 
		return ;

}

