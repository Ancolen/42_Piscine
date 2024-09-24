/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerturk <myerturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:15:28 by myerturk          #+#    #+#             */
/*   Updated: 2023/02/16 11:15:31 by myerturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	makeup(char c)
{
	if (97 <= c && c <= 122)
	{
		c -= 32;
	}
	return (c);
}

char	makelow(char c)
{
	if (65 <= c && c <= 90)
	{
		c += 32;
	}
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	n;

	n = 0;
	if (str[n] == '\0')
		return (str);
	str[n] = makeup(str[n]);
	n++;
	while (str[n] != '\0')
	{
		str[n] = makelow(str[n]);
		n++;
	}
	n = 1;
	while (str[n] != '\0')
	{
		if (!((str[n] >= 'a' && str[n] <= 'z')
				|| (str[n] >= '0' && str[n] <= '9'))
			&& (str[n + 1] >= 'a' && str[n + 1] <= 'z'))
		{
			str[n + 1] = makeup(str[n + 1]);
			n++;
		}
		n++;
	}
	return (str);
}
