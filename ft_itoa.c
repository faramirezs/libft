/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandroramirez <alejandroramirez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:00:09 by alramire          #+#    #+#             */
/*   Updated: 2024/05/04 18:05:01 by alejandrora      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_n_size(int n)
{
	int	len;

	len = 0;
	if (n < 1)
	{
		len++;
	}
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*ft_tmp(int n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;

	len = ft_n_size(n);
	s = ft_tmp(len);
	if (!s)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		s[0] = 45;
	}
	s[len] = '\0';
	if (n == 0)
		s[0] = '0';
	while (n != 0)
	{
		s[len - 1] = ((n % 10) + '0');
		n = n / 10;
		len--;
	}
	return (s);
}
