/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerturk <myerturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:50:14 by myerturk          #+#    #+#             */
/*   Updated: 2023/02/21 19:03:40 by myerturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	index;

	if (nb <= 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	index = 2;
	if (nb >= 2)
	{
		while (index * index <= nb)
		{
			if (index * index == nb)
			{
				return (index);
			}
			index++;
		}
	}
	return (0);
}
