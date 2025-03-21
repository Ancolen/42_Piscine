/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerturk <myerturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:13:14 by myerturk          #+#    #+#             */
/*   Updated: 2023/02/16 11:13:21 by myerturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if ((97 <= str[n] && str[n] <= 122) || (65 <= str[n] && str[n] <= 90))
		{
			n++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
